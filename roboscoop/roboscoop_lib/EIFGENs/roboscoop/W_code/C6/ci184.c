/*
 * Code for class CIRCULAR_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F184_3734(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F184_3735(EIF_REFERENCE);
extern EIF_TYPED_VALUE F184_3736(EIF_REFERENCE);
extern EIF_TYPED_VALUE F184_3737(EIF_REFERENCE);
extern void EIF_Minit184(void);

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

/* {CIRCULAR_CURSOR}.make */
void F184_3734 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 183, Current, 0, 3, 5127);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(183, Current, 5127);
	RTCC(arg1, 183, l_feature_name, 1, eif_attached_type(RTWCT(2819, dtype, Dftype(Current))));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2819, 0xF80000B6, 0); /* cursor */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(2819, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2820, 0x04000000, 1); /* internal_exhausted */
	
	*(EIF_BOOLEAN *)(Current + RTWA(2820, dtype)) = (EIF_BOOLEAN) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 2821, 0x10000000, 1); /* starter */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(2821, dtype)) = (EIF_INTEGER_32) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {CIRCULAR_CURSOR}.cursor */
EIF_TYPED_VALUE F184_3735 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(2819,Dtype(Current)));
	return r;
}


/* {CIRCULAR_CURSOR}.internal_exhausted */
EIF_TYPED_VALUE F184_3736 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2820,Dtype(Current)));
	return r;
}


/* {CIRCULAR_CURSOR}.starter */
EIF_TYPED_VALUE F184_3737 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2821,Dtype(Current)));
	return r;
}


void EIF_Minit184 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
