/*
 * Class RANGE_SENSOR
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_17(void);
static EIF_TYPE_INDEX gen_type0_17 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_17 [] = {0xFF11,274,0xFF12,16,0xFFFF};
static EIF_TYPE_INDEX gen_type2_17 [] = {0xFF11,16,0xFFFF};
static EIF_TYPE_INDEX gen_type3_17 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_17 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_17 [] = {0xFF11,16,0xFFFF};
static EIF_TYPE_INDEX gen_type6_17 [] = {0xFF11,16,0xFFFF};
static EIF_TYPE_INDEX gen_type7_17 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_17 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_17 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_17 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_17 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_17 [] = {0xFF11,16,0xFFFF};


static struct desc_info desc_17[38];

static void build_desc_17(void) {
	desc_17[0].body_index = (BODY_INDEX) (-1);
	desc_17[0].offset = (BODY_INDEX) (-1);
	desc_17[0].type = INVALID_DTYPE;
	desc_17[0].gen_type = NULL;
	desc_17[1].body_index = (BODY_INDEX) (0);
	desc_17[1].offset = (BODY_INDEX) (-1);
	desc_17[1].type = (EIF_TYPE_INDEX) (257);
	desc_17[1].gen_type =  gen_type0_17;
	desc_17[2].body_index = (BODY_INDEX) (1);
	desc_17[2].offset = (BODY_INDEX) (-1);
	desc_17[2].type = (EIF_TYPE_INDEX) (274);
	desc_17[2].gen_type =  gen_type1_17;
	desc_17[3].body_index = (BODY_INDEX) (2);
	desc_17[3].offset = (BODY_INDEX) (-1);
	desc_17[3].type = (EIF_TYPE_INDEX) (225);
	desc_17[3].gen_type = NULL;
	desc_17[4].body_index = (BODY_INDEX) (3);
	desc_17[4].offset = (BODY_INDEX) (-1);
	desc_17[4].type = (EIF_TYPE_INDEX) (225);
	desc_17[4].gen_type = NULL;
	desc_17[5].body_index = (BODY_INDEX) (4);
	desc_17[5].offset = (BODY_INDEX) (-1);
	desc_17[5].type = (EIF_TYPE_INDEX) (225);
	desc_17[5].gen_type = NULL;
	desc_17[6].body_index = (BODY_INDEX) (5);
	desc_17[6].offset = (BODY_INDEX) (-1);
	desc_17[6].type = (EIF_TYPE_INDEX) (225);
	desc_17[6].gen_type = NULL;
	desc_17[7].body_index = (BODY_INDEX) (6);
	desc_17[7].offset = (BODY_INDEX) (-1);
	desc_17[7].type = (EIF_TYPE_INDEX) (225);
	desc_17[7].gen_type = NULL;
	desc_17[8].body_index = (BODY_INDEX) (7);
	desc_17[8].offset = (BODY_INDEX) (-1);
	desc_17[8].type = (EIF_TYPE_INDEX) (225);
	desc_17[8].gen_type = NULL;
	desc_17[9].body_index = (BODY_INDEX) (8);
	desc_17[9].offset = (BODY_INDEX) (-1);
	desc_17[9].type = (EIF_TYPE_INDEX) (225);
	desc_17[9].gen_type = NULL;
	desc_17[10].body_index = (BODY_INDEX) (9);
	desc_17[10].offset = (BODY_INDEX) (-1);
	desc_17[10].type = (EIF_TYPE_INDEX) (225);
	desc_17[10].gen_type = NULL;
	desc_17[11].body_index = (BODY_INDEX) (10);
	desc_17[11].offset = (BODY_INDEX) (-1);
	desc_17[11].type = (EIF_TYPE_INDEX) (16);
	desc_17[11].gen_type =  gen_type2_17;
	desc_17[12].body_index = (BODY_INDEX) (11);
	desc_17[12].offset = (BODY_INDEX) (-1);
	desc_17[12].type = (EIF_TYPE_INDEX) (-1);
	desc_17[12].gen_type = NULL;
	desc_17[13].body_index = (BODY_INDEX) (12);
	desc_17[13].offset = (BODY_INDEX) (-1);
	desc_17[13].type = (EIF_TYPE_INDEX) (-1);
	desc_17[13].gen_type = NULL;
	desc_17[14].body_index = (BODY_INDEX) (13);
	desc_17[14].offset = (BODY_INDEX) (-1);
	desc_17[14].type = (EIF_TYPE_INDEX) (0);
	desc_17[14].gen_type =  gen_type3_17;
	desc_17[15].body_index = (BODY_INDEX) (14);
	desc_17[15].offset = (BODY_INDEX) (-1);
	desc_17[15].type = (EIF_TYPE_INDEX) (0);
	desc_17[15].gen_type =  gen_type4_17;
	desc_17[16].body_index = (BODY_INDEX) (15);
	desc_17[16].offset = (BODY_INDEX) (-1);
	desc_17[16].type = (EIF_TYPE_INDEX) (16);
	desc_17[16].gen_type =  gen_type5_17;
	desc_17[17].body_index = (BODY_INDEX) (16);
	desc_17[17].offset = (BODY_INDEX) (-1);
	desc_17[17].type = (EIF_TYPE_INDEX) (16);
	desc_17[17].gen_type =  gen_type6_17;
	desc_17[18].body_index = (BODY_INDEX) (17);
	desc_17[18].offset = (BODY_INDEX) (-1);
	desc_17[18].type = (EIF_TYPE_INDEX) (0);
	desc_17[18].gen_type =  gen_type7_17;
	desc_17[19].body_index = (BODY_INDEX) (18);
	desc_17[19].offset = (BODY_INDEX) (-1);
	desc_17[19].type = (EIF_TYPE_INDEX) (-1);
	desc_17[19].gen_type = NULL;
	desc_17[20].body_index = (BODY_INDEX) (19);
	desc_17[20].offset = (BODY_INDEX) (-1);
	desc_17[20].type = (EIF_TYPE_INDEX) (-1);
	desc_17[20].gen_type = NULL;
	desc_17[21].body_index = (BODY_INDEX) (20);
	desc_17[21].offset = (BODY_INDEX) (-1);
	desc_17[21].type = (EIF_TYPE_INDEX) (18);
	desc_17[21].gen_type =  gen_type8_17;
	desc_17[22].body_index = (BODY_INDEX) (21);
	desc_17[22].offset = (BODY_INDEX) (-1);
	desc_17[22].type = (EIF_TYPE_INDEX) (257);
	desc_17[22].gen_type =  gen_type9_17;
	desc_17[23].body_index = (BODY_INDEX) (22);
	desc_17[23].offset = (BODY_INDEX) (-1);
	desc_17[23].type = (EIF_TYPE_INDEX) (257);
	desc_17[23].gen_type =  gen_type10_17;
	desc_17[24].body_index = (BODY_INDEX) (23);
	desc_17[24].offset = (BODY_INDEX) (-1);
	desc_17[24].type = (EIF_TYPE_INDEX) (-1);
	desc_17[24].gen_type = NULL;
	desc_17[25].body_index = (BODY_INDEX) (24);
	desc_17[25].offset = (BODY_INDEX) (-1);
	desc_17[25].type = (EIF_TYPE_INDEX) (38);
	desc_17[25].gen_type =  gen_type11_17;
	desc_17[26].body_index = (BODY_INDEX) (25);
	desc_17[26].offset = (BODY_INDEX) (-1);
	desc_17[26].type = (EIF_TYPE_INDEX) (-1);
	desc_17[26].gen_type = NULL;
	desc_17[27].body_index = (BODY_INDEX) (26);
	desc_17[27].offset = (BODY_INDEX) (-1);
	desc_17[27].type = (EIF_TYPE_INDEX) (-1);
	desc_17[27].gen_type = NULL;
	desc_17[28].body_index = (BODY_INDEX) (27);
	desc_17[28].offset = (BODY_INDEX) (-1);
	desc_17[28].type = (EIF_TYPE_INDEX) (-1);
	desc_17[28].gen_type = NULL;
	desc_17[29].body_index = (BODY_INDEX) (28);
	desc_17[29].offset = (BODY_INDEX) (-1);
	desc_17[29].type = (EIF_TYPE_INDEX) (16);
	desc_17[29].gen_type = NULL;
	desc_17[30].body_index = (BODY_INDEX) (29);
	desc_17[30].offset = (BODY_INDEX) (-1);
	desc_17[30].type = (EIF_TYPE_INDEX) (252);
	desc_17[30].gen_type = NULL;
	desc_17[31].body_index = (BODY_INDEX) (30);
	desc_17[31].offset = (BODY_INDEX) (-1);
	desc_17[31].type = (EIF_TYPE_INDEX) (16);
	desc_17[31].gen_type =  gen_type12_17;
	desc_17[32].body_index = (BODY_INDEX) (234);
	desc_17[32].offset = (BODY_INDEX) (-1);
	desc_17[32].type = (EIF_TYPE_INDEX) (-1);
	desc_17[32].gen_type = NULL;
	desc_17[33].body_index = (BODY_INDEX) (235);
	desc_17[33].offset = (BODY_INDEX) (0);
	desc_17[33].type = (EIF_TYPE_INDEX) (228);
	desc_17[33].gen_type = NULL;
	desc_17[34].body_index = (BODY_INDEX) (236);
	desc_17[34].offset = (BODY_INDEX) (8);
	desc_17[34].type = (EIF_TYPE_INDEX) (228);
	desc_17[34].gen_type = NULL;
	desc_17[35].body_index = (BODY_INDEX) (237);
	desc_17[35].offset = (BODY_INDEX) (16);
	desc_17[35].type = (EIF_TYPE_INDEX) (228);
	desc_17[35].gen_type = NULL;
	desc_17[36].body_index = (BODY_INDEX) (238);
	desc_17[36].offset = (BODY_INDEX) (-1);
	desc_17[36].type = (EIF_TYPE_INDEX) (-1);
	desc_17[36].gen_type = NULL;
	desc_17[37].body_index = (BODY_INDEX) (239);
	desc_17[37].offset = (BODY_INDEX) (-1);
	desc_17[37].type = (EIF_TYPE_INDEX) (225);
	desc_17[37].gen_type = NULL;
}

extern void Init17(void);
void Init17(void)
{
	if (desc_fill != 0)
		build_desc_17();
	IDSC(desc_17, 0, 16);
	IDSC(desc_17 + 1, 1, 16);
	IDSC(desc_17 + 32, 241, 16);
}


#ifdef __cplusplus
}
#endif
