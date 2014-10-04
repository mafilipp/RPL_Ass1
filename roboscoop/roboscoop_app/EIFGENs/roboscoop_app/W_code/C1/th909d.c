/*
 * Class THYMIO_GROUND_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_909 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_909 [] = {0xFF11,274,0xFF12,908,0xFFFF};
static EIF_TYPE_INDEX gen_type2_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type3_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type6_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type7_909 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_909 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_909 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_909 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_909 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_909 [] = {0xFF11,908,0xFFFF};
static EIF_TYPE_INDEX gen_type13_909 [] = {0xFF11,286,0xFF11,17,0xFFFF};
static EIF_TYPE_INDEX gen_type14_909 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type15_909 [] = {0xFF11,545,0xFF11,49,0xFFFF};


static struct desc_info desc_909[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 257, gen_type0_909},
	{1, (BODY_INDEX)-1, 274, gen_type1_909},
	{2, (BODY_INDEX)-1, 225, NULL},
	{3, (BODY_INDEX)-1, 225, NULL},
	{4, (BODY_INDEX)-1, 225, NULL},
	{5, (BODY_INDEX)-1, 225, NULL},
	{6, (BODY_INDEX)-1, 225, NULL},
	{7, (BODY_INDEX)-1, 225, NULL},
	{8, (BODY_INDEX)-1, 225, NULL},
	{9, (BODY_INDEX)-1, 225, NULL},
	{10, (BODY_INDEX)-1, 908, gen_type2_909},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_909},
	{14, (BODY_INDEX)-1, 0, gen_type4_909},
	{15, (BODY_INDEX)-1, 908, gen_type5_909},
	{16, (BODY_INDEX)-1, 908, gen_type6_909},
	{17, (BODY_INDEX)-1, 0, gen_type7_909},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 18, gen_type8_909},
	{21, (BODY_INDEX)-1, 257, gen_type9_909},
	{22, (BODY_INDEX)-1, 257, gen_type10_909},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 38, gen_type11_909},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 908, NULL},
	{29, (BODY_INDEX)-1, 252, NULL},
	{30, (BODY_INDEX)-1, 908, gen_type12_909},
	{13085, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{392, 0, 286, gen_type13_909},
	{393, 16, 225, NULL},
	{394, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{1128, (BODY_INDEX)-1, 257, gen_type14_909},
	{1129, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13084, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13086, 8, 545, gen_type15_909},
	{13087, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init909(void);
void Init909(void)
{
	IDSC(desc_909, 0, 908);
	IDSC(desc_909 + 1, 1, 908);
	IDSC(desc_909 + 32, 185, 908);
	IDSC(desc_909 + 36, 106, 908);
	IDSC(desc_909 + 38, 385, 908);
}


#ifdef __cplusplus
}
#endif
