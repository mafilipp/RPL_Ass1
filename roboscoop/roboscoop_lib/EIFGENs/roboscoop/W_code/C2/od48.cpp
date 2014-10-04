/*
 * Code for class ODOMETRY_MSG
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F48_866(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F48_867(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_868(EIF_REFERENCE);
extern EIF_TYPED_VALUE F48_869(EIF_REFERENCE);
extern EIF_TYPED_VALUE F48_870(EIF_REFERENCE);
extern EIF_TYPED_VALUE F48_871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F48_872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F48_873(EIF_REFERENCE);
extern void F48_874(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F48_875(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_876(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_877(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_878(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_879(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_880(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F48_881(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F48_882(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F48_883(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F48_884(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit48(void);

#ifdef __cplusplus
}
#endif

#include "publisher.h"
#include "nav_msgs/Odometry.h"
#include "tf/transform_datatypes.h"
#include "subscriber.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F48_876
static EIF_REAL_64 inline_F48_876 (EIF_POINTER arg1)
{
	return (double)(((nav_msgs::Odometry*)(arg1))->pose.pose.position.x);
	;
}
#define INLINE_F48_876
#endif
#ifndef INLINE_F48_877
static EIF_REAL_64 inline_F48_877 (EIF_POINTER arg1)
{
	return (double)(((nav_msgs::Odometry*)(arg1))->pose.pose.position.y);
	;
}
#define INLINE_F48_877
#endif
#ifndef INLINE_F48_878
static EIF_REAL_64 inline_F48_878 (EIF_POINTER arg1)
{
	nav_msgs::Odometry *m = (nav_msgs::Odometry*)(arg1);
return (double) atan2(m->pose.pose.orientation.z, m->pose.pose.orientation.w) * 2.0;
	;
}
#define INLINE_F48_878
#endif
#ifndef INLINE_F48_879
static EIF_REAL_64 inline_F48_879 (EIF_POINTER arg1)
{
	return (double)(((nav_msgs::Odometry*)(arg1))->twist.twist.linear.x);
	;
}
#define INLINE_F48_879
#endif
#ifndef INLINE_F48_880
static EIF_REAL_64 inline_F48_880 (EIF_POINTER arg1)
{
	return (double)(((nav_msgs::Odometry*)(arg1))->twist.twist.angular.z);
	;
}
#define INLINE_F48_880
#endif
#ifndef INLINE_F48_881
static EIF_REAL_64 inline_F48_881 (EIF_POINTER arg1)
{
	return (double)(((nav_msgs::Odometry*)(arg1))->header.stamp.toSec());
	;
}
#define INLINE_F48_881
#endif
#ifndef INLINE_F48_882
static void inline_F48_882 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_BOOLEAN arg3)
{
	((Publisher*)(arg1))->advertize <nav_msgs::Odometry> (arg2, arg3);
	;
}
#define INLINE_F48_882
#endif
#ifndef INLINE_F48_883
static void inline_F48_883 (EIF_POINTER arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4, EIF_REAL_64 arg5, EIF_REAL_64 arg6, EIF_REAL_64 arg7)
{
	ros::Time t;
				t.fromSec(arg7);
				
				tf::Quaternion q;
				q.setRPY(0, 0, arg4);
				
				nav_msgs::Odometry msg;
				msg.header.stamp = t;
				msg.pose.pose.position.x = arg2;
				msg.pose.pose.position.y = arg3;
				msg.pose.pose.orientation.x = q.getX();
				msg.pose.pose.orientation.y = q.getY();
				msg.pose.pose.orientation.z = q.getZ();
				msg.pose.pose.orientation.w = q.getW();
				msg.twist.twist.linear.x = arg5;
				msg.twist.twist.angular.z = arg6;

				((Publisher*)(arg1))->publish_message <nav_msgs::Odometry> (msg);
	;
}
#define INLINE_F48_883
#endif
#ifndef INLINE_F48_884
static void inline_F48_884 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_OBJECT arg3, EIF_POINTER arg4)
{
	((Subscriber*)(arg1))->subscribe<nav_msgs::Odometry, nav_msgs::Odometry::ConstPtr> (arg2, arg3, arg4);
	;
}
#define INLINE_F48_884
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ODOMETRY_MSG}.make_from_pointer */
void F48_866 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 964);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(47, Current, 964);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(838, Dtype(Current)))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {ODOMETRY_MSG}.make_now */
void F48_867 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make_now";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 5, 965);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(47, Current, 965);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 860, 0x20000000, 1); /* x */
	
	*(EIF_REAL_64 *)(Current + RTWA(860, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 861, 0x20000000, 1); /* y */
	
	*(EIF_REAL_64 *)(Current + RTWA(861, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 862, 0x20000000, 1); /* theta */
	
	*(EIF_REAL_64 *)(Current + RTWA(862, dtype)) = (EIF_REAL_64) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 863, 0x20000000, 1); /* vx */
	
	*(EIF_REAL_64 *)(Current + RTWA(863, dtype)) = (EIF_REAL_64) arg4;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 864, 0x20000000, 1); /* vtheta */
	
	*(EIF_REAL_64 *)(Current + RTWA(864, dtype)) = (EIF_REAL_64) arg5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 865, 0x20000000, 1); /* timestamp */
	
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(840, dtype))(Current)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(865, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ODOMETRY_MSG}.x */
EIF_TYPED_VALUE F48_868 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(860,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.y */
EIF_TYPED_VALUE F48_869 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(861,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.theta */
EIF_TYPED_VALUE F48_870 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(862,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.vx */
EIF_TYPED_VALUE F48_871 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(863,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.vtheta */
EIF_TYPED_VALUE F48_872 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(864,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.timestamp */
EIF_TYPED_VALUE F48_873 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(865,Dtype(Current)));
	return r;
}


/* {ODOMETRY_MSG}.set_from_pointer */
void F48_874 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 953);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(47, Current, 953);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 860, 0x20000000, 1); /* x */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(866, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(860, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 861, 0x20000000, 1); /* y */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(867, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(861, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 862, 0x20000000, 1); /* theta */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(868, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(862, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 863, 0x20000000, 1); /* vx */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(869, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(863, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 864, 0x20000000, 1); /* vtheta */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(870, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(864, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 865, 0x20000000, 1); /* timestamp */
	
	up1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(871, dtype))(Current, up1x)).it_r8);
	*(EIF_REAL_64 *)(Current + RTWA(865, dtype)) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {ODOMETRY_MSG}.publish_to_ros */
void F48_875 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "publish_to_ros";
	RTEX;
#define arg1 arg1x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ur8_3x = {{0}, SK_REAL64};
#define ur8_3 ur8_3x.it_r8
	EIF_TYPED_VALUE ur8_4x = {{0}, SK_REAL64};
#define ur8_4 ur8_4x.it_r8
	EIF_TYPED_VALUE ur8_5x = {{0}, SK_REAL64};
#define ur8_5 ur8_5x.it_r8
	EIF_TYPED_VALUE ur8_6x = {{0}, SK_REAL64};
#define ur8_6 ur8_6x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 954);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(47, Current, 954);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg1;
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(860, dtype));
	ur8_1 = tr8_1;
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(861, dtype));
	ur8_2 = tr8_2;
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(862, dtype));
	ur8_3 = tr8_3;
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(863, dtype));
	ur8_4 = tr8_4;
	tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(864, dtype));
	ur8_5 = tr8_5;
	tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(865, dtype));
	ur8_6 = tr8_6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(872, dtype))(Current, up1x, ur8_1x, ur8_2x, ur8_3x, ur8_4x, ur8_5x, ur8_6x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur8_1
#undef ur8_2
#undef ur8_3
#undef ur8_4
#undef ur8_5
#undef ur8_6
#undef arg1
}

