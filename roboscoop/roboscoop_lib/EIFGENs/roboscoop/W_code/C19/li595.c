/*
 * Code for class LINEAR [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F595_2317(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2318(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F595_2319(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2321(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2322(EIF_REFERENCE);
extern EIF_TYPED_VALUE F595_2323(EIF_REFERENCE);
extern EIF_TYPED_VALUE F595_2325(EIF_REFERENCE);
extern void F595_2328(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F595_2329(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2330(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2331(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F595_2332(EIF_REFERENCE);
extern void F595_7341(EIF_REFERENCE, int);
extern void EIF_Minit595(void);

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

/* {LINEAR}.has */
EIF_TYPED_VALUE F595_2317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 1, 2607);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2607);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2016, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		uc1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2026, dtype))(Current, uc1x);
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1936, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uc1
#undef arg1
}

/* {LINEAR}.index_of */
EIF_TYPED_VALUE F595_2318 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 594, Current, 2, 2, 2608);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2608);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_occurrences", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, dtype));
	if ((EIF_BOOLEAN) (tb1 && EIF_TRUE)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
		RTHOOK(4);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			tb1 = '\01';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb1) break;
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
			if ((tc1 == arg1)) {
				RTHOOK(7);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
	} else {
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(12);
			tb2 = '\01';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
			if (!tb3) {
				tb2 = (EIF_BOOLEAN)(loc1 == arg2);
			}
			if (tb2) break;
			RTHOOK(13);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(14);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
			RTHOOK(16);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			
			loc2++;
		}
	}
	RTHOOK(17);
	if ((EIF_BOOLEAN)(loc1 == arg2)) {
		RTHOOK(18);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("non_negative_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {LINEAR}.search */
void F595_2319 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "search";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 1, 2609);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2609);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1938, dtype));
	if (tb1) {
		for (;;) {
			RTHOOK(2);
			tb1 = '\01';
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
			if (!tb2) {
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
				tb1 = (arg1 == tc1);
			}
			if (tb1) break;
			RTHOOK(3);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
		}
	} else {
		for (;;) {
			RTHOOK(4);
			tb2 = '\01';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
			if (!tb3) {
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
				tb2 = (EIF_BOOLEAN)(arg1 == tc1);
			}
			if (tb2) break;
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("object_found", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb5) {
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(1938, dtype));
			tb4 = tb5;
		}
		if (tb4) {
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
			tb3 = (arg1 == tc1);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("item_found", EX_POST);
		tb3 = '\01';
		tb4 = '\0';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb5) {
			tb5 = *(EIF_BOOLEAN *)(Current + RTWA(1938, dtype));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
			tb3 = (EIF_BOOLEAN)(arg1 == tc1);
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {LINEAR}.occurrences */
EIF_TYPED_VALUE F595_2321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "occurrences";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 1, 2610);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2610);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	RTHOOK(2);
	uc1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2026, dtype))(Current, uc1x);
	for (;;) {
		RTHOOK(3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2030, dtype))(Current)).it_b);
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		Result++;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
		RTHOOK(6);
		uc1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2026, dtype))(Current, uc1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {LINEAR}.item_for_iteration */
EIF_TYPED_VALUE F595_2322 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item_for_iteration";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 0, 2611);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2611);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2016, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x08000000, 0,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {LINEAR}.exhausted */
EIF_TYPED_VALUE F595_2323 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exhausted";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 0, 2612);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2612);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2016, dtype))(Current)).it_b);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("exhausted_when_off", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2016, dtype))(Current)).it_b);
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {LINEAR}.off */
EIF_TYPED_VALUE F595_2325 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "off";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 0, 2600);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2600);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1936, dtype))(Current)).it_b);
	if (!tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
		tb1 = tb2;
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

/* {LINEAR}.do_all */
void F595_2328 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "do_all";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 594, Current, 3, 1, 2601);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2601);
	{
		EIF_TYPE_INDEX typarr0[] = {275,0xFF11,0,0xFF11,0xFFF9,1,211,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[7] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 594, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTCCL(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {595,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(eif_non_attached_type(typres0),loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000253, 0, 0); /* loc2 */
		
		loc2 = (EIF_REFERENCE) RTCCL(loc3);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000B6, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1990, "cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	for (;;) {
		RTHOOK(6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
		if (tb1) break;
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = RTWCT(1943, dtype, dftype);
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 2, 0);
		}
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
		((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", arg1))(arg1, ur1x);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(10);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1992, "go_to", loc2))(loc2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {LINEAR}.do_if */
void F595_2329 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "do_if";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc1);
	RTLR(6,tr1);
	RTLR(7,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 594, Current, 3, 2, 2602);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2602);
	{
		EIF_TYPE_INDEX typarr0[] = {275,0xFF11,0,0xFF11,0xFFF9,1,211,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[7] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 594, l_feature_name, 1, eif_attached_type(typres0));
	}
	{
		EIF_TYPE_INDEX typarr0[] = {285,0xFF11,0,0xFF11,0xFFF9,1,211,0,225,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[7] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg2, 594, l_feature_name, 2, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc3 = RTCCL(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {595,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(eif_non_attached_type(typres0),loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF8000253, 0, 0); /* loc2 */
		
		loc2 = (EIF_REFERENCE) RTCCL(loc3);
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF80000B6, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1990, "cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	for (;;) {
		RTHOOK(7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
		if (tb1) break;
		RTHOOK(8);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = RTWCT(1943, dtype, dftype);
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 2, 0);
		}
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
		((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4739, "item", arg2))(arg2, ur1x)).it_b);
		if (tb2) {
			RTHOOK(9);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0,0xFFFF};
				EIF_TYPE_INDEX typres0;
				typarr0[3] = RTWCT(1943, dtype, dftype);
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNTS(typres0, 2, 0);
			}
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
			((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", arg1))(arg1, ur1x);
		}
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
	}
	RTHOOK(11);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(12);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1992, "go_to", loc2))(loc2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef arg2
#undef arg1
}

/* {LINEAR}.there_exists */
EIF_TYPED_VALUE F595_2330 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "there_exists";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 594, Current, 3, 1, 2603);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2603);
	{
		EIF_TYPE_INDEX typarr0[] = {285,0xFF11,0,0xFF11,0xFFF9,1,211,0,225,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[7] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 594, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTCCL(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {595,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(eif_non_attached_type(typres0),loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000253, 0, 0); /* loc2 */
		
		loc2 = (EIF_REFERENCE) RTCCL(loc3);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000B6, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1990, "cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
		if (!tb2) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = RTWCT(1943, dtype, dftype);
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 2, 0);
		}
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
		((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4739, "item", arg1))(arg1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(10);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1992, "go_to", loc2))(loc2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {LINEAR}.for_all */
EIF_TYPED_VALUE F595_2331 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "for_all";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc1);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 594, Current, 3, 1, 2604);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(594, Current, 2604);
	{
		EIF_TYPE_INDEX typarr0[] = {285,0xFF11,0,0xFF11,0xFFF9,1,211,0,225,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[7] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		RTCC(arg1, 594, l_feature_name, 1, eif_attached_type(typres0));
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc3 = RTCCL(Current);
	{
		EIF_TYPE_INDEX typarr0[] = {595,0,0xFFFF};
		EIF_TYPE_INDEX typres0;
		typarr0[1] = RTWCT(1943, dtype, dftype);
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc3 = RTRV(eif_non_attached_type(typres0),loc3);
	}
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0xF8000253, 0, 0); /* loc2 */
		
		loc2 = (EIF_REFERENCE) RTCCL(loc3);
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80000B6, 0, 0); /* loc1 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1990, "cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2017, dtype))(Current);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
		if (!tb2) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(8);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0,0xFFFF};
			EIF_TYPE_INDEX typres0;
			typarr0[3] = RTWCT(1943, dtype, dftype);
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0, 2, 0);
		}
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2015, dtype))(Current)).it_c1);
		((EIF_TYPED_VALUE *)tr1+1)->it_c1 = tc1;
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4739, "item", arg1))(arg1, ur1x)).it_b);
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(2033, dtype))(Current);
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(11);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1992, "go_to", loc2))(loc2, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("empty", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1936, dtype))(Current)).it_b);
		if (tb3) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {LINEAR}.linear_representation */
EIF_TYPED_VALUE F595_2332 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "linear_representation";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 594, Current, 0, 0, 2605);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(594, Current, 2605);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000252, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {LINEAR}._invariant */
void F595_7341 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 594, Current, 0, 7340);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("after_constraint", Current);
	tb1 = '\01';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2031, dtype))(Current)).it_b);
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2016, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit595 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
