note
	description: "List of used ROS topics for interaction with Thymio robot."
	author: "Rusakov Andrey"
	date: "28.08.2013"

class
	THYMIO_TOPICS

feature -- Constants

	-- Used topics.
	odometry: STRING_8 = "/thymio_driver/odometry"
	velocity: STRING_8 = "/thymio_driver/roboscoop_vel"
	prox_horizontal: STRING_8 = "/thymio_driver/roboscoop_range_group"
	prox_ground: STRING_8 = "/aseba/events/prox_ground"
	sound: STRING_8 = "/aseba/events/sound_cmd"
	circle_leds: STRING_8 = "/aseba/events/circle_leds_cmd"
	buttons_leds: STRING_8 = "/aseba/events/buttons_leds_cmd"
	top_leds: STRING_8 = "/aseba/events/top_leds_cmd"
end
