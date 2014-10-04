/*
 * Class TEST_CASE
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_2(void);
static EIF_TYPE_INDEX gen_type0_2 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2 [] = {0xFF11,274,0xFF12,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2 [] = {0xFF11,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2 [] = {0xFF11,1,0xFFFF};


static struct desc_info desc_2[32];

static void build_desc_2(void) {
	desc_2[0].body_index = (BODY_INDEX) (-1);
	desc_2[0].offset = (BODY_INDEX) (-1);
	desc_2[0].type = INVALID_DTYPE;
	desc_2[0].gen_type = NULL;
	desc_2[1].body_index = (BODY_INDEX) (0);
	desc_2[1].offset = (BODY_INDEX) (-1);
	desc_2[1].type = (EIF_TYPE_INDEX) (257);
	desc_2[1].gen_type =  gen_type0_2;
	desc_2[2].body_index = (BODY_INDEX) (1);
	desc_2[2].offset = (BODY_INDEX) (-1);
	desc_2[2].type = (EIF_TYPE_INDEX) (274);
	desc_2[2].gen_type =  gen_type1_2;
	desc_2[3].body_index = (BODY_INDEX) (2);
	desc_2[3].offset = (BODY_INDEX) (-1);
	desc_2[3].type = (EIF_TYPE_INDEX) (225);
	desc_2[3].gen_type = NULL;
	desc_2[4].body_index = (BODY_INDEX) (3);
	desc_2[4].offset = (BODY_INDEX) (-1);
	desc_2[4].type = (EIF_TYPE_INDEX) (225);
	desc_2[4].gen_type = NULL;
	desc_2[5].body_index = (BODY_INDEX) (4);
	desc_2[5].offset = (BODY_INDEX) (-1);
	desc_2[5].type = (EIF_TYPE_INDEX) (225);
	desc_2[5].gen_type = NULL;
	desc_2[6].body_index = (BODY_INDEX) (5);
	desc_2[6].offset = (BODY_INDEX) (-1);
	desc_2[6].type = (EIF_TYPE_INDEX) (225);
	desc_2[6].gen_type = NULL;
	desc_2[7].body_index = (BODY_INDEX) (6);
	desc_2[7].offset = (BODY_INDEX) (-1);
	desc_2[7].type = (EIF_TYPE_INDEX) (225);
	desc_2[7].gen_type = NULL;
	desc_2[8].body_index = (BODY_INDEX) (7);
	desc_2[8].offset = (BODY_INDEX) (-1);
	desc_2[8].type = (EIF_TYPE_INDEX) (225);
	desc_2[8].gen_type = NULL;
	desc_2[9].body_index = (BODY_INDEX) (8);
	desc_2[9].offset = (BODY_INDEX) (-1);
	desc_2[9].type = (EIF_TYPE_INDEX) (225);
	desc_2[9].gen_type = NULL;
	desc_2[10].body_index = (BODY_INDEX) (9);
	desc_2[10].offset = (BODY_INDEX) (-1);
	desc_2[10].type = (EIF_TYPE_INDEX) (225);
	desc_2[10].gen_type = NULL;
	desc_2[11].body_index = (BODY_INDEX) (10);
	desc_2[11].offset = (BODY_INDEX) (-1);
	desc_2[11].type = (EIF_TYPE_INDEX) (1);
	desc_2[11].gen_type =  gen_type2_2;
	desc_2[12].body_index = (BODY_INDEX) (11);
	desc_2[12].offset = (BODY_INDEX) (-1);
	desc_2[12].type = (EIF_TYPE_INDEX) (-1);
	desc_2[12].gen_type = NULL;
	desc_2[13].body_index = (BODY_INDEX) (12);
	desc_2[13].offset = (BODY_INDEX) (-1);
	desc_2[13].type = (EIF_TYPE_INDEX) (-1);
	desc_2[13].gen_type = NULL;
	desc_2[14].body_index = (BODY_INDEX) (13);
	desc_2[14].offset = (BODY_INDEX) (-1);
	desc_2[14].type = (EIF_TYPE_INDEX) (0);
	desc_2[14].gen_type =  gen_type3_2;
	desc_2[15].body_index = (BODY_INDEX) (14);
	desc_2[15].offset = (BODY_INDEX) (-1);
	desc_2[15].type = (EIF_TYPE_INDEX) (0);
	desc_2[15].gen_type =  gen_type4_2;
	desc_2[16].body_index = (BODY_INDEX) (15);
	desc_2[16].offset = (BODY_INDEX) (-1);
	desc_2[16].type = (EIF_TYPE_INDEX) (1);
	desc_2[16].gen_type =  gen_type5_2;
	desc_2[17].body_index = (BODY_INDEX) (16);
	desc_2[17].offset = (BODY_INDEX) (-1);
	desc_2[17].type = (EIF_TYPE_INDEX) (1);
	desc_2[17].gen_type =  gen_type6_2;
	desc_2[18].body_index = (BODY_INDEX) (17);
	desc_2[18].offset = (BODY_INDEX) (-1);
	desc_2[18].type = (EIF_TYPE_INDEX) (0);
	desc_2[18].gen_type =  gen_type7_2;
	desc_2[19].body_index = (BODY_INDEX) (18);
	desc_2[19].offset = (BODY_INDEX) (-1);
	desc_2[19].type = (EIF_TYPE_INDEX) (-1);
	desc_2[19].gen_type = NULL;
	desc_2[20].body_index = (BODY_INDEX) (19);
	desc_2[20].offset = (BODY_INDEX) (-1);
	desc_2[20].type = (EIF_TYPE_INDEX) (-1);
	desc_2[20].gen_type = NULL;
	desc_2[21].body_index = (BODY_INDEX) (20);
	desc_2[21].offset = (BODY_INDEX) (-1);
	desc_2[21].type = (EIF_TYPE_INDEX) (18);
	desc_2[21].gen_type =  gen_type8_2;
	desc_2[22].body_index = (BODY_INDEX) (21);
	desc_2[22].offset = (BODY_INDEX) (-1);
	desc_2[22].type = (EIF_TYPE_INDEX) (257);
	desc_2[22].gen_type =  gen_type9_2;
	desc_2[23].body_index = (BODY_INDEX) (22);
	desc_2[23].offset = (BODY_INDEX) (-1);
	desc_2[23].type = (EIF_TYPE_INDEX) (257);
	desc_2[23].gen_type =  gen_type10_2;
	desc_2[24].body_index = (BODY_INDEX) (23);
	desc_2[24].offset = (BODY_INDEX) (-1);
	desc_2[24].type = (EIF_TYPE_INDEX) (-1);
	desc_2[24].gen_type = NULL;
	desc_2[25].body_index = (BODY_INDEX) (24);
	desc_2[25].offset = (BODY_INDEX) (-1);
	desc_2[25].type = (EIF_TYPE_INDEX) (38);
	desc_2[25].gen_type =  gen_type11_2;
	desc_2[26].body_index = (BODY_INDEX) (25);
	desc_2[26].offset = (BODY_INDEX) (-1);
	desc_2[26].type = (EIF_TYPE_INDEX) (-1);
	desc_2[26].gen_type = NULL;
	desc_2[27].body_index = (BODY_INDEX) (26);
	desc_2[27].offset = (BODY_INDEX) (-1);
	desc_2[27].type = (EIF_TYPE_INDEX) (-1);
	desc_2[27].gen_type = NULL;
	desc_2[28].body_index = (BODY_INDEX) (27);
	desc_2[28].offset = (BODY_INDEX) (-1);
	desc_2[28].type = (EIF_TYPE_INDEX) (-1);
	desc_2[28].gen_type = NULL;
	desc_2[29].body_index = (BODY_INDEX) (28);
	desc_2[29].offset = (BODY_INDEX) (-1);
	desc_2[29].type = (EIF_TYPE_INDEX) (1);
	desc_2[29].gen_type = NULL;
	desc_2[30].body_index = (BODY_INDEX) (29);
	desc_2[30].offset = (BODY_INDEX) (-1);
	desc_2[30].type = (EIF_TYPE_INDEX) (252);
	desc_2[30].gen_type = NULL;
	desc_2[31].body_index = (BODY_INDEX) (30);
	desc_2[31].offset = (BODY_INDEX) (-1);
	desc_2[31].type = (EIF_TYPE_INDEX) (1);
	desc_2[31].gen_type =  gen_type12_2;
}

extern void Init2(void);
void Init2(void)
{
	if (desc_fill != 0)
		build_desc_2();
	IDSC(desc_2, 0, 1);
	IDSC(desc_2 + 1, 1, 1);
}


#ifdef __cplusplus
}
#endif
