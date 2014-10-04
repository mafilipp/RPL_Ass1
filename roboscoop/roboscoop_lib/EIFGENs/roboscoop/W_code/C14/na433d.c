/*
 * Class NATIVE_ARRAY [BOOLEAN]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_433(void);
static EIF_TYPE_INDEX gen_type0_433 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_433 [] = {0xFF11,274,0xFF12,432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type2_433 [] = {0xFF11,432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type3_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_433 [] = {0xFF11,432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type6_433 [] = {0xFF11,432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type7_433 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_433 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_433 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_433 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_433 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_433 [] = {432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type13_433 [] = {0xFF11,432,225,0xFFFF};
static EIF_TYPE_INDEX gen_type14_433 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_433[33];

static void build_desc_433(void) {
	desc_433[0].body_index = (BODY_INDEX) (47);
	desc_433[0].offset = (BODY_INDEX) (-1);
	desc_433[0].type = INVALID_DTYPE;
	desc_433[0].gen_type = NULL;
	desc_433[1].body_index = (BODY_INDEX) (0);
	desc_433[1].offset = (BODY_INDEX) (-1);
	desc_433[1].type = (EIF_TYPE_INDEX) (257);
	desc_433[1].gen_type =  gen_type0_433;
	desc_433[2].body_index = (BODY_INDEX) (1);
	desc_433[2].offset = (BODY_INDEX) (-1);
	desc_433[2].type = (EIF_TYPE_INDEX) (274);
	desc_433[2].gen_type =  gen_type1_433;
	desc_433[3].body_index = (BODY_INDEX) (2);
	desc_433[3].offset = (BODY_INDEX) (-1);
	desc_433[3].type = (EIF_TYPE_INDEX) (225);
	desc_433[3].gen_type = NULL;
	desc_433[4].body_index = (BODY_INDEX) (3);
	desc_433[4].offset = (BODY_INDEX) (-1);
	desc_433[4].type = (EIF_TYPE_INDEX) (225);
	desc_433[4].gen_type = NULL;
	desc_433[5].body_index = (BODY_INDEX) (4);
	desc_433[5].offset = (BODY_INDEX) (-1);
	desc_433[5].type = (EIF_TYPE_INDEX) (225);
	desc_433[5].gen_type = NULL;
	desc_433[6].body_index = (BODY_INDEX) (5);
	desc_433[6].offset = (BODY_INDEX) (-1);
	desc_433[6].type = (EIF_TYPE_INDEX) (225);
	desc_433[6].gen_type = NULL;
	desc_433[7].body_index = (BODY_INDEX) (6);
	desc_433[7].offset = (BODY_INDEX) (-1);
	desc_433[7].type = (EIF_TYPE_INDEX) (225);
	desc_433[7].gen_type = NULL;
	desc_433[8].body_index = (BODY_INDEX) (7);
	desc_433[8].offset = (BODY_INDEX) (-1);
	desc_433[8].type = (EIF_TYPE_INDEX) (225);
	desc_433[8].gen_type = NULL;
	desc_433[9].body_index = (BODY_INDEX) (8);
	desc_433[9].offset = (BODY_INDEX) (-1);
	desc_433[9].type = (EIF_TYPE_INDEX) (225);
	desc_433[9].gen_type = NULL;
	desc_433[10].body_index = (BODY_INDEX) (9);
	desc_433[10].offset = (BODY_INDEX) (-1);
	desc_433[10].type = (EIF_TYPE_INDEX) (225);
	desc_433[10].gen_type = NULL;
	desc_433[11].body_index = (BODY_INDEX) (10);
	desc_433[11].offset = (BODY_INDEX) (-1);
	desc_433[11].type = (EIF_TYPE_INDEX) (432);
	desc_433[11].gen_type =  gen_type2_433;
	desc_433[12].body_index = (BODY_INDEX) (11);
	desc_433[12].offset = (BODY_INDEX) (-1);
	desc_433[12].type = (EIF_TYPE_INDEX) (-1);
	desc_433[12].gen_type = NULL;
	desc_433[13].body_index = (BODY_INDEX) (12);
	desc_433[13].offset = (BODY_INDEX) (-1);
	desc_433[13].type = (EIF_TYPE_INDEX) (-1);
	desc_433[13].gen_type = NULL;
	desc_433[14].body_index = (BODY_INDEX) (13);
	desc_433[14].offset = (BODY_INDEX) (-1);
	desc_433[14].type = (EIF_TYPE_INDEX) (0);
	desc_433[14].gen_type =  gen_type3_433;
	desc_433[15].body_index = (BODY_INDEX) (14);
	desc_433[15].offset = (BODY_INDEX) (-1);
	desc_433[15].type = (EIF_TYPE_INDEX) (0);
	desc_433[15].gen_type =  gen_type4_433;
	desc_433[16].body_index = (BODY_INDEX) (15);
	desc_433[16].offset = (BODY_INDEX) (-1);
	desc_433[16].type = (EIF_TYPE_INDEX) (432);
	desc_433[16].gen_type =  gen_type5_433;
	desc_433[17].body_index = (BODY_INDEX) (16);
	desc_433[17].offset = (BODY_INDEX) (-1);
	desc_433[17].type = (EIF_TYPE_INDEX) (432);
	desc_433[17].gen_type =  gen_type6_433;
	desc_433[18].body_index = (BODY_INDEX) (17);
	desc_433[18].offset = (BODY_INDEX) (-1);
	desc_433[18].type = (EIF_TYPE_INDEX) (0);
	desc_433[18].gen_type =  gen_type7_433;
	desc_433[19].body_index = (BODY_INDEX) (18);
	desc_433[19].offset = (BODY_INDEX) (-1);
	desc_433[19].type = (EIF_TYPE_INDEX) (-1);
	desc_433[19].gen_type = NULL;
	desc_433[20].body_index = (BODY_INDEX) (19);
	desc_433[20].offset = (BODY_INDEX) (-1);
	desc_433[20].type = (EIF_TYPE_INDEX) (-1);
	desc_433[20].gen_type = NULL;
	desc_433[21].body_index = (BODY_INDEX) (20);
	desc_433[21].offset = (BODY_INDEX) (-1);
	desc_433[21].type = (EIF_TYPE_INDEX) (18);
	desc_433[21].gen_type =  gen_type8_433;
	desc_433[22].body_index = (BODY_INDEX) (21);
	desc_433[22].offset = (BODY_INDEX) (-1);
	desc_433[22].type = (EIF_TYPE_INDEX) (257);
	desc_433[22].gen_type =  gen_type9_433;
	desc_433[23].body_index = (BODY_INDEX) (22);
	desc_433[23].offset = (BODY_INDEX) (-1);
	desc_433[23].type = (EIF_TYPE_INDEX) (257);
	desc_433[23].gen_type =  gen_type10_433;
	desc_433[24].body_index = (BODY_INDEX) (23);
	desc_433[24].offset = (BODY_INDEX) (-1);
	desc_433[24].type = (EIF_TYPE_INDEX) (-1);
	desc_433[24].gen_type = NULL;
	desc_433[25].body_index = (BODY_INDEX) (24);
	desc_433[25].offset = (BODY_INDEX) (-1);
	desc_433[25].type = (EIF_TYPE_INDEX) (38);
	desc_433[25].gen_type =  gen_type11_433;
	desc_433[26].body_index = (BODY_INDEX) (25);
	desc_433[26].offset = (BODY_INDEX) (-1);
	desc_433[26].type = (EIF_TYPE_INDEX) (-1);
	desc_433[26].gen_type = NULL;
	desc_433[27].body_index = (BODY_INDEX) (26);
	desc_433[27].offset = (BODY_INDEX) (-1);
	desc_433[27].type = (EIF_TYPE_INDEX) (-1);
	desc_433[27].gen_type = NULL;
	desc_433[28].body_index = (BODY_INDEX) (27);
	desc_433[28].offset = (BODY_INDEX) (-1);
	desc_433[28].type = (EIF_TYPE_INDEX) (-1);
	desc_433[28].gen_type = NULL;
	desc_433[29].body_index = (BODY_INDEX) (28);
	desc_433[29].offset = (BODY_INDEX) (-1);
	desc_433[29].type = (EIF_TYPE_INDEX) (432);
	desc_433[29].gen_type =  gen_type12_433;
	desc_433[30].body_index = (BODY_INDEX) (29);
	desc_433[30].offset = (BODY_INDEX) (-1);
	desc_433[30].type = (EIF_TYPE_INDEX) (252);
	desc_433[30].gen_type = NULL;
	desc_433[31].body_index = (BODY_INDEX) (30);
	desc_433[31].offset = (BODY_INDEX) (-1);
	desc_433[31].type = (EIF_TYPE_INDEX) (432);
	desc_433[31].gen_type =  gen_type13_433;
	desc_433[32].body_index = (BODY_INDEX) (-1);
	desc_433[32].offset = (BODY_INDEX) (-1);
	desc_433[32].type = (EIF_TYPE_INDEX) (-1);
	desc_433[32].gen_type =  gen_type14_433;
}

extern void Init433(void);
void Init433(void)
{
	if (desc_fill != 0)
		build_desc_433();
	IDSC(desc_433, 0, 432);
	IDSC(desc_433 + 1, 1, 432);
	IDSC(desc_433 + 32, 326, 432);
}


#ifdef __cplusplus
}
#endif
