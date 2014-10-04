/*
 * Class GROUND_SENSOR_GROUP
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_24(void);
static EIF_TYPE_INDEX gen_type0_24 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_24 [] = {0xFF11,274,0xFF12,23,0xFFFF};
static EIF_TYPE_INDEX gen_type2_24 [] = {0xFF11,23,0xFFFF};
static EIF_TYPE_INDEX gen_type3_24 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_24 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_24 [] = {0xFF11,23,0xFFFF};
static EIF_TYPE_INDEX gen_type6_24 [] = {0xFF11,23,0xFFFF};
static EIF_TYPE_INDEX gen_type7_24 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_24 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_24 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_24 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_24 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_24 [] = {0xFF11,23,0xFFFF};
static EIF_TYPE_INDEX gen_type13_24 [] = {0xFF11,286,0xFF11,17,0xFFFF};


static struct desc_info desc_24[36];

static void build_desc_24(void) {
	desc_24[0].body_index = (BODY_INDEX) (-1);
	desc_24[0].offset = (BODY_INDEX) (-1);
	desc_24[0].type = INVALID_DTYPE;
	desc_24[0].gen_type = NULL;
	desc_24[1].body_index = (BODY_INDEX) (0);
	desc_24[1].offset = (BODY_INDEX) (-1);
	desc_24[1].type = (EIF_TYPE_INDEX) (257);
	desc_24[1].gen_type =  gen_type0_24;
	desc_24[2].body_index = (BODY_INDEX) (1);
	desc_24[2].offset = (BODY_INDEX) (-1);
	desc_24[2].type = (EIF_TYPE_INDEX) (274);
	desc_24[2].gen_type =  gen_type1_24;
	desc_24[3].body_index = (BODY_INDEX) (2);
	desc_24[3].offset = (BODY_INDEX) (-1);
	desc_24[3].type = (EIF_TYPE_INDEX) (225);
	desc_24[3].gen_type = NULL;
	desc_24[4].body_index = (BODY_INDEX) (3);
	desc_24[4].offset = (BODY_INDEX) (-1);
	desc_24[4].type = (EIF_TYPE_INDEX) (225);
	desc_24[4].gen_type = NULL;
	desc_24[5].body_index = (BODY_INDEX) (4);
	desc_24[5].offset = (BODY_INDEX) (-1);
	desc_24[5].type = (EIF_TYPE_INDEX) (225);
	desc_24[5].gen_type = NULL;
	desc_24[6].body_index = (BODY_INDEX) (5);
	desc_24[6].offset = (BODY_INDEX) (-1);
	desc_24[6].type = (EIF_TYPE_INDEX) (225);
	desc_24[6].gen_type = NULL;
	desc_24[7].body_index = (BODY_INDEX) (6);
	desc_24[7].offset = (BODY_INDEX) (-1);
	desc_24[7].type = (EIF_TYPE_INDEX) (225);
	desc_24[7].gen_type = NULL;
	desc_24[8].body_index = (BODY_INDEX) (7);
	desc_24[8].offset = (BODY_INDEX) (-1);
	desc_24[8].type = (EIF_TYPE_INDEX) (225);
	desc_24[8].gen_type = NULL;
	desc_24[9].body_index = (BODY_INDEX) (8);
	desc_24[9].offset = (BODY_INDEX) (-1);
	desc_24[9].type = (EIF_TYPE_INDEX) (225);
	desc_24[9].gen_type = NULL;
	desc_24[10].body_index = (BODY_INDEX) (9);
	desc_24[10].offset = (BODY_INDEX) (-1);
	desc_24[10].type = (EIF_TYPE_INDEX) (225);
	desc_24[10].gen_type = NULL;
	desc_24[11].body_index = (BODY_INDEX) (10);
	desc_24[11].offset = (BODY_INDEX) (-1);
	desc_24[11].type = (EIF_TYPE_INDEX) (23);
	desc_24[11].gen_type =  gen_type2_24;
	desc_24[12].body_index = (BODY_INDEX) (11);
	desc_24[12].offset = (BODY_INDEX) (-1);
	desc_24[12].type = (EIF_TYPE_INDEX) (-1);
	desc_24[12].gen_type = NULL;
	desc_24[13].body_index = (BODY_INDEX) (12);
	desc_24[13].offset = (BODY_INDEX) (-1);
	desc_24[13].type = (EIF_TYPE_INDEX) (-1);
	desc_24[13].gen_type = NULL;
	desc_24[14].body_index = (BODY_INDEX) (13);
	desc_24[14].offset = (BODY_INDEX) (-1);
	desc_24[14].type = (EIF_TYPE_INDEX) (0);
	desc_24[14].gen_type =  gen_type3_24;
	desc_24[15].body_index = (BODY_INDEX) (14);
	desc_24[15].offset = (BODY_INDEX) (-1);
	desc_24[15].type = (EIF_TYPE_INDEX) (0);
	desc_24[15].gen_type =  gen_type4_24;
	desc_24[16].body_index = (BODY_INDEX) (15);
	desc_24[16].offset = (BODY_INDEX) (-1);
	desc_24[16].type = (EIF_TYPE_INDEX) (23);
	desc_24[16].gen_type =  gen_type5_24;
	desc_24[17].body_index = (BODY_INDEX) (16);
	desc_24[17].offset = (BODY_INDEX) (-1);
	desc_24[17].type = (EIF_TYPE_INDEX) (23);
	desc_24[17].gen_type =  gen_type6_24;
	desc_24[18].body_index = (BODY_INDEX) (17);
	desc_24[18].offset = (BODY_INDEX) (-1);
	desc_24[18].type = (EIF_TYPE_INDEX) (0);
	desc_24[18].gen_type =  gen_type7_24;
	desc_24[19].body_index = (BODY_INDEX) (18);
	desc_24[19].offset = (BODY_INDEX) (-1);
	desc_24[19].type = (EIF_TYPE_INDEX) (-1);
	desc_24[19].gen_type = NULL;
	desc_24[20].body_index = (BODY_INDEX) (19);
	desc_24[20].offset = (BODY_INDEX) (-1);
	desc_24[20].type = (EIF_TYPE_INDEX) (-1);
	desc_24[20].gen_type = NULL;
	desc_24[21].body_index = (BODY_INDEX) (20);
	desc_24[21].offset = (BODY_INDEX) (-1);
	desc_24[21].type = (EIF_TYPE_INDEX) (18);
	desc_24[21].gen_type =  gen_type8_24;
	desc_24[22].body_index = (BODY_INDEX) (21);
	desc_24[22].offset = (BODY_INDEX) (-1);
	desc_24[22].type = (EIF_TYPE_INDEX) (257);
	desc_24[22].gen_type =  gen_type9_24;
	desc_24[23].body_index = (BODY_INDEX) (22);
	desc_24[23].offset = (BODY_INDEX) (-1);
	desc_24[23].type = (EIF_TYPE_INDEX) (257);
	desc_24[23].gen_type =  gen_type10_24;
	desc_24[24].body_index = (BODY_INDEX) (23);
	desc_24[24].offset = (BODY_INDEX) (-1);
	desc_24[24].type = (EIF_TYPE_INDEX) (-1);
	desc_24[24].gen_type = NULL;
	desc_24[25].body_index = (BODY_INDEX) (24);
	desc_24[25].offset = (BODY_INDEX) (-1);
	desc_24[25].type = (EIF_TYPE_INDEX) (38);
	desc_24[25].gen_type =  gen_type11_24;
	desc_24[26].body_index = (BODY_INDEX) (25);
	desc_24[26].offset = (BODY_INDEX) (-1);
	desc_24[26].type = (EIF_TYPE_INDEX) (-1);
	desc_24[26].gen_type = NULL;
	desc_24[27].body_index = (BODY_INDEX) (26);
	desc_24[27].offset = (BODY_INDEX) (-1);
	desc_24[27].type = (EIF_TYPE_INDEX) (-1);
	desc_24[27].gen_type = NULL;
	desc_24[28].body_index = (BODY_INDEX) (27);
	desc_24[28].offset = (BODY_INDEX) (-1);
	desc_24[28].type = (EIF_TYPE_INDEX) (-1);
	desc_24[28].gen_type = NULL;
	desc_24[29].body_index = (BODY_INDEX) (28);
	desc_24[29].offset = (BODY_INDEX) (-1);
	desc_24[29].type = (EIF_TYPE_INDEX) (23);
	desc_24[29].gen_type = NULL;
	desc_24[30].body_index = (BODY_INDEX) (29);
	desc_24[30].offset = (BODY_INDEX) (-1);
	desc_24[30].type = (EIF_TYPE_INDEX) (252);
	desc_24[30].gen_type = NULL;
	desc_24[31].body_index = (BODY_INDEX) (30);
	desc_24[31].offset = (BODY_INDEX) (-1);
	desc_24[31].type = (EIF_TYPE_INDEX) (23);
	desc_24[31].gen_type =  gen_type12_24;
	desc_24[32].body_index = (BODY_INDEX) (-1);
	desc_24[32].offset = (BODY_INDEX) (-1);
	desc_24[32].type = (EIF_TYPE_INDEX) (-1);
	desc_24[32].gen_type = NULL;
	desc_24[33].body_index = (BODY_INDEX) (392);
	desc_24[33].offset = (BODY_INDEX) (0);
	desc_24[33].type = (EIF_TYPE_INDEX) (286);
	desc_24[33].gen_type =  gen_type13_24;
	desc_24[34].body_index = (BODY_INDEX) (393);
	desc_24[34].offset = (BODY_INDEX) (8);
	desc_24[34].type = (EIF_TYPE_INDEX) (225);
	desc_24[34].gen_type = NULL;
	desc_24[35].body_index = (BODY_INDEX) (394);
	desc_24[35].offset = (BODY_INDEX) (-1);
	desc_24[35].type = (EIF_TYPE_INDEX) (-1);
	desc_24[35].gen_type = NULL;
}

extern void Init24(void);
void Init24(void)
{
	if (desc_fill != 0)
		build_desc_24();
	IDSC(desc_24, 0, 23);
	IDSC(desc_24 + 1, 1, 23);
	IDSC(desc_24 + 32, 185, 23);
}


#ifdef __cplusplus
}
#endif
