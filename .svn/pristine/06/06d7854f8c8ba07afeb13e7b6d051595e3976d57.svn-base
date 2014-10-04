note
	description: "Differential drive of the Thymio. Controls the speed of the robot."
	author: "Rusakov Andrey"
	date: "09.05.2014"

class
	THYMIO_DIFFERENTIAL_DRIVE

inherit
	DIFFERENTIAL_DRIVE

create
	make_with_topic

feature {NONE} -- Initialization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create publisher.make_with_topic (topic_name)
			publisher.advertize (1, False)
		end

feature -- Access

	set_velocity (a_vx: REAL_64; a_vtheta: REAL_64)
			-- Publishing speed.
		do
			publisher.publish (create {TWIST_MSG}.make_now (a_vx, a_vtheta))
		end

	stop
			-- Publish zero speed.
		do
			set_velocity (0.0, 0.0)
		end

feature {NONE} -- Implementation

	publisher: ROS_PUBLISHER [TWIST_MSG]
			-- Publisher object.
end
