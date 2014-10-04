/*
 * Class TIMER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_21(void);
static EIF_TYPE_INDEX gen_type0_21 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_21 [] = {0xFF11,274,0xFF12,20,0xFFFF};
static EIF_TYPE_INDEX gen_type2_21 [] = {0xFF11,20,0xFFFF};
static EIF_TYPE_INDEX gen_type3_21 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_21 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_21 [] = {0xFF11,20,0xFFFF};
static EIF_TYPE_INDEX gen_type6_21 [] = {0xFF11,20,0xFFFF};
static EIF_TYPE_INDEX gen_type7_21 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_21 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_21 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_21 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_21 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_21 [] = {0xFF11,20,0xFFFF};


static struct desc_info desc_21[48];

static void build_desc_21(void) {
	desc_21[0].body_index = (BODY_INDEX) (380);
	desc_21[0].offset = (BODY_INDEX) (-1);
	desc_21[0].type = INVALID_DTYPE;
	desc_21[0].gen_type = NULL;
	desc_21[1].body_index = (BODY_INDEX) (0);
	desc_21[1].offset = (BODY_INDEX) (-1);
	desc_21[1].type = (EIF_TYPE_INDEX) (257);
	desc_21[1].gen_type =  gen_type0_21;
	desc_21[2].body_index = (BODY_INDEX) (1);
	desc_21[2].offset = (BODY_INDEX) (-1);
	desc_21[2].type = (EIF_TYPE_INDEX) (274);
	desc_21[2].gen_type =  gen_type1_21;
	desc_21[3].body_index = (BODY_INDEX) (2);
	desc_21[3].offset = (BODY_INDEX) (-1);
	desc_21[3].type = (EIF_TYPE_INDEX) (225);
	desc_21[3].gen_type = NULL;
	desc_21[4].body_index = (BODY_INDEX) (3);
	desc_21[4].offset = (BODY_INDEX) (-1);
	desc_21[4].type = (EIF_TYPE_INDEX) (225);
	desc_21[4].gen_type = NULL;
	desc_21[5].body_index = (BODY_INDEX) (4);
	desc_21[5].offset = (BODY_INDEX) (-1);
	desc_21[5].type = (EIF_TYPE_INDEX) (225);
	desc_21[5].gen_type = NULL;
	desc_21[6].body_index = (BODY_INDEX) (5);
	desc_21[6].offset = (BODY_INDEX) (-1);
	desc_21[6].type = (EIF_TYPE_INDEX) (225);
	desc_21[6].gen_type = NULL;
	desc_21[7].body_index = (BODY_INDEX) (6);
	desc_21[7].offset = (BODY_INDEX) (-1);
	desc_21[7].type = (EIF_TYPE_INDEX) (225);
	desc_21[7].gen_type = NULL;
	desc_21[8].body_index = (BODY_INDEX) (7);
	desc_21[8].offset = (BODY_INDEX) (-1);
	desc_21[8].type = (EIF_TYPE_INDEX) (225);
	desc_21[8].gen_type = NULL;
	desc_21[9].body_index = (BODY_INDEX) (8);
	desc_21[9].offset = (BODY_INDEX) (-1);
	desc_21[9].type = (EIF_TYPE_INDEX) (225);
	desc_21[9].gen_type = NULL;
	desc_21[10].body_index = (BODY_INDEX) (9);
	desc_21[10].offset = (BODY_INDEX) (-1);
	desc_21[10].type = (EIF_TYPE_INDEX) (225);
	desc_21[10].gen_type = NULL;
	desc_21[11].body_index = (BODY_INDEX) (10);
	desc_21[11].offset = (BODY_INDEX) (-1);
	desc_21[11].type = (EIF_TYPE_INDEX) (20);
	desc_21[11].gen_type =  gen_type2_21;
	desc_21[12].body_index = (BODY_INDEX) (11);
	desc_21[12].offset = (BODY_INDEX) (-1);
	desc_21[12].type = (EIF_TYPE_INDEX) (-1);
	desc_21[12].gen_type = NULL;
	desc_21[13].body_index = (BODY_INDEX) (12);
	desc_21[13].offset = (BODY_INDEX) (-1);
	desc_21[13].type = (EIF_TYPE_INDEX) (-1);
	desc_21[13].gen_type = NULL;
	desc_21[14].body_index = (BODY_INDEX) (13);
	desc_21[14].offset = (BODY_INDEX) (-1);
	desc_21[14].type = (EIF_TYPE_INDEX) (0);
	desc_21[14].gen_type =  gen_type3_21;
	desc_21[15].body_index = (BODY_INDEX) (14);
	desc_21[15].offset = (BODY_INDEX) (-1);
	desc_21[15].type = (EIF_TYPE_INDEX) (0);
	desc_21[15].gen_type =  gen_type4_21;
	desc_21[16].body_index = (BODY_INDEX) (15);
	desc_21[16].offset = (BODY_INDEX) (-1);
	desc_21[16].type = (EIF_TYPE_INDEX) (20);
	desc_21[16].gen_type =  gen_type5_21;
	desc_21[17].body_index = (BODY_INDEX) (16);
	desc_21[17].offset = (BODY_INDEX) (-1);
	desc_21[17].type = (EIF_TYPE_INDEX) (20);
	desc_21[17].gen_type =  gen_type6_21;
	desc_21[18].body_index = (BODY_INDEX) (17);
	desc_21[18].offset = (BODY_INDEX) (-1);
	desc_21[18].type = (EIF_TYPE_INDEX) (0);
	desc_21[18].gen_type =  gen_type7_21;
	desc_21[19].body_index = (BODY_INDEX) (18);
	desc_21[19].offset = (BODY_INDEX) (-1);
	desc_21[19].type = (EIF_TYPE_INDEX) (-1);
	desc_21[19].gen_type = NULL;
	desc_21[20].body_index = (BODY_INDEX) (19);
	desc_21[20].offset = (BODY_INDEX) (-1);
	desc_21[20].type = (EIF_TYPE_INDEX) (-1);
	desc_21[20].gen_type = NULL;
	desc_21[21].body_index = (BODY_INDEX) (20);
	desc_21[21].offset = (BODY_INDEX) (-1);
	desc_21[21].type = (EIF_TYPE_INDEX) (18);
	desc_21[21].gen_type =  gen_type8_21;
	desc_21[22].body_index = (BODY_INDEX) (21);
	desc_21[22].offset = (BODY_INDEX) (-1);
	desc_21[22].type = (EIF_TYPE_INDEX) (257);
	desc_21[22].gen_type =  gen_type9_21;
	desc_21[23].body_index = (BODY_INDEX) (22);
	desc_21[23].offset = (BODY_INDEX) (-1);
	desc_21[23].type = (EIF_TYPE_INDEX) (257);
	desc_21[23].gen_type =  gen_type10_21;
	desc_21[24].body_index = (BODY_INDEX) (23);
	desc_21[24].offset = (BODY_INDEX) (-1);
	desc_21[24].type = (EIF_TYPE_INDEX) (-1);
	desc_21[24].gen_type = NULL;
	desc_21[25].body_index = (BODY_INDEX) (24);
	desc_21[25].offset = (BODY_INDEX) (-1);
	desc_21[25].type = (EIF_TYPE_INDEX) (38);
	desc_21[25].gen_type =  gen_type11_21;
	desc_21[26].body_index = (BODY_INDEX) (25);
	desc_21[26].offset = (BODY_INDEX) (-1);
	desc_21[26].type = (EIF_TYPE_INDEX) (-1);
	desc_21[26].gen_type = NULL;
	desc_21[27].body_index = (BODY_INDEX) (26);
	desc_21[27].offset = (BODY_INDEX) (-1);
	desc_21[27].type = (EIF_TYPE_INDEX) (-1);
	desc_21[27].gen_type = NULL;
	desc_21[28].body_index = (BODY_INDEX) (27);
	desc_21[28].offset = (BODY_INDEX) (-1);
	desc_21[28].type = (EIF_TYPE_INDEX) (-1);
	desc_21[28].gen_type = NULL;
	desc_21[29].body_index = (BODY_INDEX) (28);
	desc_21[29].offset = (BODY_INDEX) (-1);
	desc_21[29].type = (EIF_TYPE_INDEX) (20);
	desc_21[29].gen_type = NULL;
	desc_21[30].body_index = (BODY_INDEX) (29);
	desc_21[30].offset = (BODY_INDEX) (-1);
	desc_21[30].type = (EIF_TYPE_INDEX) (252);
	desc_21[30].gen_type = NULL;
	desc_21[31].body_index = (BODY_INDEX) (30);
	desc_21[31].offset = (BODY_INDEX) (-1);
	desc_21[31].type = (EIF_TYPE_INDEX) (20);
	desc_21[31].gen_type =  gen_type12_21;
	desc_21[32].body_index = (BODY_INDEX) (381);
	desc_21[32].offset = (BODY_INDEX) (-1);
	desc_21[32].type = (EIF_TYPE_INDEX) (-1);
	desc_21[32].gen_type = NULL;
	desc_21[33].body_index = (BODY_INDEX) (382);
	desc_21[33].offset = (BODY_INDEX) (-1);
	desc_21[33].type = (EIF_TYPE_INDEX) (-1);
	desc_21[33].gen_type = NULL;
	desc_21[34].body_index = (BODY_INDEX) (383);
	desc_21[34].offset = (BODY_INDEX) (8);
	desc_21[34].type = (EIF_TYPE_INDEX) (222);
	desc_21[34].gen_type = NULL;
	desc_21[35].body_index = (BODY_INDEX) (384);
	desc_21[35].offset = (BODY_INDEX) (4);
	desc_21[35].type = (EIF_TYPE_INDEX) (246);
	desc_21[35].gen_type = NULL;
	desc_21[36].body_index = (BODY_INDEX) (385);
	desc_21[36].offset = (BODY_INDEX) (-1);
	desc_21[36].type = (EIF_TYPE_INDEX) (-1);
	desc_21[36].gen_type = NULL;
	desc_21[37].body_index = (BODY_INDEX) (369);
	desc_21[37].offset = (BODY_INDEX) (-1);
	desc_21[37].type = (EIF_TYPE_INDEX) (-1);
	desc_21[37].gen_type = NULL;
	desc_21[38].body_index = (BODY_INDEX) (370);
	desc_21[38].offset = (BODY_INDEX) (-1);
	desc_21[38].type = (EIF_TYPE_INDEX) (-1);
	desc_21[38].gen_type = NULL;
	desc_21[39].body_index = (BODY_INDEX) (371);
	desc_21[39].offset = (BODY_INDEX) (-1);
	desc_21[39].type = (EIF_TYPE_INDEX) (-1);
	desc_21[39].gen_type = NULL;
	desc_21[40].body_index = (BODY_INDEX) (372);
	desc_21[40].offset = (BODY_INDEX) (-1);
	desc_21[40].type = (EIF_TYPE_INDEX) (-1);
	desc_21[40].gen_type = NULL;
	desc_21[41].body_index = (BODY_INDEX) (373);
	desc_21[41].offset = (BODY_INDEX) (0);
	desc_21[41].type = (EIF_TYPE_INDEX) (225);
	desc_21[41].gen_type = NULL;
	desc_21[42].body_index = (BODY_INDEX) (374);
	desc_21[42].offset = (BODY_INDEX) (1);
	desc_21[42].type = (EIF_TYPE_INDEX) (225);
	desc_21[42].gen_type = NULL;
	desc_21[43].body_index = (BODY_INDEX) (375);
	desc_21[43].offset = (BODY_INDEX) (2);
	desc_21[43].type = (EIF_TYPE_INDEX) (225);
	desc_21[43].gen_type = NULL;
	desc_21[44].body_index = (BODY_INDEX) (376);
	desc_21[44].offset = (BODY_INDEX) (-1);
	desc_21[44].type = (EIF_TYPE_INDEX) (225);
	desc_21[44].gen_type = NULL;
	desc_21[45].body_index = (BODY_INDEX) (377);
	desc_21[45].offset = (BODY_INDEX) (16);
	desc_21[45].type = (EIF_TYPE_INDEX) (222);
	desc_21[45].gen_type = NULL;
	desc_21[46].body_index = (BODY_INDEX) (378);
	desc_21[46].offset = (BODY_INDEX) (24);
	desc_21[46].type = (EIF_TYPE_INDEX) (222);
	desc_21[46].gen_type = NULL;
	desc_21[47].body_index = (BODY_INDEX) (379);
	desc_21[47].offset = (BODY_INDEX) (-1);
	desc_21[47].type = (EIF_TYPE_INDEX) (222);
	desc_21[47].gen_type = NULL;
}

extern void Init21(void);
void Init21(void)
{
	if (desc_fill != 0)
		build_desc_21();
	IDSC(desc_21, 0, 20);
	IDSC(desc_21 + 1, 1, 20);
	IDSC(desc_21 + 32, 216, 20);
}


#ifdef __cplusplus
}
#endif
