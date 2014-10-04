/*
 * Class GROUND_SENSOR
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_18(void);
static EIF_TYPE_INDEX gen_type0_18 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_18 [] = {0xFF11,274,0xFF12,17,0xFFFF};
static EIF_TYPE_INDEX gen_type2_18 [] = {0xFF11,17,0xFFFF};
static EIF_TYPE_INDEX gen_type3_18 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_18 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_18 [] = {0xFF11,17,0xFFFF};
static EIF_TYPE_INDEX gen_type6_18 [] = {0xFF11,17,0xFFFF};
static EIF_TYPE_INDEX gen_type7_18 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_18 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_18 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_18 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_18 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_18 [] = {0xFF11,17,0xFFFF};


static struct desc_info desc_18[38];

static void build_desc_18(void) {
	desc_18[0].body_index = (BODY_INDEX) (-1);
	desc_18[0].offset = (BODY_INDEX) (-1);
	desc_18[0].type = INVALID_DTYPE;
	desc_18[0].gen_type = NULL;
	desc_18[1].body_index = (BODY_INDEX) (0);
	desc_18[1].offset = (BODY_INDEX) (-1);
	desc_18[1].type = (EIF_TYPE_INDEX) (257);
	desc_18[1].gen_type =  gen_type0_18;
	desc_18[2].body_index = (BODY_INDEX) (1);
	desc_18[2].offset = (BODY_INDEX) (-1);
	desc_18[2].type = (EIF_TYPE_INDEX) (274);
	desc_18[2].gen_type =  gen_type1_18;
	desc_18[3].body_index = (BODY_INDEX) (2);
	desc_18[3].offset = (BODY_INDEX) (-1);
	desc_18[3].type = (EIF_TYPE_INDEX) (225);
	desc_18[3].gen_type = NULL;
	desc_18[4].body_index = (BODY_INDEX) (3);
	desc_18[4].offset = (BODY_INDEX) (-1);
	desc_18[4].type = (EIF_TYPE_INDEX) (225);
	desc_18[4].gen_type = NULL;
	desc_18[5].body_index = (BODY_INDEX) (4);
	desc_18[5].offset = (BODY_INDEX) (-1);
	desc_18[5].type = (EIF_TYPE_INDEX) (225);
	desc_18[5].gen_type = NULL;
	desc_18[6].body_index = (BODY_INDEX) (5);
	desc_18[6].offset = (BODY_INDEX) (-1);
	desc_18[6].type = (EIF_TYPE_INDEX) (225);
	desc_18[6].gen_type = NULL;
	desc_18[7].body_index = (BODY_INDEX) (6);
	desc_18[7].offset = (BODY_INDEX) (-1);
	desc_18[7].type = (EIF_TYPE_INDEX) (225);
	desc_18[7].gen_type = NULL;
	desc_18[8].body_index = (BODY_INDEX) (7);
	desc_18[8].offset = (BODY_INDEX) (-1);
	desc_18[8].type = (EIF_TYPE_INDEX) (225);
	desc_18[8].gen_type = NULL;
	desc_18[9].body_index = (BODY_INDEX) (8);
	desc_18[9].offset = (BODY_INDEX) (-1);
	desc_18[9].type = (EIF_TYPE_INDEX) (225);
	desc_18[9].gen_type = NULL;
	desc_18[10].body_index = (BODY_INDEX) (9);
	desc_18[10].offset = (BODY_INDEX) (-1);
	desc_18[10].type = (EIF_TYPE_INDEX) (225);
	desc_18[10].gen_type = NULL;
	desc_18[11].body_index = (BODY_INDEX) (10);
	desc_18[11].offset = (BODY_INDEX) (-1);
	desc_18[11].type = (EIF_TYPE_INDEX) (17);
	desc_18[11].gen_type =  gen_type2_18;
	desc_18[12].body_index = (BODY_INDEX) (11);
	desc_18[12].offset = (BODY_INDEX) (-1);
	desc_18[12].type = (EIF_TYPE_INDEX) (-1);
	desc_18[12].gen_type = NULL;
	desc_18[13].body_index = (BODY_INDEX) (12);
	desc_18[13].offset = (BODY_INDEX) (-1);
	desc_18[13].type = (EIF_TYPE_INDEX) (-1);
	desc_18[13].gen_type = NULL;
	desc_18[14].body_index = (BODY_INDEX) (13);
	desc_18[14].offset = (BODY_INDEX) (-1);
	desc_18[14].type = (EIF_TYPE_INDEX) (0);
	desc_18[14].gen_type =  gen_type3_18;
	desc_18[15].body_index = (BODY_INDEX) (14);
	desc_18[15].offset = (BODY_INDEX) (-1);
	desc_18[15].type = (EIF_TYPE_INDEX) (0);
	desc_18[15].gen_type =  gen_type4_18;
	desc_18[16].body_index = (BODY_INDEX) (15);
	desc_18[16].offset = (BODY_INDEX) (-1);
	desc_18[16].type = (EIF_TYPE_INDEX) (17);
	desc_18[16].gen_type =  gen_type5_18;
	desc_18[17].body_index = (BODY_INDEX) (16);
	desc_18[17].offset = (BODY_INDEX) (-1);
	desc_18[17].type = (EIF_TYPE_INDEX) (17);
	desc_18[17].gen_type =  gen_type6_18;
	desc_18[18].body_index = (BODY_INDEX) (17);
	desc_18[18].offset = (BODY_INDEX) (-1);
	desc_18[18].type = (EIF_TYPE_INDEX) (0);
	desc_18[18].gen_type =  gen_type7_18;
	desc_18[19].body_index = (BODY_INDEX) (18);
	desc_18[19].offset = (BODY_INDEX) (-1);
	desc_18[19].type = (EIF_TYPE_INDEX) (-1);
	desc_18[19].gen_type = NULL;
	desc_18[20].body_index = (BODY_INDEX) (19);
	desc_18[20].offset = (BODY_INDEX) (-1);
	desc_18[20].type = (EIF_TYPE_INDEX) (-1);
	desc_18[20].gen_type = NULL;
	desc_18[21].body_index = (BODY_INDEX) (20);
	desc_18[21].offset = (BODY_INDEX) (-1);
	desc_18[21].type = (EIF_TYPE_INDEX) (18);
	desc_18[21].gen_type =  gen_type8_18;
	desc_18[22].body_index = (BODY_INDEX) (21);
	desc_18[22].offset = (BODY_INDEX) (-1);
	desc_18[22].type = (EIF_TYPE_INDEX) (257);
	desc_18[22].gen_type =  gen_type9_18;
	desc_18[23].body_index = (BODY_INDEX) (22);
	desc_18[23].offset = (BODY_INDEX) (-1);
	desc_18[23].type = (EIF_TYPE_INDEX) (257);
	desc_18[23].gen_type =  gen_type10_18;
	desc_18[24].body_index = (BODY_INDEX) (23);
	desc_18[24].offset = (BODY_INDEX) (-1);
	desc_18[24].type = (EIF_TYPE_INDEX) (-1);
	desc_18[24].gen_type = NULL;
	desc_18[25].body_index = (BODY_INDEX) (24);
	desc_18[25].offset = (BODY_INDEX) (-1);
	desc_18[25].type = (EIF_TYPE_INDEX) (38);
	desc_18[25].gen_type =  gen_type11_18;
	desc_18[26].body_index = (BODY_INDEX) (25);
	desc_18[26].offset = (BODY_INDEX) (-1);
	desc_18[26].type = (EIF_TYPE_INDEX) (-1);
	desc_18[26].gen_type = NULL;
	desc_18[27].body_index = (BODY_INDEX) (26);
	desc_18[27].offset = (BODY_INDEX) (-1);
	desc_18[27].type = (EIF_TYPE_INDEX) (-1);
	desc_18[27].gen_type = NULL;
	desc_18[28].body_index = (BODY_INDEX) (27);
	desc_18[28].offset = (BODY_INDEX) (-1);
	desc_18[28].type = (EIF_TYPE_INDEX) (-1);
	desc_18[28].gen_type = NULL;
	desc_18[29].body_index = (BODY_INDEX) (28);
	desc_18[29].offset = (BODY_INDEX) (-1);
	desc_18[29].type = (EIF_TYPE_INDEX) (17);
	desc_18[29].gen_type = NULL;
	desc_18[30].body_index = (BODY_INDEX) (29);
	desc_18[30].offset = (BODY_INDEX) (-1);
	desc_18[30].type = (EIF_TYPE_INDEX) (252);
	desc_18[30].gen_type = NULL;
	desc_18[31].body_index = (BODY_INDEX) (30);
	desc_18[31].offset = (BODY_INDEX) (-1);
	desc_18[31].type = (EIF_TYPE_INDEX) (17);
	desc_18[31].gen_type =  gen_type12_18;
	desc_18[32].body_index = (BODY_INDEX) (240);
	desc_18[32].offset = (BODY_INDEX) (-1);
	desc_18[32].type = (EIF_TYPE_INDEX) (-1);
	desc_18[32].gen_type = NULL;
	desc_18[33].body_index = (BODY_INDEX) (241);
	desc_18[33].offset = (BODY_INDEX) (0);
	desc_18[33].type = (EIF_TYPE_INDEX) (228);
	desc_18[33].gen_type = NULL;
	desc_18[34].body_index = (BODY_INDEX) (242);
	desc_18[34].offset = (BODY_INDEX) (8);
	desc_18[34].type = (EIF_TYPE_INDEX) (228);
	desc_18[34].gen_type = NULL;
	desc_18[35].body_index = (BODY_INDEX) (243);
	desc_18[35].offset = (BODY_INDEX) (-1);
	desc_18[35].type = (EIF_TYPE_INDEX) (225);
	desc_18[35].gen_type = NULL;
	desc_18[36].body_index = (BODY_INDEX) (244);
	desc_18[36].offset = (BODY_INDEX) (-1);
	desc_18[36].type = (EIF_TYPE_INDEX) (-1);
	desc_18[36].gen_type = NULL;
	desc_18[37].body_index = (BODY_INDEX) (245);
	desc_18[37].offset = (BODY_INDEX) (16);
	desc_18[37].type = (EIF_TYPE_INDEX) (228);
	desc_18[37].gen_type = NULL;
}

extern void Init18(void);
void Init18(void)
{
	if (desc_fill != 0)
		build_desc_18();
	IDSC(desc_18, 0, 17);
	IDSC(desc_18 + 1, 1, 17);
	IDSC(desc_18 + 32, 232, 17);
}


#ifdef __cplusplus
}
#endif
