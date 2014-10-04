/*
 * Class THYMIO_RANGE_GROUP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_906 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_906 [] = {0xFF11,274,0xFF12,905,0xFFFF};
static EIF_TYPE_INDEX gen_type2_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type3_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type6_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type7_906 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_906 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_906 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_906 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_906 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_906 [] = {0xFF11,905,0xFFFF};
static EIF_TYPE_INDEX gen_type13_906 [] = {0xFF11,286,0xFF11,16,0xFFFF};
static EIF_TYPE_INDEX gen_type14_906 [] = {0xFF11,545,0xFF11,46,0xFFFF};


static struct desc_info desc_906[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 257, gen_type0_906},
	{1, (BODY_INDEX)-1, 274, gen_type1_906},
	{2, (BODY_INDEX)-1, 225, NULL},
	{3, (BODY_INDEX)-1, 225, NULL},
	{4, (BODY_INDEX)-1, 225, NULL},
	{5, (BODY_INDEX)-1, 225, NULL},
	{6, (BODY_INDEX)-1, 225, NULL},
	{7, (BODY_INDEX)-1, 225, NULL},
	{8, (BODY_INDEX)-1, 225, NULL},
	{9, (BODY_INDEX)-1, 225, NULL},
	{10, (BODY_INDEX)-1, 905, gen_type2_906},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_906},
	{14, (BODY_INDEX)-1, 0, gen_type4_906},
	{15, (BODY_INDEX)-1, 905, gen_type5_906},
	{16, (BODY_INDEX)-1, 905, gen_type6_906},
	{17, (BODY_INDEX)-1, 0, gen_type7_906},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 18, gen_type8_906},
	{21, (BODY_INDEX)-1, 257, gen_type9_906},
	{22, (BODY_INDEX)-1, 257, gen_type10_906},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 38, gen_type11_906},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 905, NULL},
	{29, (BODY_INDEX)-1, 252, NULL},
	{30, (BODY_INDEX)-1, 905, gen_type12_906},
	{13066, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{437, 0, 286, gen_type13_906},
	{438, 16, 225, NULL},
	{439, 17, 225, NULL},
	{440, 18, 225, NULL},
	{441, 19, 225, NULL},
	{442, 20, 225, NULL},
	{443, 21, 225, NULL},
	{13069, (BODY_INDEX)-1, 225, NULL},
	{444, (BODY_INDEX)-1, 225, NULL},
	{13071, (BODY_INDEX)-1, 225, NULL},
	{13070, (BODY_INDEX)-1, 3, NULL},
	{13073, (BODY_INDEX)-1, 225, NULL},
	{13072, (BODY_INDEX)-1, 225, NULL},
	{13074, (BODY_INDEX)-1, 3, NULL},
	{13062, (BODY_INDEX)-1, 228, NULL},
	{13068, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13065, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13067, (BODY_INDEX)-1, 228, NULL},
	{13063, 8, 545, gen_type14_906},
	{13064, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init906(void);
void Init906(void)
{
	IDSC(desc_906, 0, 905);
	IDSC(desc_906 + 1, 1, 905);
	IDSC(desc_906 + 32, 109, 905);
	IDSC(desc_906 + 49, 384, 905);
}


#ifdef __cplusplus
}
#endif
