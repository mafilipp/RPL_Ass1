/*
 * Class RANGE_SENSOR_GROUP
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_32(void);
static EIF_TYPE_INDEX gen_type0_32 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_32 [] = {0xFF11,274,0xFF12,31,0xFFFF};
static EIF_TYPE_INDEX gen_type2_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type3_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type6_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type7_32 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_32 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_32 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_32 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_32 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_32 [] = {0xFF11,31,0xFFFF};
static EIF_TYPE_INDEX gen_type13_32 [] = {0xFF11,286,0xFF11,16,0xFFFF};


static struct desc_info desc_32[49];

static void build_desc_32(void) {
	desc_32[0].body_index = (BODY_INDEX) (-1);
	desc_32[0].offset = (BODY_INDEX) (-1);
	desc_32[0].type = INVALID_DTYPE;
	desc_32[0].gen_type = NULL;
	desc_32[1].body_index = (BODY_INDEX) (0);
	desc_32[1].offset = (BODY_INDEX) (-1);
	desc_32[1].type = (EIF_TYPE_INDEX) (257);
	desc_32[1].gen_type =  gen_type0_32;
	desc_32[2].body_index = (BODY_INDEX) (1);
	desc_32[2].offset = (BODY_INDEX) (-1);
	desc_32[2].type = (EIF_TYPE_INDEX) (274);
	desc_32[2].gen_type =  gen_type1_32;
	desc_32[3].body_index = (BODY_INDEX) (2);
	desc_32[3].offset = (BODY_INDEX) (-1);
	desc_32[3].type = (EIF_TYPE_INDEX) (225);
	desc_32[3].gen_type = NULL;
	desc_32[4].body_index = (BODY_INDEX) (3);
	desc_32[4].offset = (BODY_INDEX) (-1);
	desc_32[4].type = (EIF_TYPE_INDEX) (225);
	desc_32[4].gen_type = NULL;
	desc_32[5].body_index = (BODY_INDEX) (4);
	desc_32[5].offset = (BODY_INDEX) (-1);
	desc_32[5].type = (EIF_TYPE_INDEX) (225);
	desc_32[5].gen_type = NULL;
	desc_32[6].body_index = (BODY_INDEX) (5);
	desc_32[6].offset = (BODY_INDEX) (-1);
	desc_32[6].type = (EIF_TYPE_INDEX) (225);
	desc_32[6].gen_type = NULL;
	desc_32[7].body_index = (BODY_INDEX) (6);
	desc_32[7].offset = (BODY_INDEX) (-1);
	desc_32[7].type = (EIF_TYPE_INDEX) (225);
	desc_32[7].gen_type = NULL;
	desc_32[8].body_index = (BODY_INDEX) (7);
	desc_32[8].offset = (BODY_INDEX) (-1);
	desc_32[8].type = (EIF_TYPE_INDEX) (225);
	desc_32[8].gen_type = NULL;
	desc_32[9].body_index = (BODY_INDEX) (8);
	desc_32[9].offset = (BODY_INDEX) (-1);
	desc_32[9].type = (EIF_TYPE_INDEX) (225);
	desc_32[9].gen_type = NULL;
	desc_32[10].body_index = (BODY_INDEX) (9);
	desc_32[10].offset = (BODY_INDEX) (-1);
	desc_32[10].type = (EIF_TYPE_INDEX) (225);
	desc_32[10].gen_type = NULL;
	desc_32[11].body_index = (BODY_INDEX) (10);
	desc_32[11].offset = (BODY_INDEX) (-1);
	desc_32[11].type = (EIF_TYPE_INDEX) (31);
	desc_32[11].gen_type =  gen_type2_32;
	desc_32[12].body_index = (BODY_INDEX) (11);
	desc_32[12].offset = (BODY_INDEX) (-1);
	desc_32[12].type = (EIF_TYPE_INDEX) (-1);
	desc_32[12].gen_type = NULL;
	desc_32[13].body_index = (BODY_INDEX) (12);
	desc_32[13].offset = (BODY_INDEX) (-1);
	desc_32[13].type = (EIF_TYPE_INDEX) (-1);
	desc_32[13].gen_type = NULL;
	desc_32[14].body_index = (BODY_INDEX) (13);
	desc_32[14].offset = (BODY_INDEX) (-1);
	desc_32[14].type = (EIF_TYPE_INDEX) (0);
	desc_32[14].gen_type =  gen_type3_32;
	desc_32[15].body_index = (BODY_INDEX) (14);
	desc_32[15].offset = (BODY_INDEX) (-1);
	desc_32[15].type = (EIF_TYPE_INDEX) (0);
	desc_32[15].gen_type =  gen_type4_32;
	desc_32[16].body_index = (BODY_INDEX) (15);
	desc_32[16].offset = (BODY_INDEX) (-1);
	desc_32[16].type = (EIF_TYPE_INDEX) (31);
	desc_32[16].gen_type =  gen_type5_32;
	desc_32[17].body_index = (BODY_INDEX) (16);
	desc_32[17].offset = (BODY_INDEX) (-1);
	desc_32[17].type = (EIF_TYPE_INDEX) (31);
	desc_32[17].gen_type =  gen_type6_32;
	desc_32[18].body_index = (BODY_INDEX) (17);
	desc_32[18].offset = (BODY_INDEX) (-1);
	desc_32[18].type = (EIF_TYPE_INDEX) (0);
	desc_32[18].gen_type =  gen_type7_32;
	desc_32[19].body_index = (BODY_INDEX) (18);
	desc_32[19].offset = (BODY_INDEX) (-1);
	desc_32[19].type = (EIF_TYPE_INDEX) (-1);
	desc_32[19].gen_type = NULL;
	desc_32[20].body_index = (BODY_INDEX) (19);
	desc_32[20].offset = (BODY_INDEX) (-1);
	desc_32[20].type = (EIF_TYPE_INDEX) (-1);
	desc_32[20].gen_type = NULL;
	desc_32[21].body_index = (BODY_INDEX) (20);
	desc_32[21].offset = (BODY_INDEX) (-1);
	desc_32[21].type = (EIF_TYPE_INDEX) (18);
	desc_32[21].gen_type =  gen_type8_32;
	desc_32[22].body_index = (BODY_INDEX) (21);
	desc_32[22].offset = (BODY_INDEX) (-1);
	desc_32[22].type = (EIF_TYPE_INDEX) (257);
	desc_32[22].gen_type =  gen_type9_32;
	desc_32[23].body_index = (BODY_INDEX) (22);
	desc_32[23].offset = (BODY_INDEX) (-1);
	desc_32[23].type = (EIF_TYPE_INDEX) (257);
	desc_32[23].gen_type =  gen_type10_32;
	desc_32[24].body_index = (BODY_INDEX) (23);
	desc_32[24].offset = (BODY_INDEX) (-1);
	desc_32[24].type = (EIF_TYPE_INDEX) (-1);
	desc_32[24].gen_type = NULL;
	desc_32[25].body_index = (BODY_INDEX) (24);
	desc_32[25].offset = (BODY_INDEX) (-1);
	desc_32[25].type = (EIF_TYPE_INDEX) (38);
	desc_32[25].gen_type =  gen_type11_32;
	desc_32[26].body_index = (BODY_INDEX) (25);
	desc_32[26].offset = (BODY_INDEX) (-1);
	desc_32[26].type = (EIF_TYPE_INDEX) (-1);
	desc_32[26].gen_type = NULL;
	desc_32[27].body_index = (BODY_INDEX) (26);
	desc_32[27].offset = (BODY_INDEX) (-1);
	desc_32[27].type = (EIF_TYPE_INDEX) (-1);
	desc_32[27].gen_type = NULL;
	desc_32[28].body_index = (BODY_INDEX) (27);
	desc_32[28].offset = (BODY_INDEX) (-1);
	desc_32[28].type = (EIF_TYPE_INDEX) (-1);
	desc_32[28].gen_type = NULL;
	desc_32[29].body_index = (BODY_INDEX) (28);
	desc_32[29].offset = (BODY_INDEX) (-1);
	desc_32[29].type = (EIF_TYPE_INDEX) (31);
	desc_32[29].gen_type = NULL;
	desc_32[30].body_index = (BODY_INDEX) (29);
	desc_32[30].offset = (BODY_INDEX) (-1);
	desc_32[30].type = (EIF_TYPE_INDEX) (252);
	desc_32[30].gen_type = NULL;
	desc_32[31].body_index = (BODY_INDEX) (30);
	desc_32[31].offset = (BODY_INDEX) (-1);
	desc_32[31].type = (EIF_TYPE_INDEX) (31);
	desc_32[31].gen_type =  gen_type12_32;
	desc_32[32].body_index = (BODY_INDEX) (-1);
	desc_32[32].offset = (BODY_INDEX) (-1);
	desc_32[32].type = (EIF_TYPE_INDEX) (-1);
	desc_32[32].gen_type = NULL;
	desc_32[33].body_index = (BODY_INDEX) (437);
	desc_32[33].offset = (BODY_INDEX) (0);
	desc_32[33].type = (EIF_TYPE_INDEX) (286);
	desc_32[33].gen_type =  gen_type13_32;
	desc_32[34].body_index = (BODY_INDEX) (438);
	desc_32[34].offset = (BODY_INDEX) (8);
	desc_32[34].type = (EIF_TYPE_INDEX) (225);
	desc_32[34].gen_type = NULL;
	desc_32[35].body_index = (BODY_INDEX) (439);
	desc_32[35].offset = (BODY_INDEX) (9);
	desc_32[35].type = (EIF_TYPE_INDEX) (225);
	desc_32[35].gen_type = NULL;
	desc_32[36].body_index = (BODY_INDEX) (440);
	desc_32[36].offset = (BODY_INDEX) (10);
	desc_32[36].type = (EIF_TYPE_INDEX) (225);
	desc_32[36].gen_type = NULL;
	desc_32[37].body_index = (BODY_INDEX) (441);
	desc_32[37].offset = (BODY_INDEX) (11);
	desc_32[37].type = (EIF_TYPE_INDEX) (225);
	desc_32[37].gen_type = NULL;
	desc_32[38].body_index = (BODY_INDEX) (442);
	desc_32[38].offset = (BODY_INDEX) (12);
	desc_32[38].type = (EIF_TYPE_INDEX) (225);
	desc_32[38].gen_type = NULL;
	desc_32[39].body_index = (BODY_INDEX) (443);
	desc_32[39].offset = (BODY_INDEX) (13);
	desc_32[39].type = (EIF_TYPE_INDEX) (225);
	desc_32[39].gen_type = NULL;
	desc_32[40].body_index = (BODY_INDEX) (-1);
	desc_32[40].offset = (BODY_INDEX) (-1);
	desc_32[40].type = (EIF_TYPE_INDEX) (225);
	desc_32[40].gen_type = NULL;
	desc_32[41].body_index = (BODY_INDEX) (444);
	desc_32[41].offset = (BODY_INDEX) (-1);
	desc_32[41].type = (EIF_TYPE_INDEX) (225);
	desc_32[41].gen_type = NULL;
	desc_32[42].body_index = (BODY_INDEX) (-1);
	desc_32[42].offset = (BODY_INDEX) (-1);
	desc_32[42].type = (EIF_TYPE_INDEX) (225);
	desc_32[42].gen_type = NULL;
	desc_32[43].body_index = (BODY_INDEX) (-1);
	desc_32[43].offset = (BODY_INDEX) (-1);
	desc_32[43].type = (EIF_TYPE_INDEX) (3);
	desc_32[43].gen_type = NULL;
	desc_32[44].body_index = (BODY_INDEX) (-1);
	desc_32[44].offset = (BODY_INDEX) (-1);
	desc_32[44].type = (EIF_TYPE_INDEX) (225);
	desc_32[44].gen_type = NULL;
	desc_32[45].body_index = (BODY_INDEX) (-1);
	desc_32[45].offset = (BODY_INDEX) (-1);
	desc_32[45].type = (EIF_TYPE_INDEX) (225);
	desc_32[45].gen_type = NULL;
	desc_32[46].body_index = (BODY_INDEX) (-1);
	desc_32[46].offset = (BODY_INDEX) (-1);
	desc_32[46].type = (EIF_TYPE_INDEX) (3);
	desc_32[46].gen_type = NULL;
	desc_32[47].body_index = (BODY_INDEX) (-1);
	desc_32[47].offset = (BODY_INDEX) (-1);
	desc_32[47].type = (EIF_TYPE_INDEX) (228);
	desc_32[47].gen_type = NULL;
	desc_32[48].body_index = (BODY_INDEX) (-1);
	desc_32[48].offset = (BODY_INDEX) (-1);
	desc_32[48].type = (EIF_TYPE_INDEX) (-1);
	desc_32[48].gen_type = NULL;
}

extern void Init32(void);
void Init32(void)
{
	if (desc_fill != 0)
		build_desc_32();
	IDSC(desc_32, 0, 31);
	IDSC(desc_32 + 1, 1, 31);
	IDSC(desc_32 + 32, 109, 31);
}


#ifdef __cplusplus
}
#endif
