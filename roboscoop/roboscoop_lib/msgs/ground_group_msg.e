note
	description: "Data from the group of ground sensors."
	author: "Rusakov Andrey"
	date: "12.05.2014"

class
	GROUND_GROUP_MSG

inherit
	ASEBA_MSG
		rename
			make as mk
		redefine
			make_empty, make_from_pointer, set_from_pointer
		end

create
	make_empty, make_from_pointer, make

feature {NONE} -- Initialization

	make_empty
			--
		do
			create data.make_empty
			create reflected.make_empty
			create ambient.make_empty
		end

	make_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			set_from_pointer (c_ptr)
		end

	make (a_reflected, a_ambient: separate ARRAY [INTEGER_16])
			--
		local
			size: INTEGER
		do
			reflected := copy_to_non_sep (a_reflected)
			ambient := copy_to_non_sep (a_ambient)
			if reflected.count = ambient.count then
				size := reflected.count
			else
				size := -1
			end
			create data.make_filled (0, 1, size * 2)
			copy_to_raw_data
			c_data := c_create_data (data.area.base_address, data.count)
		end

feature -- Access

	reflected: ARRAY [INTEGER_16]
			-- Amount of the signal reflected from the surface (in robot's units).

	ambient: ARRAY [INTEGER_16]
			-- Amount of the ambient light (in robot's units).

feature {ROS_SUBSCRIBER}

	set_from_pointer (c_ptr: POINTER)
			-- Create `Current' by parsing C++ class.
		do
			Precursor{ASEBA_MSG}(c_ptr)
			create reflected.make_filled (0, 1, data.count // 2)
			create ambient.make_filled (0, 1, data.count // 2)
			copy_from_raw_data
		end

feature {NONE} -- Implementation

	copy_from_raw_data
			--
		require
			reflected.count = ambient.count
			data.count = reflected.count * 2
		local
			i, count: INTEGER
		do
			count := reflected.count
			from
				i := 1
			until
				i > count
			loop
				reflected[i] := data[i]
				ambient[i] := data[count + i]
				i := i + 1
			end
		end

	copy_to_raw_data
			--
		require
			reflected.count = ambient.count
			data.count = reflected.count * 2
		local
			i, count: INTEGER
		do
			count := reflected.count
			from
				i := 1
			until
				i > count
			loop
				data[i] := reflected[i]
				data[count + i] := ambient[i]
				i := i + 1
			end
		end
end