/* {ODOMETRY_MSG}.get_x_from_cpp */
EIF_TYPED_VALUE F48_876 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_x_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 955);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 955);
	RTIV(Current, RTAL);
	Result = inline_F48_876 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.get_y_from_cpp */
EIF_TYPED_VALUE F48_877 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_y_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 956);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 956);
	RTIV(Current, RTAL);
	Result = inline_F48_877 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.get_theta_from_cpp */
EIF_TYPED_VALUE F48_878 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_theta_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 957);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 957);
	RTIV(Current, RTAL);
	Result = inline_F48_878 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.get_vx_from_cpp */
EIF_TYPED_VALUE F48_879 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_vx_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 958);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 958);
	RTIV(Current, RTAL);
	Result = inline_F48_879 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.get_vtheta_from_cpp */
EIF_TYPED_VALUE F48_880 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_vtheta_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 959);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 959);
	RTIV(Current, RTAL);
	Result = inline_F48_880 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.get_timestamp_from_cpp */
EIF_TYPED_VALUE F48_881 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_timestamp_from_cpp";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 1, 960);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 960);
	RTIV(Current, RTAL);
	Result = inline_F48_881 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {ODOMETRY_MSG}.c_ros_advertize */
void F48_882 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_ros_advertize";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 3, 961);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 961);
	RTIV(Current, RTAL);
	inline_F48_882 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_BOOLEAN) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {ODOMETRY_MSG}.c_ros_publish */
void F48_883 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "c_ros_publish";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
#define arg4 arg4x.it_r8
#define arg5 arg5x.it_r8
#define arg6 arg6x.it_r8
#define arg7 arg7x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_r8 = * (EIF_REAL_64 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r8 = * (EIF_REAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r8 = * (EIF_REAL_64 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r8 = * (EIF_REAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU(SK_REAL64,&arg4);
	RTLU(SK_REAL64,&arg5);
	RTLU(SK_REAL64,&arg6);
	RTLU(SK_REAL64,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 7, 962);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 962);
	RTIV(Current, RTAL);
	inline_F48_883 ((EIF_POINTER) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3, (EIF_REAL_64) arg4, (EIF_REAL_64) arg5, (EIF_REAL_64) arg6, (EIF_REAL_64) arg7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ODOMETRY_MSG}.subscribe_to_ros */
void F48_884 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "subscribe_to_ros";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_r
#define arg4 arg4x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 47, Current, 0, 4, 963);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(47, Current, 963);
	RTIV(Current, RTAL);{
		EIF_POINTER larg1 = arg1;
		EIF_POINTER larg2 = arg2;
		EIF_OBJECT larg3 = RTHP(arg3);
		EIF_POINTER larg4 = arg4;
		inline_F48_884 ((EIF_POINTER) larg1, (EIF_POINTER) larg2, (EIF_OBJECT) larg3, (EIF_POINTER) larg4);
		RTHF(1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit48 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
