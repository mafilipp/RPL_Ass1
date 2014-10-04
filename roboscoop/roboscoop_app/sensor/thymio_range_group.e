note
	description: 	"[
						Group of Thymio's horizontal range sensors.
						Detects obstacles around the robot.
					]"
	author: "Rusakov Andrey"
	date: "18.09.2013"

class
	THYMIO_RANGE_GROUP

inherit
	RANGE_SENSOR_GROUP
		redefine
			register_sensors
		end

create
	make_with_topic

feature {NONE} -- Initialization.

	make_with_topic (topic_name: separate STRING)
			-- Create an array of sensors and register them.
		do
			create sensors.make_empty
			register_sensors
			create subscriber.make
			subscribe_range (subscriber, Current, topic_name)
		end

	register_sensors
			-- Create sensors and add them into the array.
		do
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.092), 1)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.130), 2)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.140), 3)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.140), 4)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.125), 5)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.130), 6)
			sensors.force (create {RANGE_SENSOR}.make_with_range (0.01, 0.090), 7)
		end

feature -- Constants.

	distance_to_front_range_sensor: REAL_64 = 0.08;
			-- Distance from the center of the robot to the front range sensors (in meters).

feature -- Access.

	update_sensors (prox_h: separate RANGE_GROUP_MSG)
			-- <Precursor>
		local
			i: INTEGER
			is_obst, in_front, at_back, is_huge: BOOLEAN
			left_sum, right_sum: REAL_64
		do
			from
				i := 1
			until
				i > prox_h.range.count or i > sensors.count
			loop
				sensors[i].update_range (prox_h.range[i])
				if sensors[i].is_valid_range then
					if not is_obst then
						is_obst := True
					end
					if not in_front and i <=5 then
						in_front := True
					end
					if not at_back and i >= 6 and i <=7 then
						at_back := True
					end
					if i = 1 or i = 2 or i = 6 then
						left_sum := left_sum + sensors[i].range
					end
					if i = 4 or i = 5 or i = 7 then
						right_sum := right_sum + sensors[i].range
					end
				end
				i := i + 1
			end

			is_huge := True

			if in_front then
				from
					i := 1
				until
					i > 5 or not is_huge
				loop
					if i /= 3 and not sensors[i].is_valid_range then
						is_huge := False
					else
						i := i + 1
					end
				end
			end

			if at_back then
				from
					i := 6
				until
					i > 7 or not is_huge
				loop
					if not sensors[i].is_valid_range then
						is_huge := False
					else
						i := i + 1
					end
				end
			end

			if not (in_front or at_back) then
				is_huge := False
			end

			is_obstacle := is_obst
			is_obstacle_in_front := in_front
			is_obstacle_at_back := at_back
			is_obstacle_huge := is_huge

			if left_sum >= right_sum then
				is_obstacle_at_left := False
				is_obstacle_at_right := True
			else
				is_obstacle_at_left := True
				is_obstacle_at_right := False
			end
		end

	is_front_sensor (a_index: INTEGER): BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	hit_point_front (a_sensor_index: INTEGER): VECTOR_2D
			-- <Precursor>
		do
			-- TODO.
			Result := create {VECTOR_2D}
		end

	has_obstacle (a_direction_with_respect_to_robot: REAL_64): BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	is_enough_space_for_changing_direction: BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	is_all_front_sensors_open: BOOLEAN
			-- <Precursor>
		do
			-- TODO.
			Result := False
		end

	open_direction_front: VECTOR_2D
			-- <Precursor>
		do
			-- TODO.
			Result := create {VECTOR_2D}
		end

	follow_wall_orientation (a_desired_distance_from_wall: REAL_64): REAL_64
			-- <Precursor>
		do
			-- TODO.
			Result := 0.0
		end

feature {NONE} -- Implementation.

	subscriber: separate ROS_SUBSCRIBER [RANGE_GROUP_MSG]
			-- Subscriber object.

	subscribe_range (a_sub: separate ROS_SUBSCRIBER [RANGE_GROUP_MSG];
						a_listener: separate RANGE_SENSOR_GROUP; a_topic: separate STRING)
			-- Subscriber for range sensors update.
		do
			a_sub.subscribe (a_topic, agent a_listener.update_sensors)
		end
end
