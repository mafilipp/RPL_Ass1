/*
 * Code for class RANGE_SENSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F17_201(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F17_202(EIF_REFERENCE);
extern EIF_TYPED_VALUE F17_203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F17_204(EIF_REFERENCE);
extern void F17_205(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F17_206(EIF_REFERENCE);
extern void EIF_Minit17(void);

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

/* {RANGE_SENSOR}.make_with_range */
void F17_201 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_range";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 16, Current, 0, 2, 234);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(16, Current, 234);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTHOOK(2);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTHOOK(3);
		RTCT(NULL, EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 206, 0x20000000, 1); /* min_range */
	
	*(EIF_REAL_64 *)(Current + RTWA(206, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 207, 0x20000000, 1); /* max_range */
	
	*(EIF_REAL_64 *)(Current + RTWA(207, dtype)) = (EIF_REAL_64) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {RANGE_SENSOR}.min_range */
EIF_TYPED_VALUE F17_202 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(206,Dtype(Current)));
	return r;
}


/* {RANGE_SENSOR}.max_range */
EIF_TYPED_VALUE F17_203 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(207,Dtype(Current)));
	return r;
}


/* {RANGE_SENSOR}.range */
EIF_TYPED_VALUE F17_204 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(208,Dtype(Current)));
	return r;
}


/* {RANGE_SENSOR}.update_range */
void F17_205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_range";
	RTEX;
#define arg1 arg1x.it_r8
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 16, Current, 0, 1, 238);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(16, Current, 238);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 208, 0x20000000, 1); /* range */
	
	*(EIF_REAL_64 *)(Current + RTWA(208, Dtype(Current))) = (EIF_REAL_64) arg1;
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

/* {RANGE_SENSOR}.is_valid_range */
EIF_TYPED_VALUE F17_206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_range";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 16, Current, 0, 0, 239);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(16, Current, 239);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(208, dtype));
	tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(206, dtype));
	tr8_3 = *(EIF_REAL_64 *)(Current + RTWA(208, dtype));
	tr8_4 = *(EIF_REAL_64 *)(Current + RTWA(207, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tr8_1 >= tr8_2) && (EIF_BOOLEAN) (tr8_3 <= tr8_4));
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

void EIF_Minit17 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
