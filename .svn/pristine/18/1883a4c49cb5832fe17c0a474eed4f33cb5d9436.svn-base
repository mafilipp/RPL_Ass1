note
	description: "Velocity in 2D broken into linear and angular parts."
	author: "Rusakov Andrey"
	date: "28.08.2013"

class
	TWIST_MSG

inherit
	ROS_MESSAGE

create
	make_empty, make_from_pointer, make_now, default_create

feature {NONE} -- Initialization

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make_now (a_vx, a_vtheta: REAL_64)
			-- Construct `Current' with specifying values.
		do
			vx := a_vx
			vtheta := a_vtheta
			timestamp := get_now
		end

feature -- Access

	vx: REAL_64
			-- Linear speed.

	vtheta: REAL_64
			-- Angular speed.

	timestamp: REAL_64
			-- Time stamp.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			vx := get_vx_from_cpp (c_ptr)
			vtheta := get_vtheta_from_cpp (c_ptr)
			timestamp := get_timestamp_from_cpp (c_ptr)
		end

feature {ROS_PUBLISHER}

	publish_to_ros (a_worker: POINTER)
			-- <Precursor>
		do
			c_ros_publish (a_worker, vx, vtheta, timestamp)
		end

feature {NONE} -- Conversion from C++		

	get_vx_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"roboscoop_ros/RS_Twist.h%""
		alias
			"return (double)(((roboscoop_ros::RS_Twist*)($c_ptr))->vx);"
		end

	get_vtheta_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"roboscoop_ros/RS_Twist.h%""
		alias
			"return (double)(((roboscoop_ros::RS_Twist*)($c_ptr))->vtheta);"
		end

	get_timestamp_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"roboscoop_ros/RS_Twist.h%""
		alias
			"return (double)(((roboscoop_ros::RS_Twist*)($c_ptr))->stamp.toSec());"
		end

feature {NONE} -- Publish/Subscribe

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"roboscoop_ros/RS_Twist.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <roboscoop_ros::RS_Twist> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_vx: REAL_64; a_vtheta: REAL_64; a_timestamp: REAL_64)
		external
			"C++ inline use %"publisher.h%", %"roboscoop_ros/RS_Twist.h%""
		alias
			"[
				ros::Time t;
				t.fromSec($a_timestamp);
				roboscoop_ros::RS_Twist msg;
				msg.stamp = t;
				msg.vx = $a_vx;
				msg.vtheta = $a_vtheta;
				((Publisher*)($a_worker_obj))->publish_message <roboscoop_ros::RS_Twist> (msg);
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"roboscoop_ros/RS_Twist.h%""
		alias
			"[
				((Subscriber*)($a_worker_obj))->subscribe<roboscoop_ros::RS_Twist, roboscoop_ros::RS_Twist::ConstPtr> ($c_topic_name, $obj, $routine);
			]"
		end
end
