note
	description: "Starter for an external Roboscoop node."
	author: "Rusakov Andrey"
	date: "22.03.2013"

class
	ROS_NODE_STARTER

inherit
	BARRIER

feature -- Access

	roboscoop_node: separate ROBOSCOOP_NODE
			-- Singleton for ROS node.
		once ("PROCESS")
			create Result.make
			init_node (Result)
		end

feature {NONE} -- Implementation

	init_node (a_node: separate ROBOSCOOP_NODE)
			-- Initialize `a_node' in ROS.
		do
			a_node.init
			synchronize (a_node)
		end
end
