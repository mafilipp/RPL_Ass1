note
	description: "Launches a separate agent after sertain delay."
	author: "Rusakov Andrey"
	date: "05.09.2013"

class
	ON_TIMER_INVOKER

create
	make

feature {NONE} -- Initialization

	make (millisec: INTEGER; sep_agent: separate PROCEDURE[ANY, TUPLE])
			-- Create Current with the agent `sep_agent' and the duration `millisec'.
		do
			create timer.make (millisec)
			sep_procedure := sep_agent
		end

feature -- Access

	start
			-- Launch timer and start waiting.
		do
			start_timer (timer)
			execute_on_timer (timer, sep_procedure)
		end

feature {NONE} -- Implementation

	timer: separate TIMER
			-- Timer object to keep track of the elapsed time.

	sep_procedure: separate PROCEDURE[ANY, TUPLE]
			-- Agent to call after timer is complete.

	execute_on_timer (t: separate TIMER; sep_agent: separate PROCEDURE[ANY, TUPLE])
			-- Call `sep_agent' when timer `t' is complete.
		require
			t.is_completed
		do
			t.stop
			sep_agent.call ([])
		end

	start_timer (t: separate TIMER)
			-- Wrapper for making a separate call on timer.
		do
			t.start
		end
end
