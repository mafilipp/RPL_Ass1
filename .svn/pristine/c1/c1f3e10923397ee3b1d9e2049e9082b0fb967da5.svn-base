/* 
* Class provides a feature of subscribing to ROS topics from Eiffel.
*
* Chair of Software Engineering, ETH Zurich
* Author:	Rusakov Andrey
* Date:		13.05.2014
* Modified:	13.05.2014
*/

#ifndef SPINNER_H
#define SPINNER_H

#include "eif_eiffel.h"
#include "eif_setup.h"
#include "ros/ros.h"
#include <string>

class Spinner
{

protected:

	// Spinner object for a callback queue to be executed in a separate thread.
	boost::shared_ptr<ros::AsyncSpinner> spinner;

	// Is spinner object launched?
	bool is_listening;

public:
	// Constructor.
	Spinner ()
	{		
		spinner.reset (new ros::AsyncSpinner(1));
		is_listening = false;
		ROS_INFO("New ROS Spinner");
	}

	// Destructor.
	virtual ~Spinner ()
	{
		printf ("Deleting Spinner object\n");
	}

	// Start listening to ROS messages in a separate thread.
	void start ()
	{
		if (!is_listening)
		{
	    		spinner->start();
			is_listening = true;
			ROS_INFO("Async spinner started");
		}
	}

	// Stop listening to ROS messages.
	void stop ()
	{
		if (is_listening)
		{
			ROS_WARN("Stopping ROS spinner.");
			spinner->stop();
			is_listening = false;
			printf("ROS spinner stopped.\n");
		}
	}
};
#endif
