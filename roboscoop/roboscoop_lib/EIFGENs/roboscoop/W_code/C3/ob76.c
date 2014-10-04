/*
 * Code for class OBJECT_GRAPH_TRAVERSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F76_1355(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1356(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1357(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1358(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1359(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1360(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1363(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1364(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1365(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1366(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1367(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1368(EIF_REFERENCE);
extern void F76_1369(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1370(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1371(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1372(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1373(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1374(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1375(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1376(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1377(EIF_REFERENCE);
extern void F76_1378(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1380(EIF_REFERENCE);
extern void F76_1381(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F76_1382(EIF_REFERENCE);
extern void EIF_Minit76(void);

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

/* {OBJECT_GRAPH_TRAVERSABLE}.root_object */
EIF_TYPED_VALUE F76_1355 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1254,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_object_action */
EIF_TYPED_VALUE F76_1356 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1255,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.on_processing_reference_action */
EIF_TYPED_VALUE F76_1357 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1256,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.object_action */
EIF_TYPED_VALUE F76_1358 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1257,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_objects */
EIF_TYPED_VALUE F76_1359 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1258,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.visited_types */
EIF_TYPED_VALUE F76_1360 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1259,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.has_failed */
EIF_TYPED_VALUE F76_1361 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1260,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_root_object_set */
EIF_TYPED_VALUE F76_1362 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_root_object_set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1282);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1282);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1254, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.is_object_action_set */
EIF_TYPED_VALUE F76_1363 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_object_action_set";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1283);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1283);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1257, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.has_reference_with_copy_semantics */
EIF_TYPED_VALUE F76_1364 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1263,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_transient */
EIF_TYPED_VALUE F76_1365 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1264,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_skip_copy_semantics_reference */
EIF_TYPED_VALUE F76_1366 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1265,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_on_copy_suppressed */
EIF_TYPED_VALUE F76_1367 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1266,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.is_exception_propagated */
EIF_TYPED_VALUE F76_1368 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1267,Dtype(Current)));
	return r;
}


/* {OBJECT_GRAPH_TRAVERSABLE}.set_root_object */
void F76_1369 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_root_object";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1289);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1289);
	RTCC(arg1, 75, l_feature_name, 1, RTWCT(1254, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1254, 0xF8000000, 0); /* root_object */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1254, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("root_object_set", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1261, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_object_action */
void F76_1370 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_on_processing_object_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1290);
	RTCC(arg1, 75, l_feature_name, 1, RTWCT(1255, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1255, 0xF8000113, 0); /* on_processing_object_action */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1255, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("on_processing_object_action_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1255, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_on_processing_reference_action */
void F76_1371 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_on_processing_reference_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1291);
	RTCC(arg1, 75, l_feature_name, 1, RTWCT(1256, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1256, 0xF8000113, 0); /* on_processing_reference_action */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1256, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("on_processing_reference_action_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_object_action */
void F76_1372 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_object_action";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1292);
	RTCC(arg1, 75, l_feature_name, 1, RTWCT(1257, dtype, Dftype(Current)));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1257, 0xF8000113, 0); /* object_action */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(1257, dtype)) = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("an_object_action_set", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1262, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_transient */
void F76_1373 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_skip_transient";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1293);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1293);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1264, 0x04000000, 1); /* is_skip_transient */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1264, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_transient_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1264, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_skip_copy_semantics_reference */
void F76_1374 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_skip_copy_semantics_reference";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1294);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1265, 0x04000000, 1); /* is_skip_copy_semantics_reference */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1265, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_skip_copy_semantics_reference_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1265, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_on_copy_suppressed */
void F76_1375 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_exception_on_copy_suppressed";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1295);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1266, 0x04000000, 1); /* is_exception_on_copy_suppressed */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1266, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_on_copy_suppressed_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1266, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.set_is_exception_propagated */
void F76_1376 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_exception_propagated";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 1, 1296);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1296);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1267, 0x04000000, 1); /* is_exception_propagated */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1267, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_exception_propagated_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1267, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.traverse */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F76_1377 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "traverse";
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDR
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	RTXI(6);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_REF, &loc4);
	RTLXL;
	
	RTEAA(l_feature_name, 75, Current, 4, 0, 1297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1297);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_object_available", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1261, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !loc3) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1254, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF8000040, 0, 0); /* loc1 */
		
		tr1 = RTLN(64);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1138, "lock_marking", loc1))(loc1);
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x04000000, 1, 0); /* loc2 */
		
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1280, dtype))(Current, ur1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1139, "unlock_marking", loc1))(loc1);
		RTHOOK(8);
		RTDBGAA(Current, dtype, 1260, 0x04000000, 1); /* has_failed */
		
		*(EIF_BOOLEAN *)(Current + RTWA(1260, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(6);
	RTS_SRR
	RTHOOK(9);
	RTDBGAL(Current, 3, 0x04000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 1260, 0x04000000, 1); /* has_failed */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1260, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(11);
	if ((EIF_BOOLEAN) (loc2 && (EIF_BOOLEAN)(loc1 != NULL))) {
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1139, "unlock_marking", loc1))(loc1);
	}
	RTHOOK(13);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1267, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(14);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(6);
