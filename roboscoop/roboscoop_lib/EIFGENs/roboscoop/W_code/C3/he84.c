/*
 * Code for class HEXADECIMAL_STRING_TO_INTEGER_CONVERTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F84_1445(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1446(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F84_1447(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1448(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1449(EIF_REFERENCE);
extern void F84_1450(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F84_1451(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F84_1452(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F84_1453(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F84_1454(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1455(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1456(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1457(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1458(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1459(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1460(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1461(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1463(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1464(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1465(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1466(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1467(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1468(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1469(EIF_REFERENCE);
extern EIF_TYPED_VALUE F84_1470(EIF_REFERENCE);
extern void EIF_Minit84(void);

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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.make */
void F84_1445 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1357);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1357);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1297, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1333, dtype))(Current, ui4_1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1325, 0xF8000101, 0); /* leading_separators */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(1325, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4841, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1325, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1326, 0xF8000101, 0); /* trailing_separators */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(1326, dtype, Dftype(Current))));
	tr2 = RTMS_EX_H(" ",1,32);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4841, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1326, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("leading_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1325, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H(" ",1,32))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trailing_separators_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1326, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, RTMS_EX_H(" ",1,32))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("leading_separators_not_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1324, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("trailing_separatorsnot_acceptable", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.separators_valid */
EIF_TYPED_VALUE F84_1446 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "separators_valid";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 83, Current, 4, 1, 1358);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(83, Current, 1358);
	RTCC(arg1, 83, l_feature_name, 1, eif_attached_type(257));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("separators_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4870, "count", arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
	
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 > loc4) || loc2)) break;
		RTHOOK(7);
		RTDBGAL(Current, 1, 0x08000000, 1, 0); /* loc1 */
		
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) '9')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '+')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) 'X')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '&')) || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '#'))) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
			
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(10);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		
		loc3++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflowed */
