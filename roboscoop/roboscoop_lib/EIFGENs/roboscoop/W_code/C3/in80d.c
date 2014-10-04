/*
 * Class INTERNAL_HELPER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_80(void);
static EIF_TYPE_INDEX gen_type0_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_80 [] = {0xFF11,274,0xFF12,79,0xFFFF};
static EIF_TYPE_INDEX gen_type2_80 [] = {0xFF11,79,0xFFFF};
static EIF_TYPE_INDEX gen_type3_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_80 [] = {0xFF11,79,0xFFFF};
static EIF_TYPE_INDEX gen_type6_80 [] = {0xFF11,79,0xFFFF};
static EIF_TYPE_INDEX gen_type7_80 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_80 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_80 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_80 [] = {0xFF11,79,0xFFFF};
static EIF_TYPE_INDEX gen_type13_80 [] = {0xFF11,254,0xFFFF};
static EIF_TYPE_INDEX gen_type14_80 [] = {300,0xFF11,262,0xFFFF};
static EIF_TYPE_INDEX gen_type15_80 [] = {0xFF11,448,0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type16_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type17_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type18_80 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type19_80 [] = {0xFF11,257,0xFFFF};


static struct desc_info desc_80[44];

static void build_desc_80(void) {
	desc_80[0].body_index = (BODY_INDEX) (-1);
	desc_80[0].offset = (BODY_INDEX) (-1);
	desc_80[0].type = INVALID_DTYPE;
	desc_80[0].gen_type = NULL;
	desc_80[1].body_index = (BODY_INDEX) (0);
	desc_80[1].offset = (BODY_INDEX) (-1);
	desc_80[1].type = (EIF_TYPE_INDEX) (257);
	desc_80[1].gen_type =  gen_type0_80;
	desc_80[2].body_index = (BODY_INDEX) (1);
	desc_80[2].offset = (BODY_INDEX) (-1);
	desc_80[2].type = (EIF_TYPE_INDEX) (274);
	desc_80[2].gen_type =  gen_type1_80;
	desc_80[3].body_index = (BODY_INDEX) (2);
	desc_80[3].offset = (BODY_INDEX) (-1);
	desc_80[3].type = (EIF_TYPE_INDEX) (225);
	desc_80[3].gen_type = NULL;
	desc_80[4].body_index = (BODY_INDEX) (3);
	desc_80[4].offset = (BODY_INDEX) (-1);
	desc_80[4].type = (EIF_TYPE_INDEX) (225);
	desc_80[4].gen_type = NULL;
	desc_80[5].body_index = (BODY_INDEX) (4);
	desc_80[5].offset = (BODY_INDEX) (-1);
	desc_80[5].type = (EIF_TYPE_INDEX) (225);
	desc_80[5].gen_type = NULL;
	desc_80[6].body_index = (BODY_INDEX) (5);
	desc_80[6].offset = (BODY_INDEX) (-1);
	desc_80[6].type = (EIF_TYPE_INDEX) (225);
	desc_80[6].gen_type = NULL;
	desc_80[7].body_index = (BODY_INDEX) (6);
	desc_80[7].offset = (BODY_INDEX) (-1);
	desc_80[7].type = (EIF_TYPE_INDEX) (225);
	desc_80[7].gen_type = NULL;
	desc_80[8].body_index = (BODY_INDEX) (7);
	desc_80[8].offset = (BODY_INDEX) (-1);
	desc_80[8].type = (EIF_TYPE_INDEX) (225);
	desc_80[8].gen_type = NULL;
	desc_80[9].body_index = (BODY_INDEX) (8);
	desc_80[9].offset = (BODY_INDEX) (-1);
	desc_80[9].type = (EIF_TYPE_INDEX) (225);
	desc_80[9].gen_type = NULL;
	desc_80[10].body_index = (BODY_INDEX) (9);
	desc_80[10].offset = (BODY_INDEX) (-1);
	desc_80[10].type = (EIF_TYPE_INDEX) (225);
	desc_80[10].gen_type = NULL;
	desc_80[11].body_index = (BODY_INDEX) (10);
	desc_80[11].offset = (BODY_INDEX) (-1);
	desc_80[11].type = (EIF_TYPE_INDEX) (79);
	desc_80[11].gen_type =  gen_type2_80;
	desc_80[12].body_index = (BODY_INDEX) (11);
	desc_80[12].offset = (BODY_INDEX) (-1);
	desc_80[12].type = (EIF_TYPE_INDEX) (-1);
	desc_80[12].gen_type = NULL;
	desc_80[13].body_index = (BODY_INDEX) (12);
	desc_80[13].offset = (BODY_INDEX) (-1);
	desc_80[13].type = (EIF_TYPE_INDEX) (-1);
	desc_80[13].gen_type = NULL;
	desc_80[14].body_index = (BODY_INDEX) (13);
	desc_80[14].offset = (BODY_INDEX) (-1);
	desc_80[14].type = (EIF_TYPE_INDEX) (0);
	desc_80[14].gen_type =  gen_type3_80;
	desc_80[15].body_index = (BODY_INDEX) (14);
	desc_80[15].offset = (BODY_INDEX) (-1);
	desc_80[15].type = (EIF_TYPE_INDEX) (0);
	desc_80[15].gen_type =  gen_type4_80;
	desc_80[16].body_index = (BODY_INDEX) (15);
	desc_80[16].offset = (BODY_INDEX) (-1);
	desc_80[16].type = (EIF_TYPE_INDEX) (79);
	desc_80[16].gen_type =  gen_type5_80;
	desc_80[17].body_index = (BODY_INDEX) (16);
	desc_80[17].offset = (BODY_INDEX) (-1);
	desc_80[17].type = (EIF_TYPE_INDEX) (79);
	desc_80[17].gen_type =  gen_type6_80;
	desc_80[18].body_index = (BODY_INDEX) (17);
	desc_80[18].offset = (BODY_INDEX) (-1);
	desc_80[18].type = (EIF_TYPE_INDEX) (0);
	desc_80[18].gen_type =  gen_type7_80;
	desc_80[19].body_index = (BODY_INDEX) (18);
	desc_80[19].offset = (BODY_INDEX) (-1);
	desc_80[19].type = (EIF_TYPE_INDEX) (-1);
	desc_80[19].gen_type = NULL;
	desc_80[20].body_index = (BODY_INDEX) (19);
	desc_80[20].offset = (BODY_INDEX) (-1);
	desc_80[20].type = (EIF_TYPE_INDEX) (-1);
	desc_80[20].gen_type = NULL;
	desc_80[21].body_index = (BODY_INDEX) (20);
	desc_80[21].offset = (BODY_INDEX) (-1);
	desc_80[21].type = (EIF_TYPE_INDEX) (18);
	desc_80[21].gen_type =  gen_type8_80;
	desc_80[22].body_index = (BODY_INDEX) (21);
	desc_80[22].offset = (BODY_INDEX) (-1);
	desc_80[22].type = (EIF_TYPE_INDEX) (257);
	desc_80[22].gen_type =  gen_type9_80;
	desc_80[23].body_index = (BODY_INDEX) (22);
	desc_80[23].offset = (BODY_INDEX) (-1);
	desc_80[23].type = (EIF_TYPE_INDEX) (257);
	desc_80[23].gen_type =  gen_type10_80;
	desc_80[24].body_index = (BODY_INDEX) (23);
	desc_80[24].offset = (BODY_INDEX) (-1);
	desc_80[24].type = (EIF_TYPE_INDEX) (-1);
	desc_80[24].gen_type = NULL;
	desc_80[25].body_index = (BODY_INDEX) (24);
	desc_80[25].offset = (BODY_INDEX) (-1);
	desc_80[25].type = (EIF_TYPE_INDEX) (38);
	desc_80[25].gen_type =  gen_type11_80;
	desc_80[26].body_index = (BODY_INDEX) (25);
	desc_80[26].offset = (BODY_INDEX) (-1);
	desc_80[26].type = (EIF_TYPE_INDEX) (-1);
	desc_80[26].gen_type = NULL;
	desc_80[27].body_index = (BODY_INDEX) (26);
	desc_80[27].offset = (BODY_INDEX) (-1);
	desc_80[27].type = (EIF_TYPE_INDEX) (-1);
	desc_80[27].gen_type = NULL;
	desc_80[28].body_index = (BODY_INDEX) (27);
	desc_80[28].offset = (BODY_INDEX) (-1);
	desc_80[28].type = (EIF_TYPE_INDEX) (-1);
	desc_80[28].gen_type = NULL;
	desc_80[29].body_index = (BODY_INDEX) (28);
	desc_80[29].offset = (BODY_INDEX) (-1);
	desc_80[29].type = (EIF_TYPE_INDEX) (79);
	desc_80[29].gen_type = NULL;
	desc_80[30].body_index = (BODY_INDEX) (29);
	desc_80[30].offset = (BODY_INDEX) (-1);
	desc_80[30].type = (EIF_TYPE_INDEX) (252);
	desc_80[30].gen_type = NULL;
	desc_80[31].body_index = (BODY_INDEX) (30);
	desc_80[31].offset = (BODY_INDEX) (-1);
	desc_80[31].type = (EIF_TYPE_INDEX) (79);
	desc_80[31].gen_type =  gen_type12_80;
	desc_80[32].body_index = (BODY_INDEX) (1306);
	desc_80[32].offset = (BODY_INDEX) (-1);
	desc_80[32].type = (EIF_TYPE_INDEX) (225);
	desc_80[32].gen_type = NULL;
	desc_80[33].body_index = (BODY_INDEX) (1307);
	desc_80[33].offset = (BODY_INDEX) (-1);
	desc_80[33].type = (EIF_TYPE_INDEX) (225);
	desc_80[33].gen_type = NULL;
	desc_80[34].body_index = (BODY_INDEX) (1308);
	desc_80[34].offset = (BODY_INDEX) (-1);
	desc_80[34].type = (EIF_TYPE_INDEX) (254);
	desc_80[34].gen_type =  gen_type13_80;
	desc_80[35].body_index = (BODY_INDEX) (1309);
	desc_80[35].offset = (BODY_INDEX) (-1);
	desc_80[35].type = (EIF_TYPE_INDEX) (225);
	desc_80[35].gen_type = NULL;
	desc_80[36].body_index = (BODY_INDEX) (1310);
	desc_80[36].offset = (BODY_INDEX) (-1);
	desc_80[36].type = (EIF_TYPE_INDEX) (300);
	desc_80[36].gen_type =  gen_type14_80;
	desc_80[37].body_index = (BODY_INDEX) (1311);
	desc_80[37].offset = (BODY_INDEX) (-1);
	desc_80[37].type = (EIF_TYPE_INDEX) (448);
	desc_80[37].gen_type =  gen_type15_80;
	desc_80[38].body_index = (BODY_INDEX) (1312);
	desc_80[38].offset = (BODY_INDEX) (-1);
	desc_80[38].type = (EIF_TYPE_INDEX) (216);
	desc_80[38].gen_type = NULL;
	desc_80[39].body_index = (BODY_INDEX) (1313);
	desc_80[39].offset = (BODY_INDEX) (-1);
	desc_80[39].type = (EIF_TYPE_INDEX) (216);
	desc_80[39].gen_type = NULL;
	desc_80[40].body_index = (BODY_INDEX) (1314);
	desc_80[40].offset = (BODY_INDEX) (-1);
	desc_80[40].type = (EIF_TYPE_INDEX) (257);
	desc_80[40].gen_type =  gen_type16_80;
	desc_80[41].body_index = (BODY_INDEX) (1315);
	desc_80[41].offset = (BODY_INDEX) (-1);
	desc_80[41].type = (EIF_TYPE_INDEX) (257);
	desc_80[41].gen_type =  gen_type17_80;
	desc_80[42].body_index = (BODY_INDEX) (1304);
	desc_80[42].offset = (BODY_INDEX) (-1);
	desc_80[42].type = (EIF_TYPE_INDEX) (257);
	desc_80[42].gen_type =  gen_type18_80;
	desc_80[43].body_index = (BODY_INDEX) (1305);
	desc_80[43].offset = (BODY_INDEX) (-1);
	desc_80[43].type = (EIF_TYPE_INDEX) (257);
	desc_80[43].gen_type =  gen_type19_80;
}

extern void Init80(void);
void Init80(void)
{
	if (desc_fill != 0)
		build_desc_80();
	IDSC(desc_80, 0, 79);
	IDSC(desc_80 + 1, 1, 79);
	IDSC(desc_80 + 32, 313, 79);
}


#ifdef __cplusplus
}
#endif
