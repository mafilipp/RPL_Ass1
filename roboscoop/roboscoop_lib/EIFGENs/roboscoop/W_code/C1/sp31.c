/*
 * Code for class SPINNER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F31_412(EIF_REFERENCE);
extern void EIF_Minit31(void);

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

/* {SPINNER}.spin */
void F31_412 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "spin";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 30, Current, 0, 0, 436);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(30, Current, 436);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		if ((EIF_BOOLEAN) 0) break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit31 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
