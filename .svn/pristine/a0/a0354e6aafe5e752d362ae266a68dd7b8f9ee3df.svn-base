note
	description: 	"[
						Group of Thymio's ground range sensors.
						Detects whether the robot is lifted over the ground.
					]"
	author: "Rusakov Andrey"
	date: "08.09.2014"

class
	THYMIO_GROUND_GROUP
inherit
	GROUND_SENSOR_GROUP
		redefine
			register_sensors
		end
	SEPARATE_STRING_MAKER

create
	make_with_topic

feature {NONE} -- Initialization.

	make_with_topic (topic_name: separate STRING)
			-- Create Current.
		do
			create sensors.make_empty
			register_sensors
			create subscriber.make
			subscribe_ground (subscriber, Current, topic_name)
		end

	register_sensors
			-- Create sensors and add them into the array.
		do
			sensors.force (create {GROUND_SENSOR}.make_with_lift_tolerance (300), 1)
			sensors.force (create {GROUND_SENSOR}.make_with_lift_tolerance (300), 2)
		end

feature {NONE} -- Implementation

	subscriber: separate ROS_SUBSCRIBER [GROUND_GROUP_MSG]
			-- Subscriber object.

	subscribe_ground (a_sub: separate ROS_SUBSCRIBER [GROUND_GROUP_MSG];
						a_listener: separate GROUND_SENSOR_GROUP; a_topic: separate STRING)
			-- Subscribe for ground sensors update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_sensors)
		end
end