EIF_TYPED_VALUE F84_1447 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "overflowed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1359);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1359);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = *(EIF_BOOLEAN *)(Current + RTWA(1356, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.underflowed */
EIF_TYPED_VALUE F84_1448 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "underflowed";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1360);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1360);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = *(EIF_BOOLEAN *)(Current + RTWA(1356, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_successful */
EIF_TYPED_VALUE F84_1449 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parse_successful";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1361);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1361);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 5L)) && (EIF_BOOLEAN)(ti4_2 != ((EIF_INTEGER_32) 6L)));
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.reset */
void F84_1450 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "reset";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 1, 1362);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1362);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1328, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1340, 0x10000000, 1); /* last_state */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1341, 0x10000000, 1); /* sign */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1332, 0x10000000, 1); /* conversion_type */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1356, 0x04000000, 1); /* internal_overflowed */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1356, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("last_state_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("sign_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("conversion_type_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_overflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1329, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("not_underflowed", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1330, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("parse_successful", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1331, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_string_with_type */
void F84_1451 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_string_with_type";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLR(6,loc3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_CHAR32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 83, Current, 8, 2, 1363);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1363);
	RTCC(arg1, 83, l_feature_name, 1, eif_attached_type(254));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_valid", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1328, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1333, dtype))(Current, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4784, "count", arg1))(arg1)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	loc7 = RTCCL(arg1);
	loc7 = RTRV(eif_non_attached_type(255),loc7);
	if (EIF_TEST(loc7)) {
		RTHOOK(7);
		RTDBGAL(Current, 2, 0xF800025A, 0, 0); /* loc2 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4867, "area", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L)))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
				
				ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc2))(loc2, ui4_1x)).it_c1);
				*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(11);
				RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
				
				*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
			}
			RTHOOK(12);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc2))(loc2, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1339, dtype))(Current, uc1x);
			RTHOOK(13);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1++;
		}
	} else {
		RTHOOK(14);
		loc8 = RTCCL(arg1);
		loc8 = RTRV(eif_non_attached_type(262),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(15);
			RTDBGAL(Current, 3, 0xF8000330, 0, 0); /* loc3 */
			
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5008, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) tr1;
			for (;;) {
				RTHOOK(16);
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == loc4) || (EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(17);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(18);
					RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
					
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc3))(loc3, ui4_1x)).it_c4);
					RTNHOOK(18,1);
					tc1 = (EIF_CHARACTER_8) tw1;
					*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(19);
					RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(20);
				RTDBGAL(Current, 6, 0x1C000000, 1, 0); /* loc6 */
				
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc3))(loc3, ui4_1x)).it_c4);
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(21);
				tb1 = (loc6 <= 0xFF);
				if (tb1) {
					RTHOOK(22);
					tc1 = (EIF_CHARACTER_8) loc6;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1339, dtype))(Current, uc1x);
				} else {
					RTHOOK(23);
					RTDBGAA(Current, dtype, 1340, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(24);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
		} else {
			RTHOOK(25);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(26);
			RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
			
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4784, "count", arg1))(arg1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_3;
			for (;;) {
				RTHOOK(27);
				ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc4) || (EIF_BOOLEAN) (ti4_3 >= ((EIF_INTEGER_32) 4L)))) break;
				RTHOOK(28);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) < loc4)) {
					RTHOOK(29);
					RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
					
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4747, "code", arg1))(arg1, ui4_1x)).it_n4);
					RTNHOOK(29,1);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) tc1;
				} else {
					RTHOOK(30);
					RTDBGAA(Current, dtype, 1355, 0x08000000, 1); /* internal_lookahead */
					
					*(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype)) = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ' ';
				}
				RTHOOK(31);
				RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
				
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4747, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc5 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(32);
				tr1 = RTLN(240);
				*(EIF_NATURAL_32 *)tr1 = loc5;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4485, "is_valid_character_8_code", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(33);
					tc1 = (EIF_CHARACTER_8) loc5;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1339, dtype))(Current, uc1x);
				} else {
					RTHOOK(34);
					RTDBGAA(Current, dtype, 1340, 0x10000000, 1); /* last_state */
					
					*(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				}
				RTHOOK(35);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parse_character */
void F84_1452 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_character";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE uu8_2x = {{0}, SK_UINT64};
#define uu8_2 uu8_2x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	RTLU(SK_UINT64, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 83, Current, 3, 1, 1364);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1364);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 5L))) {
		RTHOOK(3);
		switch (loc3) {
			case 0L:
				RTHOOK(4);
				tc1 = *(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype));
				tc2 = *(EIF_CHARACTER_8 *)(Current + RTWA(1355, dtype));
				if ((EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(tc2 == (EIF_CHARACTER_8) 'X')))) || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '&'))) {
					RTHOOK(5);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(6);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '+'))) {
						RTHOOK(7);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(8);
						if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
							RTHOOK(9);
							RTDBGAA(Current, dtype, 1341, 0x10000000, 1); /* sign */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						} else {
							RTHOOK(10);
							RTDBGAA(Current, dtype, 1341, 0x10000000, 1); /* sign */
							
							*(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						}
					} else {
						RTHOOK(11);
						tr1 = RTLN(219);
						*(EIF_CHARACTER_8 *)tr1 = arg1;
						
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4243, "is_hexa_digit", tr1))(tr1)).it_b);
						if (tb1) {
							RTHOOK(12);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
							RTHOOK(13);
							RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
							
							tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
							*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) tu8_1;
							RTHOOK(14);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
								RTHOOK(15);
								RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
								
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
								*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
							} else {
								RTHOOK(16);
								if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
									RTHOOK(17);
									RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
									
									ti4_1 = (EIF_INTEGER_32) (arg1);
									tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
									*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
								} else {
									RTHOOK(18);
									if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
										RTHOOK(19);
										RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
										
										ti4_1 = (EIF_INTEGER_32) (arg1);
										tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
										*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
									}
								}
							}
						} else {
							RTHOOK(20);
							tb1 = '\0';
							tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1324, dtype));
							if (tb2) {
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1325, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(20,1);
								uc1 = arg1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1935, "has", tr1))(tr1, uc1x)).it_b);
								tb1 = tb2;
							}
							if (tb1) {
							} else {
								RTHOOK(21);
								RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
								
								loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
							}
						}
					}
				}
				break;
			case 1L:
				RTHOOK(22);
				tr1 = RTLN(219);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4243, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(23);
					RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
					
					tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(24);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						RTHOOK(25);
						RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
						
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
					} else {
						RTHOOK(26);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							RTHOOK(27);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
						} else {
							RTHOOK(28);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								RTHOOK(29);
								RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
								
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					RTHOOK(30);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1297, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						RTHOOK(31);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(31,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
						ui4_2 = ti4_2;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1318, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						if (tb1) {
							RTHOOK(32);
							RTDBGAA(Current, dtype, 1356, 0x04000000, 1); /* internal_overflowed */
							
							*(EIF_BOOLEAN *)(Current + RTWA(1356, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(33);
							RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) loc1;
							RTHOOK(34);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) loc2;
							RTHOOK(35);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
					RTHOOK(36);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(37);
					if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '#')) {
						RTHOOK(38);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					} else {
						RTHOOK(39);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'x') || (EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) 'X'))) {
							RTHOOK(40);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						}
					}
				}
				break;
			case 2L:
				RTHOOK(41);
				tr1 = RTLN(219);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4243, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(42);
					RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
					
					tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
					*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) tu8_1;
					RTHOOK(43);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						RTHOOK(44);
						RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
						
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
					} else {
						RTHOOK(45);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							RTHOOK(46);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
						} else {
							RTHOOK(47);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								RTHOOK(48);
								RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
								
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					RTHOOK(49);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1297, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						RTHOOK(50);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(50,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
						ui4_2 = ti4_2;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1318, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						if (tb1) {
							RTHOOK(51);
							RTDBGAA(Current, dtype, 1356, 0x04000000, 1); /* internal_overflowed */
							
							*(EIF_BOOLEAN *)(Current + RTWA(1356, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(52);
							RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) loc1;
							RTHOOK(53);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) loc2;
							RTHOOK(54);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
					RTHOOK(55);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
				}
				break;
			case 3L:
				RTHOOK(56);
				tr1 = RTLN(219);
				*(EIF_CHARACTER_8 *)tr1 = arg1;
				
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4243, "is_hexa_digit", tr1))(tr1)).it_b);
				if (tb1) {
					RTHOOK(57);
					RTDBGAL(Current, 1, 0x3C000000, 1, 0); /* loc1 */
					
					loc1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
					RTHOOK(58);
					RTDBGAL(Current, 2, 0x3C000000, 1, 0); /* loc2 */
					
					loc2 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
					RTHOOK(59);
					RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
					
					tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
					tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
					tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
					*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
					RTHOOK(60);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '9'))) {
						RTHOOK(61);
						RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
						
						ti4_1 = (EIF_INTEGER_32) (arg1);
						tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 48L));
						*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
					} else {
						RTHOOK(62);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'f'))) {
							RTHOOK(63);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							ti4_1 = (EIF_INTEGER_32) (arg1);
							tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 87L));
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
						} else {
							RTHOOK(64);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_CHARACTER_8) 'A') && (EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) 'F'))) {
								RTHOOK(65);
								RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
								
								ti4_1 = (EIF_INTEGER_32) (arg1);
								tu8_1 = (EIF_NATURAL_64) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 55L));
								*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) tu8_1;
							}
						}
					}
					RTHOOK(66);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1297, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
						RTHOOK(67);
						RTDBGAA(Current, dtype, 1356, 0x04000000, 1); /* internal_overflowed */
						
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1357, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(67,1);
						tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
						uu8_1 = tu8_1;
						tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
						uu8_2 = tu8_2;
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1332, dtype));
						ui4_1 = ti4_1;
						ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
						ui4_2 = ti4_2;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1318, "will_overflow", tr1))(tr1, uu8_1x, uu8_2x, ui4_1x, ui4_2x)).it_b);
						*(EIF_BOOLEAN *)(Current + RTWA(1356, dtype)) = (EIF_BOOLEAN) tb1;
						RTHOOK(68);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1329, dtype))(Current)).it_b);
						if (tb1) {
							RTHOOK(69);
							RTDBGAA(Current, dtype, 1358, 0x3C000000, 1); /* part1 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype)) = (EIF_NATURAL_64) loc1;
							RTHOOK(70);
							RTDBGAA(Current, dtype, 1359, 0x3C000000, 1); /* part2 */
							
							*(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype)) = (EIF_NATURAL_64) loc2;
							RTHOOK(71);
							RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
							
							loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						}
					}
				} else {
					RTHOOK(72);
					tb1 = '\0';
					tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1326, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(72,1);
						uc1 = arg1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1935, "has", tr1))(tr1, uc1x)).it_b);
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(73);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(74);
						RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
						
						loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					}
				}
				break;
			case 4L:
				RTHOOK(75);
				tb1 = '\0';
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1323, dtype));
				if (tb2) {
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1326, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(75,1);
					uc1 = arg1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1935, "has", tr1))(tr1, uc1x)).it_b);
					tb1 = tb2;
				}
				if (tb1) {
				} else {
					RTHOOK(76);
					RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
					
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTHOOK(77);
	RTDBGAA(Current, dtype, 1340, 0x10000000, 1); /* last_state */
	
	*(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype)) = (EIF_INTEGER_32) loc3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(78);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef uu8_1
