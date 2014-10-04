note
	description: "Eiffel representation of ROS AsebaEvent message type."
	author: "Rusakov Andrey"
	date: "30.04.2014"

class
	ASEBA_MSG

inherit
	ROS_MESSAGE
		redefine
			make_empty, subscribe_to_ros
		end

create
	make_from_pointer, make, make_empty,
	make_with_one_value, make_with_two_values, make_with_three_values

feature {NONE} -- Initialization

	make_empty
			--
		do
			create data.make_empty
		end

	make (a_data: separate ARRAY[INTEGER_16])
			-- Create `Current' with the values of `data'.
		do
			data := copy_to_non_sep (a_data)
			c_data := c_create_data (data.area.base_address, data.count)
		end

	make_with_one_value (value: INTEGER_16)
			-- Create `Current' with `value'.
		do
			create data.make_filled (0, 1, 1)
			data[1] := value
			c_data := c_create_data (data.area.base_address, data.count)
		end

	make_with_two_values (value_first, value_second: INTEGER_16)
			-- Create `Current' with `value_first' and `value_second'.
		do
			create data.make_filled (0, 1, 2)
			data[1] := value_first
			data[2] := value_second
			c_data := c_create_data (data.area.base_address, data.count)
		end

	make_with_three_values (value_first, value_second, value_third: INTEGER_16)
			-- Create `Current' with `value_first', `value_second' and `value_third'.
		do
			create data.make_filled (0, 1, 3)
			data[1] := value_first
			data[2] := value_second
			data[3] := value_third
			c_data := c_create_data (data.area.base_address, data.count)
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

feature -- Access

	timestamp: REAL_64
			-- Time stamp.

	data: ARRAY [INTEGER_16]
			-- Message data.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		local
			data_size: INTEGER
		do
			timestamp := get_timestamp_from_cpp (c_ptr)
			data_size := get_data_size_from_cpp (c_ptr)
			create data.make_filled (0, 1, data_size)
			get_array_data_from_cpp (data.area.base_address, c_ptr, data_size)
		end

feature {ROS_PUBLISHER}

	publish_to_ros (a_worker: POINTER)
			--
		do
			c_ros_publish (a_worker, c_data, data.count)
		end

feature {NONE} -- Implementation

	c_data: POINTER
			-- Data for publishing, C++ array.

	copy_to_non_sep (a_data: separate ARRAY[INTEGER_16]): ARRAY [INTEGER_16]
			--
		local
			i: INTEGER
		do
			create Result.make_filled (0, a_data.lower, a_data.upper)
			from
				i := a_data.lower
			until
				i > a_data.upper
			loop
				Result[i] := a_data[i]
				i := i + 1
			end
		end

feature {NONE} -- Externals

	c_create_data (eif_array: POINTER; size: INTEGER): POINTER
		external
			"C++ inline"
		alias
			"[
				short *data = new short [$size];
				memcpy ((EIF_INTEGER_16 *)data, $eif_array, $size * sizeof (EIF_INTEGER_16));
				return data;
			]"
		end

	get_timestamp_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"return (double)(((asebaros::AsebaEvent*)($c_ptr))->stamp.toSec());"
		end

	get_data_size_from_cpp (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"return (int)(((asebaros::AsebaEvent*)($c_ptr))->data.size());"
		end

	get_array_data_from_cpp (eif_array: POINTER; c_ptr: POINTER; size: INTEGER)
		external
			"C++ inline use %"asebaros/AsebaEvent.h%""
		alias
			"[
				memcpy ((EIF_INTEGER_16 *)$eif_array, &(((asebaros::AsebaEvent*)($c_ptr))->data[0]), $size * sizeof (EIF_INTEGER_16));
			]"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"asebaros/AsebaEvent.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <asebaros::AsebaEvent> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_data: POINTER; a_size: INTEGER)
		external
			"C++ inline use %"publisher.h%", %"asebaros/AsebaEvent.h%""
		alias
			"[
				asebaros::AsebaEvent msg;
				short *data = (short*)$a_data;
				std::vector<short> d(data, data + $a_size);
				msg.stamp = ros::Time::now();
				msg.source = 0;
				msg.data = d;
				((Publisher*)($a_worker_obj))->publish_message <asebaros::AsebaEvent> (msg);
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"asebaros/AsebaEvent.h%""
		alias
			"[
				((Subscriber*)($a_worker_obj))->subscribe<asebaros::AsebaEvent, asebaros::AsebaEvent::ConstPtr> ($c_topic_name, $obj, $routine);
			]"
		end
end
