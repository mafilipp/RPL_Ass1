note
	description: "Test class for trying the integration of Roboscoop with Thymio-II."
	author: "Rusakov Andrey"
	date: "10.09.2014"

class
	APP

create
	make

feature {NONE} -- Initialization

	make
			-- Create and launch the robot.
		local
			robo_node: separate ROBOSCOOP_NODE
		do
			-- Initialize this application as a ROS node.
			robo_node := (create {ROS_NODE_STARTER}).roboscoop_node

			-- Create a robot object.
			create thymio.make

			-- Listen to ROS.
			create ros_spinner.make
			start_spin (ros_spinner)

			-- Launch Thymio.
			launch_robot (thymio)
		end

feature {NONE} -- Implementation

	thymio: separate THYMIO_ROBOT
			-- The robot.

	launch_robot (robot: separate THYMIO_ROBOT)
			-- Start `robot's behaviour.
		do
			robot.start_discovering
		end

	ros_spinner: separate ROS_SPINNER
			-- ROS spinner object for communication.

	start_spin (rs: separate ROS_SPINNER)
			-- Start listening to ROS.
		do
			rs.start
		end
end
