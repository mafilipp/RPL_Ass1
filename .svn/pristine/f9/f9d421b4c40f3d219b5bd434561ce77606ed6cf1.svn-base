note
	description: "Eiffel representation of ROS nav_msgs/Odometry message type."
	author: "Rusakov Andrey"
	date: "28.08.2013"

class
	ODOMETRY_MSG

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

	make_now (a_x, a_y, a_theta, a_vx, a_vtheta: REAL_64)
			-- Construct `Current' with specified values.
		do
			x := a_x
			y := a_y
			theta := a_theta
			vx := a_vx
			vtheta := a_vtheta
			timestamp := get_now
		end

feature -- Access

	x, y: REAL_64
			-- Position.

	theta: REAL_64
			-- Orientation.

	vx: REAL_64
			-- Linear velocity.

	vtheta: REAL_64
			-- Angular velocity.

	timestamp: REAL_64
			-- Time stamp.

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			x := get_x_from_cpp (c_ptr)
			y := get_y_from_cpp (c_ptr)
			theta := get_theta_from_cpp (c_ptr)
			vx := get_vx_from_cpp (c_ptr)
			vtheta := get_vtheta_from_cpp (c_ptr)
			timestamp := get_timestamp_from_cpp (c_ptr)
		end

feature {ROS_PUBLISHER}

	publish_to_ros (a_worker: POINTER)
			--
		do
			c_ros_publish (a_worker, x, y, theta, vx, vtheta, timestamp)
		end

feature {NONE} -- Externals

	get_x_from_cpp (c_ptr: POINTER): REAL_64
			--
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return (double)(((nav_msgs::Odometry*)($c_ptr))->pose.pose.position.x);"
		end

	get_y_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return (double)(((nav_msgs::Odometry*)($c_ptr))->pose.pose.position.y);"
		end

	get_theta_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"[
				nav_msgs::Odometry *m = (nav_msgs::Odometry*)($c_ptr);
				return (double) atan2(m->pose.pose.orientation.z, m->pose.pose.orientation.w) * 2.0;
			]"
		end

	get_vx_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return (double)(((nav_msgs::Odometry*)($c_ptr))->twist.twist.linear.x);"
		end

	get_vtheta_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return (double)(((nav_msgs::Odometry*)($c_ptr))->twist.twist.angular.z);"
		end

	get_timestamp_from_cpp (c_ptr: POINTER): REAL_64
		external
			"C++ inline use %"nav_msgs/Odometry.h%""
		alias
			"return (double)(((nav_msgs::Odometry*)($c_ptr))->header.stamp.toSec());"
		end

	c_ros_advertize (a_worker_obj: POINTER; a_queue_size: INTEGER; a_is_latched: BOOLEAN)
		external
			"C++ inline  use %"publisher.h%", %"nav_msgs/Odometry.h%""
		alias
			"((Publisher*)($a_worker_obj))->advertize <nav_msgs::Odometry> ($a_queue_size, $a_is_latched);"
		end

	c_ros_publish (a_worker_obj: POINTER; a_x, a_y, a_theta: REAL_64;
						a_vx, a_vtheta: REAL_64; a_timestamp: REAL_64)
		external
			"C++ inline use %"publisher.h%", %"nav_msgs/Odometry.h%", %"tf/transform_datatypes.h%""
		alias
			"[
				ros::Time t;
				t.fromSec($a_timestamp);
				
				tf::Quaternion q;
				q.setRPY(0, 0, $a_theta);
				
				nav_msgs::Odometry msg;
				msg.header.stamp = t;
				msg.pose.pose.position.x = $a_x;
				msg.pose.pose.position.y = $a_y;
				msg.pose.pose.orientation.x = q.getX();
				msg.pose.pose.orientation.y = q.getY();
				msg.pose.pose.orientation.z = q.getZ();
				msg.pose.pose.orientation.w = q.getW();
				msg.twist.twist.linear.x = $a_vx;
				msg.twist.twist.angular.z = $a_vtheta;

				((Publisher*)($a_worker_obj))->publish_message <nav_msgs::Odometry> (msg);
			]"
		end

	subscribe_to_ros (a_worker_obj: POINTER; c_topic_name: POINTER; obj: ANY; routine: POINTER)
		external
			"C++ inline use %"subscriber.h%", %"nav_msgs/Odometry.h%""
		alias
			"[
				((Subscriber*)($a_worker_obj))->subscribe<nav_msgs::Odometry, nav_msgs::Odometry::ConstPtr> ($c_topic_name, $obj, $routine);
			]"
		end
end
