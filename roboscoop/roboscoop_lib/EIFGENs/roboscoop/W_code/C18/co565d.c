/*
 * Class COLLECTION [INTEGER_8]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_565(void);
static EIF_TYPE_INDEX gen_type0_565 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_565 [] = {0xFF11,274,0xFF12,564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type2_565 [] = {0xFF11,564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type3_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_565 [] = {0xFF11,564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type6_565 [] = {0xFF11,564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type7_565 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_565 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_565 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_565 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_565 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_565 [] = {564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type13_565 [] = {0xFF11,564,213,0xFFFF};
static EIF_TYPE_INDEX gen_type14_565 [] = {0xFF11,559,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_565 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_565[50];

static void build_desc_565(void) {
	desc_565[0].body_index = (BODY_INDEX) (-1);
	desc_565[0].offset = (BODY_INDEX) (-1);
	desc_565[0].type = INVALID_DTYPE;
	desc_565[0].gen_type = NULL;
	desc_565[1].body_index = (BODY_INDEX) (0);
	desc_565[1].offset = (BODY_INDEX) (-1);
	desc_565[1].type = (EIF_TYPE_INDEX) (257);
	desc_565[1].gen_type =  gen_type0_565;
	desc_565[2].body_index = (BODY_INDEX) (1);
	desc_565[2].offset = (BODY_INDEX) (-1);
	desc_565[2].type = (EIF_TYPE_INDEX) (274);
	desc_565[2].gen_type =  gen_type1_565;
	desc_565[3].body_index = (BODY_INDEX) (2);
	desc_565[3].offset = (BODY_INDEX) (-1);
	desc_565[3].type = (EIF_TYPE_INDEX) (225);
	desc_565[3].gen_type = NULL;
	desc_565[4].body_index = (BODY_INDEX) (3);
	desc_565[4].offset = (BODY_INDEX) (-1);
	desc_565[4].type = (EIF_TYPE_INDEX) (225);
	desc_565[4].gen_type = NULL;
	desc_565[5].body_index = (BODY_INDEX) (4);
	desc_565[5].offset = (BODY_INDEX) (-1);
	desc_565[5].type = (EIF_TYPE_INDEX) (225);
	desc_565[5].gen_type = NULL;
	desc_565[6].body_index = (BODY_INDEX) (5);
	desc_565[6].offset = (BODY_INDEX) (-1);
	desc_565[6].type = (EIF_TYPE_INDEX) (225);
	desc_565[6].gen_type = NULL;
	desc_565[7].body_index = (BODY_INDEX) (6);
	desc_565[7].offset = (BODY_INDEX) (-1);
	desc_565[7].type = (EIF_TYPE_INDEX) (225);
	desc_565[7].gen_type = NULL;
	desc_565[8].body_index = (BODY_INDEX) (7);
	desc_565[8].offset = (BODY_INDEX) (-1);
	desc_565[8].type = (EIF_TYPE_INDEX) (225);
	desc_565[8].gen_type = NULL;
	desc_565[9].body_index = (BODY_INDEX) (8);
	desc_565[9].offset = (BODY_INDEX) (-1);
	desc_565[9].type = (EIF_TYPE_INDEX) (225);
	desc_565[9].gen_type = NULL;
	desc_565[10].body_index = (BODY_INDEX) (9);
	desc_565[10].offset = (BODY_INDEX) (-1);
	desc_565[10].type = (EIF_TYPE_INDEX) (225);
	desc_565[10].gen_type = NULL;
	desc_565[11].body_index = (BODY_INDEX) (10);
	desc_565[11].offset = (BODY_INDEX) (-1);
	desc_565[11].type = (EIF_TYPE_INDEX) (564);
	desc_565[11].gen_type =  gen_type2_565;
	desc_565[12].body_index = (BODY_INDEX) (11);
	desc_565[12].offset = (BODY_INDEX) (-1);
	desc_565[12].type = (EIF_TYPE_INDEX) (-1);
	desc_565[12].gen_type = NULL;
	desc_565[13].body_index = (BODY_INDEX) (12);
	desc_565[13].offset = (BODY_INDEX) (-1);
	desc_565[13].type = (EIF_TYPE_INDEX) (-1);
	desc_565[13].gen_type = NULL;
	desc_565[14].body_index = (BODY_INDEX) (13);
	desc_565[14].offset = (BODY_INDEX) (-1);
	desc_565[14].type = (EIF_TYPE_INDEX) (0);
	desc_565[14].gen_type =  gen_type3_565;
	desc_565[15].body_index = (BODY_INDEX) (14);
	desc_565[15].offset = (BODY_INDEX) (-1);
	desc_565[15].type = (EIF_TYPE_INDEX) (0);
	desc_565[15].gen_type =  gen_type4_565;
	desc_565[16].body_index = (BODY_INDEX) (15);
	desc_565[16].offset = (BODY_INDEX) (-1);
	desc_565[16].type = (EIF_TYPE_INDEX) (564);
	desc_565[16].gen_type =  gen_type5_565;
	desc_565[17].body_index = (BODY_INDEX) (16);
	desc_565[17].offset = (BODY_INDEX) (-1);
	desc_565[17].type = (EIF_TYPE_INDEX) (564);
	desc_565[17].gen_type =  gen_type6_565;
	desc_565[18].body_index = (BODY_INDEX) (17);
	desc_565[18].offset = (BODY_INDEX) (-1);
	desc_565[18].type = (EIF_TYPE_INDEX) (0);
	desc_565[18].gen_type =  gen_type7_565;
	desc_565[19].body_index = (BODY_INDEX) (18);
	desc_565[19].offset = (BODY_INDEX) (-1);
	desc_565[19].type = (EIF_TYPE_INDEX) (-1);
	desc_565[19].gen_type = NULL;
	desc_565[20].body_index = (BODY_INDEX) (19);
	desc_565[20].offset = (BODY_INDEX) (-1);
	desc_565[20].type = (EIF_TYPE_INDEX) (-1);
	desc_565[20].gen_type = NULL;
	desc_565[21].body_index = (BODY_INDEX) (20);
	desc_565[21].offset = (BODY_INDEX) (-1);
	desc_565[21].type = (EIF_TYPE_INDEX) (18);
	desc_565[21].gen_type =  gen_type8_565;
	desc_565[22].body_index = (BODY_INDEX) (21);
	desc_565[22].offset = (BODY_INDEX) (-1);
	desc_565[22].type = (EIF_TYPE_INDEX) (257);
	desc_565[22].gen_type =  gen_type9_565;
	desc_565[23].body_index = (BODY_INDEX) (22);
	desc_565[23].offset = (BODY_INDEX) (-1);
	desc_565[23].type = (EIF_TYPE_INDEX) (257);
	desc_565[23].gen_type =  gen_type10_565;
	desc_565[24].body_index = (BODY_INDEX) (23);
	desc_565[24].offset = (BODY_INDEX) (-1);
	desc_565[24].type = (EIF_TYPE_INDEX) (-1);
	desc_565[24].gen_type = NULL;
	desc_565[25].body_index = (BODY_INDEX) (24);
	desc_565[25].offset = (BODY_INDEX) (-1);
	desc_565[25].type = (EIF_TYPE_INDEX) (38);
	desc_565[25].gen_type =  gen_type11_565;
	desc_565[26].body_index = (BODY_INDEX) (25);
	desc_565[26].offset = (BODY_INDEX) (-1);
	desc_565[26].type = (EIF_TYPE_INDEX) (-1);
	desc_565[26].gen_type = NULL;
	desc_565[27].body_index = (BODY_INDEX) (26);
	desc_565[27].offset = (BODY_INDEX) (-1);
	desc_565[27].type = (EIF_TYPE_INDEX) (-1);
	desc_565[27].gen_type = NULL;
	desc_565[28].body_index = (BODY_INDEX) (27);
	desc_565[28].offset = (BODY_INDEX) (-1);
	desc_565[28].type = (EIF_TYPE_INDEX) (-1);
	desc_565[28].gen_type = NULL;
	desc_565[29].body_index = (BODY_INDEX) (28);
	desc_565[29].offset = (BODY_INDEX) (-1);
	desc_565[29].type = (EIF_TYPE_INDEX) (564);
	desc_565[29].gen_type =  gen_type12_565;
	desc_565[30].body_index = (BODY_INDEX) (29);
	desc_565[30].offset = (BODY_INDEX) (-1);
	desc_565[30].type = (EIF_TYPE_INDEX) (252);
	desc_565[30].gen_type = NULL;
	desc_565[31].body_index = (BODY_INDEX) (30);
	desc_565[31].offset = (BODY_INDEX) (-1);
	desc_565[31].type = (EIF_TYPE_INDEX) (564);
	desc_565[31].gen_type =  gen_type13_565;
	desc_565[32].body_index = (BODY_INDEX) (-1);
	desc_565[32].offset = (BODY_INDEX) (-1);
	desc_565[32].type = (EIF_TYPE_INDEX) (225);
	desc_565[32].gen_type = NULL;
	desc_565[33].body_index = (BODY_INDEX) (-1);
	desc_565[33].offset = (BODY_INDEX) (-1);
	desc_565[33].type = (EIF_TYPE_INDEX) (225);
	desc_565[33].gen_type = NULL;
	desc_565[34].body_index = (BODY_INDEX) (2116);
	desc_565[34].offset = (BODY_INDEX) (-1);
	desc_565[34].type = (EIF_TYPE_INDEX) (225);
	desc_565[34].gen_type = NULL;
	desc_565[35].body_index = (BODY_INDEX) (2117);
	desc_565[35].offset = (BODY_INDEX) (0);
	desc_565[35].type = (EIF_TYPE_INDEX) (225);
	desc_565[35].gen_type = NULL;
	desc_565[36].body_index = (BODY_INDEX) (2118);
	desc_565[36].offset = (BODY_INDEX) (-1);
	desc_565[36].type = (EIF_TYPE_INDEX) (225);
	desc_565[36].gen_type = NULL;
	desc_565[37].body_index = (BODY_INDEX) (2119);
	desc_565[37].offset = (BODY_INDEX) (-1);
	desc_565[37].type = (EIF_TYPE_INDEX) (-1);
	desc_565[37].gen_type = NULL;
	desc_565[38].body_index = (BODY_INDEX) (2120);
	desc_565[38].offset = (BODY_INDEX) (-1);
	desc_565[38].type = (EIF_TYPE_INDEX) (-1);
	desc_565[38].gen_type = NULL;
	desc_565[39].body_index = (BODY_INDEX) (-1);
	desc_565[39].offset = (BODY_INDEX) (-1);
	desc_565[39].type = (EIF_TYPE_INDEX) (559);
	desc_565[39].gen_type =  gen_type14_565;
	desc_565[40].body_index = (BODY_INDEX) (-1);
	desc_565[40].offset = (BODY_INDEX) (-1);
	desc_565[40].type = (EIF_TYPE_INDEX) (-1);
	desc_565[40].gen_type =  gen_type15_565;
	desc_565[41].body_index = (BODY_INDEX) (-1);
	desc_565[41].offset = (BODY_INDEX) (-1);
	desc_565[41].type = (EIF_TYPE_INDEX) (225);
	desc_565[41].gen_type = NULL;
	desc_565[42].body_index = (BODY_INDEX) (-1);
	desc_565[42].offset = (BODY_INDEX) (-1);
	desc_565[42].type = (EIF_TYPE_INDEX) (225);
	desc_565[42].gen_type = NULL;
	desc_565[43].body_index = (BODY_INDEX) (2177);
	desc_565[43].offset = (BODY_INDEX) (-1);
	desc_565[43].type = (EIF_TYPE_INDEX) (225);
	desc_565[43].gen_type = NULL;
	desc_565[44].body_index = (BODY_INDEX) (-1);
	desc_565[44].offset = (BODY_INDEX) (-1);
	desc_565[44].type = (EIF_TYPE_INDEX) (-1);
	desc_565[44].gen_type = NULL;
	desc_565[45].body_index = (BODY_INDEX) (-1);
	desc_565[45].offset = (BODY_INDEX) (-1);
	desc_565[45].type = (EIF_TYPE_INDEX) (-1);
	desc_565[45].gen_type = NULL;
	desc_565[46].body_index = (BODY_INDEX) (2178);
	desc_565[46].offset = (BODY_INDEX) (-1);
	desc_565[46].type = (EIF_TYPE_INDEX) (-1);
	desc_565[46].gen_type = NULL;
	desc_565[47].body_index = (BODY_INDEX) (-1);
	desc_565[47].offset = (BODY_INDEX) (-1);
	desc_565[47].type = (EIF_TYPE_INDEX) (-1);
	desc_565[47].gen_type = NULL;
	desc_565[48].body_index = (BODY_INDEX) (2179);
	desc_565[48].offset = (BODY_INDEX) (-1);
	desc_565[48].type = (EIF_TYPE_INDEX) (-1);
	desc_565[48].gen_type = NULL;
	desc_565[49].body_index = (BODY_INDEX) (-1);
	desc_565[49].offset = (BODY_INDEX) (-1);
	desc_565[49].type = (EIF_TYPE_INDEX) (-1);
	desc_565[49].gen_type = NULL;
}

extern void Init565(void);
void Init565(void)
{
	if (desc_fill != 0)
		build_desc_565();
	IDSC(desc_565, 0, 564);
	IDSC(desc_565 + 1, 1, 564);
	IDSC(desc_565 + 32, 84, 564);
	IDSC(desc_565 + 41, 317, 564);
}


#ifdef __cplusplus
}
#endif
