/*
 * Class THYMIO_SOUND_PLAYER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_908 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_908 [] = {0xFF11,274,0xFF12,907,0xFFFF};
static EIF_TYPE_INDEX gen_type2_908 [] = {0xFF11,907,0xFFFF};
static EIF_TYPE_INDEX gen_type3_908 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_908 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_908 [] = {0xFF11,907,0xFFFF};
static EIF_TYPE_INDEX gen_type6_908 [] = {0xFF11,907,0xFFFF};
static EIF_TYPE_INDEX gen_type7_908 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_908 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_908 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_908 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_908 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_908 [] = {0xFF11,907,0xFFFF};
static EIF_TYPE_INDEX gen_type13_908 [] = {0xFF11,311,0xFF11,48,0xFFFF};


static struct desc_info desc_908[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 257, gen_type0_908},
	{1, (BODY_INDEX)-1, 274, gen_type1_908},
	{2, (BODY_INDEX)-1, 225, NULL},
	{3, (BODY_INDEX)-1, 225, NULL},
	{4, (BODY_INDEX)-1, 225, NULL},
	{5, (BODY_INDEX)-1, 225, NULL},
	{6, (BODY_INDEX)-1, 225, NULL},
	{7, (BODY_INDEX)-1, 225, NULL},
	{8, (BODY_INDEX)-1, 225, NULL},
	{9, (BODY_INDEX)-1, 225, NULL},
	{10, (BODY_INDEX)-1, 907, gen_type2_908},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_908},
	{14, (BODY_INDEX)-1, 0, gen_type4_908},
	{15, (BODY_INDEX)-1, 907, gen_type5_908},
	{16, (BODY_INDEX)-1, 907, gen_type6_908},
	{17, (BODY_INDEX)-1, 0, gen_type7_908},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 18, gen_type8_908},
	{21, (BODY_INDEX)-1, 257, gen_type9_908},
	{22, (BODY_INDEX)-1, 257, gen_type10_908},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 38, gen_type11_908},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 907, NULL},
	{29, (BODY_INDEX)-1, 252, NULL},
	{30, (BODY_INDEX)-1, 907, gen_type12_908},
	{13079, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13083, 0, 311, gen_type13_908},
	{13080, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13081, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13082, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init908(void);
void Init908(void)
{
	IDSC(desc_908, 0, 907);
	IDSC(desc_908 + 1, 1, 907);
	IDSC(desc_908 + 32, 387, 907);
	IDSC(desc_908 + 34, 83, 907);
}


#ifdef __cplusplus
}
#endif