#undef up1
#undef ur1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {OBJECT_GRAPH_TRAVERSABLE}.wipe_out */
void F76_1378 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 75, Current, 0, 0, 1298);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1298);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1258, 0xF800012C, 0); /* visited_objects */
	
	*(EIF_REFERENCE *)(Current + RTWA(1258, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1259, 0xF800013F, 0); /* visited_types */
	
	*(EIF_REFERENCE *)(Current + RTWA(1259, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1257, 0xF8000113, 0); /* object_action */
	
	*(EIF_REFERENCE *)(Current + RTWA(1257, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1254, 0xF8000000, 0); /* root_object */
	
	*(EIF_REFERENCE *)(Current + RTWA(1254, dtype)) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("visited_objects_reset", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1258, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("object_action_not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1262, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("root_object_not_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1261, dtype))(Current)).it_b);
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
}

/* {OBJECT_GRAPH_TRAVERSABLE}.default_size */
EIF_TYPED_VALUE F76_1380 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 200L);
	return r;
}

/* {OBJECT_GRAPH_TRAVERSABLE}.internal_traverse */
void F76_1381 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "internal_traverse";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(24);
	RTLR(0,loc6);
	RTLR(1,tr1);
	RTLR(2,loc13);
	RTLR(3,arg1);
	RTLR(4,ur1);
	RTLR(5,loc14);
	RTLR(6,loc8);
	RTLR(7,Current);
	RTLR(8,loc9);
	RTLR(9,loc7);
	RTLR(10,loc10);
	RTLR(11,loc11);
	RTLR(12,loc16);
	RTLR(13,loc17);
	RTLR(14,loc18);
	RTLR(15,loc3);
	RTLR(16,loc19);
	RTLR(17,loc20);
	RTLR(18,loc21);
	RTLR(19,loc22);
	RTLR(20,loc4);
	RTLR(21,loc23);
	RTLR(22,loc24);
	RTLR(23,loc12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	
	RTEAA(l_feature_name, 75, Current, 24, 1, 1300);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1300);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 6, 0xF8000040, 0, 0); /* loc6 */
	
	tr1 = RTLN(64);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 13, 0xF80000AD, 0, 0); /* loc13 */
	
	tr1 = RTLN(173);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2510, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 14, 0xF80000AB, 0, 0); /* loc14 */
	
	loc14 = (EIF_REFERENCE) RTCCL(loc13);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1136, "mark", loc6))(loc6, ur1x);
	RTHOOK(5);
	RTDBGAL(Current, 8, 0xF800012C, 0, 0); /* loc8 */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(1258, dtype, dftype)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1279, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3825, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 9, 0xF800013F, 0, 0); /* loc9 */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(1259, dtype, dftype)));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1279, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3716, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(6,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(Current, 7, 0xF80001BB, 0, 0); /* loc7 */
	
	loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1278, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(8);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
	RTHOOK(9);
	RTDBGAL(Current, 10, 0xF8000113, 0, 0); /* loc10 */
	
	loc10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1257, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(10);
	RTDBGAL(Current, 11, 0xF8000113, 0, 0); /* loc11 */
	
	loc11 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1255, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(11);
	RTDBGAL(Current, 16, 0xF8000113, 0, 0); /* loc16 */
	
	loc16 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1256, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(12);
	RTDBGAL(Current, 17, 0xF80000AD, 0, 0); /* loc17 */
	
	tr1 = RTLN(173);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2510, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(12,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
	
	loc18 = (EIF_REFERENCE) RTCCL(loc17);
	RTHOOK(14);
	RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
	
	loc18 = (EIF_REFERENCE) RTCCL(loc17);
	for (;;) {
		RTHOOK(15);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1936, "is_empty", loc7))(loc7)).it_b);
		if (tb1) break;
		RTHOOK(16);
		RTDBGAL(Current, 3, 0xF8000000, 0, 0); /* loc3 */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1984, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1989, "remove", loc7))(loc7);
		RTHOOK(18);
		loc19 = RTCCL(loc3);
		loc19 = RTRV(eif_non_attached_type(171),loc19);
		if ((loc19) && RTS_OS (Current, loc19)) loc19 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc19)) {
			if (RTAL & CK_CHECK) {
				RTHOOK(19);
				RTCT("embedded_or_copy_semantics", EX_CHECK);
				tb2 = '\01';
				loc20 = RTCCL(loc19);
				loc20 = RTRV(eif_non_attached_type(172),loc20);
				if (!(EIF_TEST(loc20))) {
					tb3 = '\0';
					loc21 = RTCCL(loc19);
					loc21 = RTRV(eif_non_attached_type(173),loc21);
					if (EIF_TEST(loc21)) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc21 + RTVA(2514, "physical_offset", loc21));
						tb3 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
					}
					tb2 = tb3;
				}
				if (tb2) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(20);
			RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
			
			loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(21);
			RTDBGAL(Current, 14, 0xF80000AB, 0, 0); /* loc14 */
			
			loc14 = (EIF_REFERENCE) RTCCL(loc19);
			RTHOOK(22);
			tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1265, dtype));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(23);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2435, "object", loc19))(loc19)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1948, "extend", loc8))(loc8, ur1x);
			}
		} else {
			RTHOOK(24);
			ur1 = RTCCL(loc3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2515, "set_object", loc13))(loc13, ur1x);
			RTHOOK(25);
			RTDBGAL(Current, 14, 0xF80000AB, 0, 0); /* loc14 */
			
			loc14 = (EIF_REFERENCE) RTCCL(loc13);
			RTHOOK(26);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2447, "is_expanded", loc13))(loc13)).it_b);
			if (tb2) {
				RTHOOK(27);
				RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
				
				loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(28);
				tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1265, dtype));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(29);
					ur1 = RTCCL(loc3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1948, "extend", loc8))(loc8, ur1x);
				}
			} else {
				RTHOOK(30);
				ur1 = RTCCL(loc3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1948, "extend", loc8))(loc8, ur1x);
			}
		}
		RTHOOK(31);
		ti4_1 = *(EIF_INTEGER_32 *)(loc14 + RTVA(2438, "dynamic_type", loc14));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(loc14 + RTVA(2438, "dynamic_type", loc14));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1981, "put", loc9))(loc9, ui4_1x, ui4_2x);
		RTHOOK(32);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc10 != NULL) || (EIF_BOOLEAN)(loc11 != NULL))) {
			RTHOOK(33);
			tb2 = '\0';
			tb3 = *(EIF_BOOLEAN *)(Current + RTWA(1266, dtype));
			if ((EIF_BOOLEAN) !tb3) {
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2447, "is_expanded", loc14))(loc14)).it_b);
				tb2 = tb3;
			}
			if (tb2) {
				RTHOOK(34);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1281, dtype))(Current);
			} else {
				RTHOOK(35);
				if ((EIF_BOOLEAN)(loc10 != NULL)) {
					RTHOOK(36);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0xFF11,0,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc3;
					RTAR(tr1,loc3);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc10))(loc10, ur1x);
				}
				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc11 != NULL)) {
					RTHOOK(38);
					{
						static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,211,0xFF11,171,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						tr1 = RTLNTS(typres0, 2, 0);
					}
					((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
					RTAR(tr1,loc14);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc11))(loc11, ur1x);
				}
			}
		}
		RTHOOK(39);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2444, "is_special", loc14))(loc14)).it_b);
		if (tb2) {
			RTHOOK(40);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2446, "is_special_of_reference", loc14))(loc14)).it_b);
			if (tb2) {
				RTHOOK(41);
				loc22 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {280,0,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc22 = RTRV(eif_non_attached_type(typres0),loc22);
				}
				if ((loc22) && RTS_OS (Current, loc22)) loc22 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc22)) {
					RTHOOK(42);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					RTHOOK(43);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2517, "count", loc22))(loc22)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					for (;;) {
						RTHOOK(44);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(45);
						ui4_1 = loc1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2452, "is_special_copy_semantics_item", loc14))(loc14, ui4_1x)).it_b);
						if (tb2) {
							RTHOOK(46);
							RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
							
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2460, "special_copy_semantics_item", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc18 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(47);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							loc4 = (EIF_REFERENCE) RTCCL(loc18);
							RTHOOK(48);
							ur1 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
							RTHOOK(49);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(50);
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
									EIF_TYPE_INDEX typres0;
									static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
									
									typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr1 = RTLNTS(typres0, 3, 0);
								}
								((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
								RTAR(tr1,loc14);
								((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
								RTAR(tr1,loc18);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
							}
						} else {
							RTHOOK(51);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc22))(loc22, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(52);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								ur1 = RTCCL(loc4);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1135, "is_marked", loc6))(loc6, ur1x)).it_b);
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(53);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1136, "mark", loc6))(loc6, ur1x);
								RTHOOK(54);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
							}
							RTHOOK(55);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(56);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2515, "set_object", loc17))(loc17, ur1x);
								RTHOOK(57);
								RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
								
								loc18 = (EIF_REFERENCE) RTCCL(loc17);
								RTHOOK(58);
								{
									static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
									EIF_TYPE_INDEX typres0;
									static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
									
									typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
									tr1 = RTLNTS(typres0, 3, 0);
								}
								((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
								RTAR(tr1,loc14);
								((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
								RTAR(tr1,loc18);
								ur1 = RTCCL(tr1);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
							}
						}
						RTHOOK(59);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1++;
					}
				}
			} else {
				RTHOOK(60);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2445, "is_special_of_expanded", loc14))(loc14)).it_b);
				if (tb2) {
					RTHOOK(61);
					loc23 = RTCCL(loc3);
					{
						static EIF_TYPE_INDEX typarr0[] = {280,0xFF11,0,0xFFFF};
						EIF_TYPE_INDEX typres0;
						static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
						
						typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
						loc23 = RTRV(eif_non_attached_type(typres0),loc23);
					}
					if ((loc23) && RTS_OS (Current, loc23)) loc23 = (EIF_REFERENCE) 0;
					if (EIF_TEST(loc23)) {
						RTHOOK(62);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
						RTHOOK(63);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2517, "count", loc23))(loc23)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						for (;;) {
							RTHOOK(64);
							if ((EIF_BOOLEAN)(loc1 == loc2)) break;
							RTHOOK(65);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc23))(loc23, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(66);
							ur1 = RTCCL(loc4);
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
							RTHOOK(67);
							if ((EIF_BOOLEAN)(loc16 != NULL)) {
								RTHOOK(68);
								tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1266, dtype));
								if (tb2) {
									RTHOOK(69);
									ur1 = RTCCL(loc4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2515, "set_object", loc17))(loc17, ur1x);
									RTHOOK(70);
									RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
									
									loc18 = (EIF_REFERENCE) RTCCL(loc17);
									RTHOOK(71);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
										EIF_TYPE_INDEX typres0;
										static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
										
										typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
								} else {
									RTHOOK(72);
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1281, dtype))(Current);
								}
							}
							RTHOOK(73);
							RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
							
							loc1++;
						}
					}
				}
			}
		} else {
			RTHOOK(74);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2448, "is_tuple", loc14))(loc14)).it_b);
			if (tb2) {
				RTHOOK(75);
				loc24 = RTCCL(loc3);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,211,0xFFFF};
					EIF_TYPE_INDEX typres0;
					static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
					
					typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc24 = RTRV(eif_non_attached_type(typres0),loc24);
				}
				if ((loc24) && RTS_OS (Current, loc24)) loc24 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc24)) {
					RTHOOK(76);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(77);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3993, "count", loc24))(loc24)).it_i4);
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(78);
						if ((EIF_BOOLEAN)(loc1 == loc2)) break;
						RTHOOK(79);
						ui4_1 = loc1;
						tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4035, "is_reference_item", loc24))(loc24, ui4_1x)).it_b);
						if (tb2) {
							RTHOOK(80);
							RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
							
							ui4_1 = loc1;
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3969, "reference_item", loc24))(loc24, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) RTCCL(tr1);
							RTHOOK(81);
							tb2 = '\0';
							if ((EIF_BOOLEAN)(loc4 != NULL)) {
								ur1 = RTCCL(loc4);
								tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1135, "is_marked", loc6))(loc6, ur1x)).it_b);
								tb2 = (EIF_BOOLEAN) !tb3;
							}
							if (tb2) {
								RTHOOK(82);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1136, "mark", loc6))(loc6, ur1x);
								RTHOOK(83);
								ur1 = RTCCL(loc4);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
							}
							RTHOOK(84);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc16 != NULL) && (EIF_BOOLEAN)(loc4 != NULL))) {
								RTHOOK(85);
								tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1266, dtype));
								if (tb2) {
									RTHOOK(86);
									ur1 = RTCCL(loc4);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2515, "set_object", loc17))(loc17, ur1x);
									RTHOOK(87);
									RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
									
									loc18 = (EIF_REFERENCE) RTCCL(loc17);
									RTHOOK(88);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
										EIF_TYPE_INDEX typres0;
										static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
										
										typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
								} else {
									RTHOOK(89);
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1281, dtype))(Current);
								}
							}
						}
						RTHOOK(90);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						
						loc1++;
					}
				}
			} else {
				RTHOOK(91);
				RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
				
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(92);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2495, "field_count", loc14))(loc14)).it_i4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				if (RTAL & CK_LOOP) {
					RTHOOK(93);
					RTCT(NULL, EX_VAR);
					ti4_2 = (EIF_INTEGER_32) (loc2 - loc1);
					if (ti4_2 >= 0) {
						RTCK;
					} else {
						RTCF;
					}
				}
				for (;;) {
					RTHOOK(94);
					if ((EIF_BOOLEAN)(loc1 == loc2)) break;
					RTHOOK(95);
					RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
					
					ui4_1 = loc1;
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2457, "field_type", loc14))(loc14, ui4_1x)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(96);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2318, 167))(Current)).it_i4);
					ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2328, 167))(Current)).it_i4);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ti4_3) || (EIF_BOOLEAN)(loc5 == ti4_4))) {
						RTHOOK(97);
						tb2 = '\01';
						tb3 = *(EIF_BOOLEAN *)(Current + RTWA(1264, dtype));
						if (!(EIF_BOOLEAN) !tb3) {
							ui4_1 = loc1;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2449, "is_field_transient", loc14))(loc14, ui4_1x)).it_b);
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) {
							RTHOOK(98);
							ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2328, 167))(Current)).it_i4);
							if ((EIF_BOOLEAN)(loc5 == ti4_3)) {
								RTHOOK(99);
								RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
								
								ui4_1 = loc1;
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2461, "expanded_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								loc18 = (EIF_REFERENCE) RTCCL(tr1);
								RTHOOK(100);
								ur1 = RTCCL(loc18);
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
								RTHOOK(101);
								if ((EIF_BOOLEAN)(loc16 != NULL)) {
									RTHOOK(102);
									{
										static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
										EIF_TYPE_INDEX typres0;
										static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
										
										typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
										tr1 = RTLNTS(typres0, 3, 0);
									}
									((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
									RTAR(tr1,loc14);
									((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
									RTAR(tr1,loc18);
									ur1 = RTCCL(tr1);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
								}
							} else {
								RTHOOK(103);
								ui4_1 = loc1;
								tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2451, "is_copy_semantics_field", loc14))(loc14, ui4_1x)).it_b);
								if (tb2) {
									RTHOOK(104);
									RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
									
									ui4_1 = loc1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2459, "copy_semantics_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc18 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(105);
									ur1 = RTCCL(loc18);
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
									RTHOOK(106);
									if ((EIF_BOOLEAN)(loc16 != NULL)) {
										RTHOOK(107);
										{
											static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
											EIF_TYPE_INDEX typres0;
											static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
											
											typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
											tr1 = RTLNTS(typres0, 3, 0);
										}
										((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
										RTAR(tr1,loc14);
										((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
										RTAR(tr1,loc18);
										ur1 = RTCCL(tr1);
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
									}
								} else {
									RTHOOK(108);
									RTDBGAL(Current, 4, 0xF8000000, 0, 0); /* loc4 */
									
									ui4_1 = loc1;
									tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2442, "reference_field", loc14))(loc14, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
									loc4 = (EIF_REFERENCE) RTCCL(tr1);
									RTHOOK(109);
									if ((EIF_BOOLEAN)(loc4 != NULL)) {
										RTHOOK(110);
										ur1 = RTCCL(loc4);
										tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1135, "is_marked", loc6))(loc6, ur1x)).it_b);
										if ((EIF_BOOLEAN) !tb2) {
											RTHOOK(111);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1136, "mark", loc6))(loc6, ur1x);
											RTHOOK(112);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1947, "put", loc7))(loc7, ur1x);
										}
										RTHOOK(113);
										if ((EIF_BOOLEAN)(loc16 != NULL)) {
											RTHOOK(114);
											ur1 = RTCCL(loc4);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2515, "set_object", loc17))(loc17, ur1x);
											RTHOOK(115);
											RTDBGAL(Current, 18, 0xF80000AB, 0, 0); /* loc18 */
											
											loc18 = (EIF_REFERENCE) RTCCL(loc17);
											RTHOOK(116);
											{
												static EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,211,0xFF11,171,0xFF11,171,0xFFFF};
												EIF_TYPE_INDEX typres0;
												static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
												
												typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
												tr1 = RTLNTS(typres0, 3, 0);
											}
											((EIF_TYPED_VALUE *)tr1+1)->it_r = loc14;
											RTAR(tr1,loc14);
											((EIF_TYPED_VALUE *)tr1+2)->it_r = loc18;
											RTAR(tr1,loc18);
											ur1 = RTCCL(tr1);
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4712, "call", loc16))(loc16, ur1x);
										}
									}
								}
							}
						}
					}
					RTHOOK(117);
					RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
					
					loc1++;
					if (RTAL & CK_LOOP) {
						RTHOOK(93);
						RTCT(NULL, EX_VAR);
						ti4_1 = (EIF_INTEGER_32) (loc2 - loc1);
						if ((ti4_2 > ti4_1) && ti4_1 >= 0) {
							RTCK;
							ti4_2 = ti4_1;
						} else {
							RTCF;
						}
					}
				}
			}
		}
	}
	RTHOOK(118);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(119);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1995, "count", loc8))(loc8)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(120);
	RTDBGAL(Current, 12, 0xF8000118, 0, 0); /* loc12 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3828, "area", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc12 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(121);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(122);
		ui4_1 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2604, "item", loc12))(loc12, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1137, "unmark", loc6))(loc6, ur1x);
		RTHOOK(123);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(124);
	RTDBGAA(Current, dtype, 1258, 0xF800012C, 0); /* visited_objects */
	
	RTAR(Current, loc8);
	*(EIF_REFERENCE *)(Current + RTWA(1258, dtype)) = (EIF_REFERENCE) RTCCL(loc8);
	RTHOOK(125);
	RTDBGAA(Current, dtype, 1259, 0xF800013F, 0); /* visited_types */
	
	RTAR(Current, loc9);
	*(EIF_REFERENCE *)(Current + RTWA(1259, dtype)) = (EIF_REFERENCE) RTCCL(loc9);
	RTHOOK(126);
	RTDBGAA(Current, dtype, 1263, 0x04000000, 1); /* has_reference_with_copy_semantics */
	
	*(EIF_BOOLEAN *)(Current + RTWA(1263, dtype)) = (EIF_BOOLEAN) loc15;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(127);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {OBJECT_GRAPH_TRAVERSABLE}.raise_unwanted_copy_exception */
void F76_1382 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raise_unwanted_copy_exception";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 75, Current, 1, 0, 1301);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(75, Current, 1301);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800005A, 0, 0); /* loc1 */
	
	tr1 = RTLN(90);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("An agent has been invoked on a copy of an object during object graph traversal.\012This happens in TUPLE containing objects with copy-semantics or in SPECIAL[XX],\012where XX is a user-defined expanded type.",201,185385518);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1443, "set_description", loc1))(loc1, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1428, "raise", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
}

void EIF_Minit76 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
