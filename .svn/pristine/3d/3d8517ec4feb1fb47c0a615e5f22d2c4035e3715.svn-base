note
	description: "Data from the group of range sensors."
	author: "Rusakov Andrey"
	date: "02.09.2013"

class
	RANGE_GROUP_MSG

inherit
	ROS_MESSAGE
		redefine
			make_empty,
			set_from_pointer
		end

create
	make_empty, make_from_pointer

feature {NONE} -- Initialization

	make_empty
			--
		do
			create range.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ object.
		do
			set_from_pointer (c_ptr)
		end

	make (a_range: separate ARRAY [REAL_64])
			--
		do
			range := copy_to_non_sep (a_range)
			c_data := c_create_data (range.area.base_address, range.count)
		end

feature -- Access

	range: ARRAY [REAL_64]
			-- Distances between the sensors and the obstacle.

	timestamp: REAL_64
			-- Time stamp.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ object.
		local
			range_size: INTEGER
		do
			timestamp := get_timestamp_from_cpp (c_ptr)
			range_size := get_range_size_from_cpp (c_ptr)
			create range.make_filled (-1.0, 1, range_size)
			get_array_data_from_cpp (range.area.base_address, c_ptr, range_size)
		end

feature {ROS_PUBLISHER}

	publish_to_ros (a_worker: POINTER)
			--
		do
			c_ros_publish (a_worker, c_data, range.count)
		end

feature {NONE} -- Implementation

	c_data: POINTER
			-- Data for publishing, C++ array.

	copy_to_non_sep (a_data: separate ARRAY[REAL_64]): ARRAY [REAL_64]
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
				double *data = new double [$size];
				memcpy ((EIF_REAL_64 *)data, $eif_array, $size * sizeof (EIF_REAL_64));
				return data;
			]"
		end

	get_timestamp_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"return (double)(((roboscoop_ros::RS_RangeGroup*)($c_ptr))->stamp.toSec());"
		end

	get_range_size_from_cpp (c_ptr: POINTER): INTEGER
		external
			"C++ inline use %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"[
				return (int)(((roboscoop_ros::RS_RangeGroup*)($c_ptr))->ranges.size());
			]"
		end

	get_array_data_from_cpp (eif_array: POINTER; c_ptr: POINTER; size: INTEGER)
		external
			"C++ inline use %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"[
				memcpy ((EIF_REAL_64 *)$eif_array, &(((roboscoop_ros::RS_RangeGroup*)($c_ptr))->ranges[0]), $size * sizeof (EIF_REAL_64));
			]"
		end

feature {NONE} -- Publish/Subscribe implementation.

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <roboscoop_ros::RS_RangeGroup> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_data: POINTER; a_size: INTEGER)
		external
			"C++ inline use %"publisher.h%", %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"[
				roboscoop_ros::RS_RangeGroup msg;
				double *data = (double*)$a_data;
				std::vector<double> d(data, data + $a_size);
				msg.stamp = ros::Time::now();
				msg.ranges = d;
				((Publisher*)($a_worker_obj))->publish_message <roboscoop_ros::RS_RangeGroup> (msg);
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"roboscoop_ros/RS_RangeGroup.h%""
		alias
			"[
				((Subscriber*)($a_worker_obj))->subscribe<roboscoop_ros::RS_RangeGroup, roboscoop_ros::RS_RangeGroup::ConstPtr> ($c_topic_name, $obj, $routine);
			]"
		end
end