#undef uu8_2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.conversion_type_valid */
EIF_TYPED_VALUE F84_1453 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "conversion_type_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 1, 1365);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(83, Current, 1365);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1313, Dtype(Current)))(Current, ui4_1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_part_of_integer */
EIF_TYPED_VALUE F84_1454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_part_of_integer";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1366);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1366);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	Result = *(EIF_BOOLEAN *)(Current + RTWA(1356, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 2L))) || (EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 3L)))) && (EIF_BOOLEAN) !Result);
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.is_integral_integer */
EIF_TYPED_VALUE F84_1455 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_integral_integer";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1367);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1367);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1340, dtype));
	Result = *(EIF_BOOLEAN *)(Current + RTWA(1356, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 3L)))) && (EIF_BOOLEAN) !Result);
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

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_8 */
EIF_TYPED_VALUE F84_1456 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_8";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1368);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1368);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x0C000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti1_1 = (EIF_INTEGER_8) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_8) (EIF_INTEGER_8) -ti1_1;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x0C000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti1_1 = (EIF_INTEGER_8) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_8) ti1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_16 */
EIF_TYPED_VALUE F84_1457 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_16";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1369);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x14000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti2_1 = (EIF_INTEGER_16) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_16) (EIF_INTEGER_16) -ti2_1;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x14000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti2_1 = (EIF_INTEGER_16) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_16) ti2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_32 */
EIF_TYPED_VALUE F84_1458 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_32";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1370);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer */
EIF_TYPED_VALUE F84_1459 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1371);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti4_1 = (EIF_INTEGER_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_integer_64 */
EIF_TYPED_VALUE F84_1460 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1372);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1341, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x24000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti8_1 = (EIF_INTEGER_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_64) (EIF_INTEGER_64) -ti8_1;
	} else {
		RTHOOK(3);
		RTDBGAL(Current, 0, 0x24000000, 1,0); /* Result */
		
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
		tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
		tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
		ti8_1 = (EIF_INTEGER_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_8 */
EIF_TYPED_VALUE F84_1461 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_8";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1373);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x30000000, 1,0); /* Result */
	
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
	tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
	tu1_1 = (EIF_NATURAL_8) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_16 */
EIF_TYPED_VALUE F84_1462 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_16";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1374);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x34000000, 1,0); /* Result */
	
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
	tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
	tu2_1 = (EIF_NATURAL_16) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_32 */
EIF_TYPED_VALUE F84_1463 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_32";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
	tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
	tu4_1 = (EIF_NATURAL_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural */
EIF_TYPED_VALUE F84_1464 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 tu8_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1376);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1376);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
	tu8_2 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
	tu8_3 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
	tu4_1 = (EIF_NATURAL_32) (EIF_NATURAL_64) ((EIF_NATURAL_64) (tu8_1 * tu8_2) + tu8_3);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.parsed_natural_64 */
EIF_TYPED_VALUE F84_1465 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "parsed_natural_64";
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1377);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1377);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x3C000000, 1,0); /* Result */
	
	Result = *(EIF_NATURAL_64 *)(Current + RTWA(1358, dtype));
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 16L);
	tu8_2 = *(EIF_NATURAL_64 *)(Current + RTWA(1359, dtype));
	Result = (EIF_NATURAL_64) (EIF_NATURAL_64) ((EIF_NATURAL_64) (Result * tu8_1) + tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_lookahead */
EIF_TYPED_VALUE F84_1466 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = *(EIF_CHARACTER_8 *)(Current + RTWA(1355,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.internal_overflowed */
EIF_TYPED_VALUE F84_1467 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1356,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.overflow_checker */
RTOID (F84_1468)
EIF_TYPED_VALUE F84_1468 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "overflow_checker";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F84_1468);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 83, Current, 0, 0, 1380);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(83, Current, 1380);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000051, 0,0); /* Result */
	
	tr1 = RTLN(81);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1317, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("overflow_checker_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part1 */
EIF_TYPED_VALUE F84_1469 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(1358,Dtype(Current)));
	return r;
}


/* {HEXADECIMAL_STRING_TO_INTEGER_CONVERTER}.part2 */
EIF_TYPED_VALUE F84_1470 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(1359,Dtype(Current)));
	return r;
}


void EIF_Minit84 (void)
{
	GTCX
	RTOTS (1468,F84_1468)
}


#ifdef __cplusplus
}
#endif
