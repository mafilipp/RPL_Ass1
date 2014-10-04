note
	description: "Class represents a group (array) of ground sensors."
	author: "Rusakov Andrey"
	date: "18.09.2013"

deferred class
	GROUND_SENSOR_GROUP

feature {NONE} -- Initialization

	register_sensors
			-- Create sensors and add them into the array.
		deferred
		end

feature -- Access

	sensors: ARRAY[GROUND_SENSOR]
			-- Array of sensors.

	is_lifted: BOOLEAN
			-- Is the robot considered to be lifted over the ground?

	update_sensors (prox_g: separate GROUND_GROUP_MSG)
			-- Update sensor values.
		local
			i, j: INTEGER
			is_l: BOOLEAN
		do
			from
				i := sensors.lower
				j := prox_g.reflected.lower
				is_l := False
			until
				j > prox_g.reflected.upper or j > prox_g.ambient.upper or i > sensors.upper
			loop
				sensors[i].update_values (prox_g.ambient[j].to_double, prox_g.reflected[j].to_double)
				if not is_l and then sensors[i].is_lifted then
					is_l := True
				end
				i := i + 1
				j := j + 1
			end
			is_lifted := is_l
		end
end
