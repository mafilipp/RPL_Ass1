note
	description: "Current position, pose and speed in 2D."
	author: "Rusakov Andrey"
	date: "18.09.2013"

class
	ODOMETRY_SIGNALER

inherit
	ODOMETRY_LISTENER

create
	make_with_topic

feature {NONE} -- Initilization

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create subscriber.make
			subscribe_odometry (subscriber, Current, topic_name)
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
			-- Timestamp (in seconds).

	update_odometry (odom: separate ODOMETRY_MSG)
			-- Update current state with the values from `odom'.
		do
			x := odom.x
			y := odom.y
			theta := odom.theta
			vx := odom.vx
			vtheta := odom.vtheta
			timestamp := odom.timestamp
		end

	is_moving: BOOLEAN
			-- Does robot have speed?
		do
			Result := vx.abs > 0.0 or vtheta.abs > 0.0
		end

	is_twisting: BOOLEAN
			-- Does robot have angular speed?
		do
			Result := vtheta.abs > 0.0
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [ODOMETRY_MSG]
			-- Subscriber object.

	subscribe_odometry (a_sub: separate ROS_SUBSCRIBER [ODOMETRY_MSG];
							a_listener: separate ODOMETRY_LISTENER; a_topic: separate STRING)
			-- Subscriber for odometry update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_odometry)
		end
end
