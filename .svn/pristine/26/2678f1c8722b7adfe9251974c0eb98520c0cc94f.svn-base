note
	description: "Test class for trying the stop mechanism of Roboscoop."
	author: "Rusakov Andrey"
	date: "08.09.2014"

class
	APP_DURATION

create
	make

feature {NONE} -- Initialization.

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
			launch_with_duration (thymio, 5000)
		end

feature {NONE} -- Implementation

	thymio: separate THYMIO_ROBOT
			-- The robot.

	launch_with_duration (robot: separate THYMIO_ROBOT; stop_after_millisec: INTEGER)
			-- Start `robot's behaviour and stop it after `stop_after_millisec' elapsed.
		local
			invoker: separate ON_TIMER_INVOKER
		do
			create invoker.make (stop_after_millisec, agent robot.stop_discovering)
			start_invoker (invoker)
			robot.start_discovering
		end

	start_invoker (a_invoker: separate ON_TIMER_INVOKER)
			-- Start `a_invoker's timer.
		do
			a_invoker.start
		end

	ros_spinner: separate ROS_SPINNER
			-- ROS spinner object for communication.

	start_spin (rs: separate ROS_SPINNER)
			-- Start listening to ROS.
		do
			rs.start
		end
end
