/*
 * Code for class THYMIO_TOPICS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F902_7403(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7404(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7405(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7406(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7407(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7408(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7409(EIF_REFERENCE);
extern EIF_TYPED_VALUE F902_7410(EIF_REFERENCE);
extern void EIF_Minit902(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {THYMIO_TOPICS}.odometry */
RTOID (F902_7403)


EIF_TYPED_VALUE F902_7403 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7403,13038,RTMS_EX_H("/thymio_driver/odometry",23,2032815481));
}

/* {THYMIO_TOPICS}.velocity */
RTOID (F902_7404)


EIF_TYPED_VALUE F902_7404 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7404,13039,RTMS_EX_H("/thymio_driver/roboscoop_vel",28,1718484076));
}

/* {THYMIO_TOPICS}.prox_horizontal */
RTOID (F902_7405)


EIF_TYPED_VALUE F902_7405 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7405,13040,RTMS_EX_H("/thymio_driver/roboscoop_range_group",36,1765706864));
}

/* {THYMIO_TOPICS}.prox_ground */
RTOID (F902_7406)


EIF_TYPED_VALUE F902_7406 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7406,13041,RTMS_EX_H("/aseba/events/prox_ground",25,2085026916));
}

/* {THYMIO_TOPICS}.sound */
RTOID (F902_7407)


EIF_TYPED_VALUE F902_7407 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7407,13042,RTMS_EX_H("/aseba/events/sound_cmd",23,152082532));
}

/* {THYMIO_TOPICS}.circle_leds */
RTOID (F902_7408)


EIF_TYPED_VALUE F902_7408 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7408,13043,RTMS_EX_H("/aseba/events/circle_leds_cmd",29,825356132));
}

/* {THYMIO_TOPICS}.buttons_leds */
RTOID (F902_7409)


EIF_TYPED_VALUE F902_7409 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7409,13036,RTMS_EX_H("/aseba/events/buttons_leds_cmd",30,2107541092));
}

/* {THYMIO_TOPICS}.top_leds */
RTOID (F902_7410)


EIF_TYPED_VALUE F902_7410 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F902_7410,13037,RTMS_EX_H("/aseba/events/top_leds_cmd",26,1145716836));
}

void EIF_Minit902 (void)
{
	GTCX
	RTOTS (7403,F902_7403)
	RTOTS (7404,F902_7404)
	RTOTS (7405,F902_7405)
	RTOTS (7406,F902_7406)
	RTOTS (7407,F902_7407)
	RTOTS (7408,F902_7408)
	RTOTS (7409,F902_7409)
	RTOTS (7410,F902_7410)
}


#ifdef __cplusplus
}
#endif
