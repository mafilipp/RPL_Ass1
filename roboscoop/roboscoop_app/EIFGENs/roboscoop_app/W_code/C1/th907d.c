/*
 * Class THYMIO_DIFFERENTIAL_DRIVE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_907 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_907 [] = {0xFF11,274,0xFF12,906,0xFFFF};
static EIF_TYPE_INDEX gen_type2_907 [] = {0xFF11,906,0xFFFF};
static EIF_TYPE_INDEX gen_type3_907 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_907 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_907 [] = {0xFF11,906,0xFFFF};
static EIF_TYPE_INDEX gen_type6_907 [] = {0xFF11,906,0xFFFF};
static EIF_TYPE_INDEX gen_type7_907 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_907 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_907 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_907 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_907 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_907 [] = {0xFF11,906,0xFFFF};
static EIF_TYPE_INDEX gen_type13_907 [] = {0xFF11,311,0xFF11,45,0xFFFF};


static struct desc_info desc_907[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 257, gen_type0_907},
	{1, (BODY_INDEX)-1, 274, gen_type1_907},
	{2, (BODY_INDEX)-1, 225, NULL},
	{3, (BODY_INDEX)-1, 225, NULL},
	{4, (BODY_INDEX)-1, 225, NULL},
	{5, (BODY_INDEX)-1, 225, NULL},
	{6, (BODY_INDEX)-1, 225, NULL},
	{7, (BODY_INDEX)-1, 225, NULL},
	{8, (BODY_INDEX)-1, 225, NULL},
	{9, (BODY_INDEX)-1, 225, NULL},
	{10, (BODY_INDEX)-1, 906, gen_type2_907},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_907},
	{14, (BODY_INDEX)-1, 0, gen_type4_907},
	{15, (BODY_INDEX)-1, 906, gen_type5_907},
	{16, (BODY_INDEX)-1, 906, gen_type6_907},
	{17, (BODY_INDEX)-1, 0, gen_type7_907},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 18, gen_type8_907},
	{21, (BODY_INDEX)-1, 257, gen_type9_907},
	{22, (BODY_INDEX)-1, 257, gen_type10_907},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 38, gen_type11_907},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 906, NULL},
	{29, (BODY_INDEX)-1, 252, NULL},
	{30, (BODY_INDEX)-1, 906, gen_type12_907},
	{13075, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13078, 0, 311, gen_type13_907},
	{13076, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13077, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init907(void);
void Init907(void)
{
	IDSC(desc_907, 0, 906);
	IDSC(desc_907 + 1, 1, 906);
	IDSC(desc_907 + 32, 386, 906);
	IDSC(desc_907 + 34, 265, 906);
}


#ifdef __cplusplus
}
#endif
