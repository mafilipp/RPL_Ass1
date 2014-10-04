note
	description: "Sensors shows distance to the obstacle."
	author: "Rusakov Andrey"
	date: "03.09.2013"

class
	RANGE_SENSOR

create
	make_with_range

feature {NONE} -- Initialization

	make_with_range (a_min_range: REAL_64; a_max_range: REAL_64)
			-- Create the sensor with the valid range between `a_min_range' and `a_max_range'.
		require
			a_min_range > 0.0
			a_max_range > 0.0
			a_max_range > a_min_range
		do
			min_range := a_min_range
			max_range := a_max_range
		end

feature -- Access

	min_range: REAL_64
			-- Closest valid distance to the obstacle.

	max_range: REAL_64
			-- Farthest valid distance to the obstacle.

	range: REAL_64
			-- Distance to the obstacle in meters.

	update_range (a_range: REAL_64)
			-- Replace the value of `range' with `a_range'.
		do
			range := a_range
		end

	is_valid_range: BOOLEAN
			-- Is current range of Current considered as properly measured?
		do
			Result := range >= min_range and range <= max_range
		end
end
