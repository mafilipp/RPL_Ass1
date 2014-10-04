note
	description: "Roboscoop node, which manages external communication. (Only one node per application can be created.)"
	author: "Rusakov Andrey"
	date: "22.03.2013"

class
	ROBOSCOOP_NODE

create
	make

feature {NONE} -- Initialization

	make
			-- Create a ROS node at the C++ side.
			-- This creation procedure should be called using `ROS_NODE_STARTER' class.
		do
			create c_name.make (Name.twin)
			node := c_ros_new_node (c_name.item)
		end

feature -- Access

	init
			-- Initialize the node inside ROS.
		do
			c_ros_init_node (node)
		end

	shutdown
			-- Finish and close the node inside ROS.
		do
			c_ros_shutdown_node (node)
		end

feature {NONE} -- Implementation

	Name: STRING
			-- Name of the node in ROS.
		once
			Result := "roboscoop_ros_node"
		end

	c_name: C_STRING
			-- Node's name object to be used in C++.

	node: POINTER
			-- Pointer to the C++ object.

feature {NONE} -- Externals

	c_ros_new_node (a_c_node_name: POINTER): POINTER
		external
			"C++ inline use %"roboscoop_node.h%""
		alias
			"return new RoboscoopNode($a_c_node_name);"
		end

	c_ros_init_node (a_node_obj: POINTER)
		external
			"C++ inline use %"roboscoop_node.h%""
		alias
			"((RoboscoopNode*)($a_node_obj))->init();"
		end

	c_ros_shutdown_node (a_node_obj: POINTER)
		external
			"C++ inline use %"roboscoop_node.h%""
		alias
			"((RoboscoopNode*)($a_node_obj))->shutdown();"
		end
end
