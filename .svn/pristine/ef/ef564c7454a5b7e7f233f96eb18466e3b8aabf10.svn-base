note
	description: "Subscriber for ROS messages."
	author: "Rusakov Andrey"
	date: "13.05.2014"

class
	ROS_SUBSCRIBER [M -> ROS_MESSAGE create make_empty, make_from_pointer end]

inherit
	SEPARATE_STRING_MAKER
	BARRIER

create
	make

feature {NONE} -- Initialization

	make
			--
		local
			n: separate ROBOSCOOP_NODE
		do
			n := (create {ROS_NODE_STARTER}).roboscoop_node
			worker := c_worker
			action := agent fake_action
			create msg.make_empty
			create topic.make_empty
		end

feature -- Access

	subscribe (topic_name: separate STRING_8; an_action: separate PROCEDURE [ANY, TUPLE[separate M]])
			-- Subscribe to ROS topic `topic_name'.
			-- `an_action' callback will be called when new messages arrive.
		local
			t_name: STRING_8
			c_t_name: C_STRING
			m: M
		do
			create t_name.make_from_separate (topic_name)
			create c_t_name.make (t_name)
			create m.make_empty
			m.subscribe_to_ros (worker, c_t_name.item, Current, $callback)
			action := an_action

			create topic.make_from_string (t_name)
		end

	release_eiffel_objects_from_c
			-- Remove protection of Eiffel objects at C++ side, so GC will be able to collect them.
		do
			c_ros_release_eiffel_objects (worker)
		end

feature {NONE} -- Implementation

	topic : STRING

	action: separate PROCEDURE [ANY, TUPLE[separate M]]
			-- Subscribed action.

	msg: separate M
			-- Current message value (to reduce SCOOP processor creation overhead).

	worker: POINTER
			-- Pointer to the C++ object.

	callback (a_ptr: POINTER)
			-- Callback function (to be called from C++).
		do
			set_message (msg, a_ptr)
			call_async (action, [msg])
		end

	set_message (m: separate M; a_ptr: POINTER)
			-- Construct `m' based on C++ `a_ptr'.
		do
			m.set_from_pointer(a_ptr)
			synchronize (m)
					--important to be syncronized - otherwise can lead to memory corruption.
		end

	call_async (an_action: separate PROCEDURE [ANY, TUPLE[separate M]]; data: TUPLE[separate M])
			-- Wrapper for calling `an_action' with arguments `data' separately.
		do
			if topic.is_equal ("roboscoop_ros/current_position") then
--				io.put_string ("Trying to update with message%N")
			end
			an_action.call(data)
		end

	c_worker: POINTER
			-- Singleton for C++ object.
		once ("PROCESS")
			Result := c_ros_new_worker
		end

	fake_action (mesg: separate M)
			-- Auxiliary agent for initialization in void-safety mode.
		do
		end

feature {NONE} -- Externals

	c_ros_new_worker: POINTER
		external
			"C++ inline use %"subscriber.h%""
		alias
			"return new Subscriber();"
		end

	c_ros_delete_worker (a_worker_obj: POINTER)
		external
			"C++ inline  use %"subscriber.h%""
		alias
			"delete ((Subscriber*)($a_worker_obj));"
		end

	c_ros_release_eiffel_objects (a_worker_obj: POINTER)
		external
			"C++ inline  use %"subscriber.h%""
		alias
			"((Subscriber*)($a_worker_obj))->release_eiffel_objects ();"
		end
end
