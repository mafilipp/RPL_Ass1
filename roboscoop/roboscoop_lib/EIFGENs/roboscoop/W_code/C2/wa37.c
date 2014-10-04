/*
 * Code for class WANDER_SIGNALER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F37_609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F37_612(EIF_REFERENCE);
extern void F37_613(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F37_614(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F37_615(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F37_616(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F37_617(EIF_REFERENCE);
extern void EIF_Minit37(void);

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

/* {WANDER_SIGNALER}.is_lifted_pending */
EIF_TYPED_VALUE F37_609 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(613,Dtype(Current)));
	return r;
}


/* {WANDER_SIGNALER}.is_go_pending */
EIF_TYPED_VALUE F37_610 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(614,Dtype(Current)));
	return r;
}


/* {WANDER_SIGNALER}.is_turn_pending */
EIF_TYPED_VALUE F37_611 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(615,Dtype(Current)));
	return r;
}


/* {WANDER_SIGNALER}.is_huge_pending */
EIF_TYPED_VALUE F37_612 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(616,Dtype(Current)));
	return r;
}


/* {WANDER_SIGNALER}.set_is_lifted_pending */
void F37_613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_lifted_pending";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 1, 698);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(36, Current, 698);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 613, 0x04000000, 1); /* is_lifted_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(613, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {WANDER_SIGNALER}.set_is_go_pending */
void F37_614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_go_pending";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 1, 699);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(36, Current, 699);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 614, 0x04000000, 1); /* is_go_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(614, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {WANDER_SIGNALER}.set_is_turn_pending */
void F37_615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_turn_pending";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 1, 700);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(36, Current, 700);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 615, 0x04000000, 1); /* is_turn_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(615, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {WANDER_SIGNALER}.set_is_huge_pending */
void F37_616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_huge_pending";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 1, 701);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(36, Current, 701);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 616, 0x04000000, 1); /* is_huge_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(616, Dtype(Current))) = (EIF_BOOLEAN) arg1;
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

/* {WANDER_SIGNALER}.clear_all_pendings */
void F37_617 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "clear_all_pendings";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 36, Current, 0, 0, 702);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(36, Current, 702);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 613, 0x04000000, 1); /* is_lifted_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(613, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 614, 0x04000000, 1); /* is_go_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(614, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 615, 0x04000000, 1); /* is_turn_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(615, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 616, 0x04000000, 1); /* is_huge_pending */
	
	*(EIF_BOOLEAN *)(Current + RTWA(616, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit37 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
