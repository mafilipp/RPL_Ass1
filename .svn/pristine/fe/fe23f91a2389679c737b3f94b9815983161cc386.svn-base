note
	description: "IR sensor which shows ambient and reflected signal from the ground."
	author: "Rusakov Andrey"
	date: "17.09.2013"

class
	GROUND_SENSOR

create
	make_with_lift_tolerance

feature {NONE} -- Initialization

	make_with_lift_tolerance (a_min_ground: REAL_64)
			-- Create the sensor which considered to be lifted whenever
			-- the amount of the reflected signal is less than `a_min_lifted'.
		do
			lift_tolerance := a_min_ground
		end

feature -- Access

	ambient: REAL_64
			-- Amount of ambient IR signal.

	reflected: REAL_64
			-- Amount of reflected IR signal.

	is_lifted: BOOLEAN
			-- Is sensor far enough from the surface?
		do
			Result := reflected < lift_tolerance
		end

	update_values (a_amb, a_refl: REAL_64)
			-- Replace the values with `a_amb' and `a_refl'.
		do
			ambient := a_amb
			reflected := a_refl
		end

	lift_tolerance: REAL_64
			-- Min value when robot is still considered standing on the ground.
end
