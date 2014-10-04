/*
 * Class THYMIO_TOP_LEDS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_905 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_905 [] = {0xFF11,274,0xFF12,904,0xFFFF};
static EIF_TYPE_INDEX gen_type2_905 [] = {0xFF11,904,0xFFFF};
static EIF_TYPE_INDEX gen_type3_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_905 [] = {0xFF11,904,0xFFFF};
static EIF_TYPE_INDEX gen_type6_905 [] = {0xFF11,904,0xFFFF};
static EIF_TYPE_INDEX gen_type7_905 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_905 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_905 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_905 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_905 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_905 [] = {0xFF11,904,0xFFFF};
static EIF_TYPE_INDEX gen_type13_905 [] = {0xFF11,311,0xFF11,48,0xFFFF};


static struct desc_info desc_905[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 257, gen_type0_905},
	{1, (BODY_INDEX)-1, 274, gen_type1_905},
	{2, (BODY_INDEX)-1, 225, NULL},
	{3, (BODY_INDEX)-1, 225, NULL},
	{4, (BODY_INDEX)-1, 225, NULL},
	{5, (BODY_INDEX)-1, 225, NULL},
	{6, (BODY_INDEX)-1, 225, NULL},
	{7, (BODY_INDEX)-1, 225, NULL},
	{8, (BODY_INDEX)-1, 225, NULL},
	{9, (BODY_INDEX)-1, 225, NULL},
	{10, (BODY_INDEX)-1, 904, gen_type2_905},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_905},
	{14, (BODY_INDEX)-1, 0, gen_type4_905},
	{15, (BODY_INDEX)-1, 904, gen_type5_905},
	{16, (BODY_INDEX)-1, 904, gen_type6_905},
	{17, (BODY_INDEX)-1, 0, gen_type7_905},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 18, gen_type8_905},
	{21, (BODY_INDEX)-1, 257, gen_type9_905},
	{22, (BODY_INDEX)-1, 257, gen_type10_905},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 38, gen_type11_905},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 904, NULL},
	{29, (BODY_INDEX)-1, 252, NULL},
	{30, (BODY_INDEX)-1, 904, gen_type12_905},
	{13051, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13061, 0, 311, gen_type13_905},
	{13052, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13053, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13054, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13055, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13056, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13057, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13058, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13059, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13060, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init905(void);
void Init905(void)
{
	IDSC(desc_905, 0, 904);
	IDSC(desc_905 + 1, 1, 904);
	IDSC(desc_905 + 32, 388, 904);
	IDSC(desc_905 + 34, 195, 904);
}


#ifdef __cplusplus
}
#endif
