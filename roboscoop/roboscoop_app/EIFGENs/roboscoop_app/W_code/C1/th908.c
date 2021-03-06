/*
 * Code for class THYMIO_SOUND_PLAYER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F908_7447(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F908_7448(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F908_7449(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F908_7450(EIF_REFERENCE);
extern EIF_TYPED_VALUE F908_7451(EIF_REFERENCE);
extern void EIF_Minit908(void);

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

/* {THYMIO_SOUND_PLAYER}.make_with_topic */
void F908_7447 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_topic";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 907, Current, 0, 1, 13079);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(907, Current, 13079);
	RTCC(arg1, 907, l_feature_name, 1, eif_attached_type(257));
	uarg1 = (EIF_BOOLEAN) RTS_OU (Current, arg1);
	uarg = uarg1;
	RTIV(Current, RTAL);
	if (uarg) {
		RTS_SRC (Current);
		RTS_RS (Current, arg1);
		RTS_RW (Current);
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5328, 0xF8000137, 0); /* publisher */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(5328, dtype, Dftype(Current))));
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5328, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5328, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1905, "advertize", tr1))(tr1, ui4_1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) RTS_SRD (Current);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {THYMIO_SOUND_PLAYER}.start_sound */
void F908_7448 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "start_sound";
	RTEX;
#define arg1 arg1x.it_i2
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i2 = * (EIF_INTEGER_16 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT16,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 907, Current, 0, 1, 13080);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(907, Current, 13080);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5328, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTLN(48);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 0L);
	ui2_1 = ti2_1;
	ui2_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(875, Dtype(tr2)))(tr2, ui2_1x, ui2_2x);
	RTNHOOK(1,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1140, "publish", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui2_1
#undef ui2_2
#undef arg1
}

/* {THYMIO_SOUND_PLAYER}.start_system_sound */
void F908_7449 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "start_system_sound";
	RTEX;
#define arg1 arg1x.it_i2
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_TYPED_VALUE ui2_2x = {{0}, SK_INT16};
#define ui2_2 ui2_2x.it_i2
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i2 = * (EIF_INTEGER_16 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT16,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 907, Current, 0, 1, 13081);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(907, Current, 13081);
	RTIV(Current, RTAL);
body:;
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5328, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTLN(48);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) 1L);
	ui2_1 = ti2_1;
	ui2_2 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(875, Dtype(tr2)))(tr2, ui2_1x, ui2_2x);
	RTNHOOK(1,2);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1140, "publish", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui2_1
#undef ui2_2
#undef arg1
}

/* {THYMIO_SOUND_PLAYER}.stop_sound */
void F908_7450 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_sound";
	RTEX;
	EIF_TYPED_VALUE ui2_1x = {{0}, SK_INT16};
#define ui2_1 ui2_1x.it_i2
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 907, Current, 0, 0, 13082);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(907, Current, 13082);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti2_1 = (EIF_INTEGER_16) ((EIF_INTEGER_32) -1L);
	ui2_1 = ti2_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1652, Dtype(Current)))(Current, ui2_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui2_1
}

/* {THYMIO_SOUND_PLAYER}.publisher */
EIF_TYPED_VALUE F908_7451 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5328,Dtype(Current)));
	return r;
}


void EIF_Minit908 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
