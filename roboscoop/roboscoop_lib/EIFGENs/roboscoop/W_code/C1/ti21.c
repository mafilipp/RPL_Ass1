/*
 * Code for class TIMER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F21_336(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F21_337(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F21_338(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_339(EIF_REFERENCE);
extern void F21_340(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F21_341(EIF_REFERENCE);
extern void F21_342(EIF_REFERENCE);
extern void F21_343(EIF_REFERENCE);
extern void F21_344(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_345(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_346(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_347(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_348(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_349(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_350(EIF_REFERENCE);
extern EIF_TYPED_VALUE F21_351(EIF_REFERENCE);
extern void F21_7311(EIF_REFERENCE, int);
extern void EIF_Minit21(void);

#ifdef __cplusplus
}
#endif

#include <time.h>
#include <sys/timeb.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F21_351
static EIF_INTEGER_64 inline_F21_351 (void)
{
	struct timeb t;
ftime(&t);
return (unsigned long long int)time(NULL) * 1000 + t.millitm;
	;
}
#define INLINE_F21_351
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIMER}.make */
void F21_336 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 1, 381);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 381);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
		RTTE((EIF_BOOLEAN) (arg1 >= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 342, 0x24000000, 1); /* duration */
	
	*(EIF_INTEGER_64 *)(Current + RTWA(342, dtype)) = (EIF_INTEGER_64) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {TIMER}.make_with_token */
void F21_337 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_token";
	RTEX;
#define arg1 arg1x.it_i8
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 2, 382);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 382);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
		RTTE((EIF_BOOLEAN) (arg1 >= ti8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui8_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(340, dtype))(Current, ui8_1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 343, 0x10000000, 1); /* token */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(343, dtype)) = (EIF_INTEGER_32) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui8_1
#undef arg2
#undef arg1
}

/* {TIMER}.duration */
EIF_TYPED_VALUE F21_338 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(342,Dtype(Current)));
	return r;
}


/* {TIMER}.token */
EIF_TYPED_VALUE F21_339 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(343,Dtype(Current)));
	return r;
}


/* {TIMER}.set_token */
void F21_340 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_token";
	RTEX;
#define arg1 arg1x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 1, 385);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(20, Current, 385);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 343, 0x10000000, 1); /* token */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(343, Dtype(Current))) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {TIMER}.start */
void F21_341 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "start";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 369);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 354, 0x24000000, 1); /* remaining */
	
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(342, dtype));
	*(EIF_INTEGER_64 *)(Current + RTWA(354, dtype)) = (EIF_INTEGER_64) ti8_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 353, 0x24000000, 1); /* start_time */
	
	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(355, dtype))(Current)).it_i8);
	*(EIF_INTEGER_64 *)(Current + RTWA(353, dtype)) = (EIF_INTEGER_64) ti8_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 350, 0x04000000, 1); /* is_paused */
	
	*(EIF_BOOLEAN *)(Current + RTWA(350, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 351, 0x04000000, 1); /* is_stopped */
	
	*(EIF_BOOLEAN *)(Current + RTWA(351, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 349, 0x04000000, 1); /* is_started */
	
	*(EIF_BOOLEAN *)(Current + RTWA(349, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TIMER}.pause */
void F21_342 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "pause";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 370);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(349, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 354, 0x24000000, 1); /* remaining */
		
		ti8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(355, dtype))(Current)).it_i8);
		ti8_3 = *(EIF_INTEGER_64 *)(Current + RTWA(353, dtype));
		(*(EIF_INTEGER_64 *)(Current + RTWA(354, dtype))) -= (EIF_INTEGER_64) (ti8_2 - ti8_3);
		RTHOOK(3);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(354, dtype));
		ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
		if ((EIF_BOOLEAN) (ti8_1 <= ti8_2)) {
			RTHOOK(4);
			RTDBGAA(Current, dtype, 354, 0x24000000, 1); /* remaining */
			
			ti8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
			*(EIF_INTEGER_64 *)(Current + RTWA(354, dtype)) = (EIF_INTEGER_64) ti8_1;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(348, dtype))(Current);
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 350, 0x04000000, 1); /* is_paused */
			
			*(EIF_BOOLEAN *)(Current + RTWA(350, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		if (
			WDBG(20,"debug_info")
		) {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tr2 = RTMS_EX_H("Remaining time: ",16,2087681312);
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(354, dtype));
			tr3 = c_outi64(ti8_1);
			ur1 = RTCCL(tr3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4824, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = RTMS_EX_H(" ms.\012",5,1836510730);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4824, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(246, "put_string", tr1))(tr1, ur1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {TIMER}.resume */
void F21_343 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "resume";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 371);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(349, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(350, dtype));
	if ((EIF_BOOLEAN) (tb1 && tb2)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 353, 0x24000000, 1); /* start_time */
		
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(355, dtype))(Current)).it_i8);
		*(EIF_INTEGER_64 *)(Current + RTWA(353, dtype)) = (EIF_INTEGER_64) ti8_1;
		RTHOOK(3);
		RTDBGAA(Current, dtype, 350, 0x04000000, 1); /* is_paused */
		
		*(EIF_BOOLEAN *)(Current + RTWA(350, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TIMER}.stop */
void F21_344 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 372);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 349, 0x04000000, 1); /* is_started */
	
	*(EIF_BOOLEAN *)(Current + RTWA(349, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 350, 0x04000000, 1); /* is_paused */
	
	*(EIF_BOOLEAN *)(Current + RTWA(350, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 351, 0x04000000, 1); /* is_stopped */
	
	*(EIF_BOOLEAN *)(Current + RTWA(351, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TIMER}.is_started */
EIF_TYPED_VALUE F21_345 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(349,Dtype(Current)));
	return r;
}


/* {TIMER}.is_paused */
EIF_TYPED_VALUE F21_346 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(350,Dtype(Current)));
	return r;
}


/* {TIMER}.is_stopped */
EIF_TYPED_VALUE F21_347 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(351,Dtype(Current)));
	return r;
}


/* {TIMER}.is_completed */
EIF_TYPED_VALUE F21_348 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_completed";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 376);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(20, Current, 376);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(349, dtype));
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(350, dtype));
	if ((EIF_BOOLEAN) (tb2 && (EIF_BOOLEAN) !tb3)) {
		ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(355, dtype))(Current)).it_i8);
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(353, dtype));
		ti8_3 = *(EIF_INTEGER_64 *)(Current + RTWA(354, dtype));
		tb1 = ((EIF_BOOLEAN) ((EIF_INTEGER_64) (ti8_1 - ti8_2) > ti8_3));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {TIMER}.start_time */
EIF_TYPED_VALUE F21_349 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(353,Dtype(Current)));
	return r;
}


/* {TIMER}.remaining */
EIF_TYPED_VALUE F21_350 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(354,Dtype(Current)));
	return r;
}


/* {TIMER}.current_time_millis */
EIF_TYPED_VALUE F21_351 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_time_millis";
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 20, Current, 0, 0, 379);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(20, Current, 379);
	RTIV(Current, RTAL);
	Result = inline_F21_351 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {TIMER}._invariant */
void F21_7311 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 20, Current, 0, 7310);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT(NULL, Current);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(354, dtype));
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN) (ti8_1 >= ti8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT(NULL, Current);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(353, dtype));
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	if ((EIF_BOOLEAN) (ti8_1 >= ti8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT(NULL, Current);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(351, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(350, dtype));
	tb3 = *(EIF_BOOLEAN *)(Current + RTWA(349, dtype));
	if ((!(tb1) || ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb2 && (EIF_BOOLEAN) !tb3)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit21 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
