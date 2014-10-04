/*
 * Class BOX [NATURAL_16]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_729(void);
static EIF_TYPE_INDEX gen_type0_729 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_729 [] = {0xFF11,274,0xFF12,728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type2_729 [] = {0xFF11,728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type3_729 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_729 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_729 [] = {0xFF11,728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type6_729 [] = {0xFF11,728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type7_729 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_729 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_729 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_729 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_729 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_729 [] = {728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type13_729 [] = {0xFF11,728,243,0xFFFF};
static EIF_TYPE_INDEX gen_type14_729 [] = {0xFF11,719,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_729 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_729[42];

static void build_desc_729(void) {
	desc_729[0].body_index = (BODY_INDEX) (-1);
	desc_729[0].offset = (BODY_INDEX) (-1);
	desc_729[0].type = INVALID_DTYPE;
	desc_729[0].gen_type = NULL;
	desc_729[1].body_index = (BODY_INDEX) (0);
	desc_729[1].offset = (BODY_INDEX) (-1);
	desc_729[1].type = (EIF_TYPE_INDEX) (257);
	desc_729[1].gen_type =  gen_type0_729;
	desc_729[2].body_index = (BODY_INDEX) (1);
	desc_729[2].offset = (BODY_INDEX) (-1);
	desc_729[2].type = (EIF_TYPE_INDEX) (274);
	desc_729[2].gen_type =  gen_type1_729;
	desc_729[3].body_index = (BODY_INDEX) (2);
	desc_729[3].offset = (BODY_INDEX) (-1);
	desc_729[3].type = (EIF_TYPE_INDEX) (225);
	desc_729[3].gen_type = NULL;
	desc_729[4].body_index = (BODY_INDEX) (3);
	desc_729[4].offset = (BODY_INDEX) (-1);
	desc_729[4].type = (EIF_TYPE_INDEX) (225);
	desc_729[4].gen_type = NULL;
	desc_729[5].body_index = (BODY_INDEX) (4);
	desc_729[5].offset = (BODY_INDEX) (-1);
	desc_729[5].type = (EIF_TYPE_INDEX) (225);
	desc_729[5].gen_type = NULL;
	desc_729[6].body_index = (BODY_INDEX) (5);
	desc_729[6].offset = (BODY_INDEX) (-1);
	desc_729[6].type = (EIF_TYPE_INDEX) (225);
	desc_729[6].gen_type = NULL;
	desc_729[7].body_index = (BODY_INDEX) (6);
	desc_729[7].offset = (BODY_INDEX) (-1);
	desc_729[7].type = (EIF_TYPE_INDEX) (225);
	desc_729[7].gen_type = NULL;
	desc_729[8].body_index = (BODY_INDEX) (7);
	desc_729[8].offset = (BODY_INDEX) (-1);
	desc_729[8].type = (EIF_TYPE_INDEX) (225);
	desc_729[8].gen_type = NULL;
	desc_729[9].body_index = (BODY_INDEX) (8);
	desc_729[9].offset = (BODY_INDEX) (-1);
	desc_729[9].type = (EIF_TYPE_INDEX) (225);
	desc_729[9].gen_type = NULL;
	desc_729[10].body_index = (BODY_INDEX) (9);
	desc_729[10].offset = (BODY_INDEX) (-1);
	desc_729[10].type = (EIF_TYPE_INDEX) (225);
	desc_729[10].gen_type = NULL;
	desc_729[11].body_index = (BODY_INDEX) (10);
	desc_729[11].offset = (BODY_INDEX) (-1);
	desc_729[11].type = (EIF_TYPE_INDEX) (728);
	desc_729[11].gen_type =  gen_type2_729;
	desc_729[12].body_index = (BODY_INDEX) (11);
	desc_729[12].offset = (BODY_INDEX) (-1);
	desc_729[12].type = (EIF_TYPE_INDEX) (-1);
	desc_729[12].gen_type = NULL;
	desc_729[13].body_index = (BODY_INDEX) (12);
	desc_729[13].offset = (BODY_INDEX) (-1);
	desc_729[13].type = (EIF_TYPE_INDEX) (-1);
	desc_729[13].gen_type = NULL;
	desc_729[14].body_index = (BODY_INDEX) (13);
	desc_729[14].offset = (BODY_INDEX) (-1);
	desc_729[14].type = (EIF_TYPE_INDEX) (0);
	desc_729[14].gen_type =  gen_type3_729;
	desc_729[15].body_index = (BODY_INDEX) (14);
	desc_729[15].offset = (BODY_INDEX) (-1);
	desc_729[15].type = (EIF_TYPE_INDEX) (0);
	desc_729[15].gen_type =  gen_type4_729;
	desc_729[16].body_index = (BODY_INDEX) (15);
	desc_729[16].offset = (BODY_INDEX) (-1);
	desc_729[16].type = (EIF_TYPE_INDEX) (728);
	desc_729[16].gen_type =  gen_type5_729;
	desc_729[17].body_index = (BODY_INDEX) (16);
	desc_729[17].offset = (BODY_INDEX) (-1);
	desc_729[17].type = (EIF_TYPE_INDEX) (728);
	desc_729[17].gen_type =  gen_type6_729;
	desc_729[18].body_index = (BODY_INDEX) (17);
	desc_729[18].offset = (BODY_INDEX) (-1);
	desc_729[18].type = (EIF_TYPE_INDEX) (0);
	desc_729[18].gen_type =  gen_type7_729;
	desc_729[19].body_index = (BODY_INDEX) (18);
	desc_729[19].offset = (BODY_INDEX) (-1);
	desc_729[19].type = (EIF_TYPE_INDEX) (-1);
	desc_729[19].gen_type = NULL;
	desc_729[20].body_index = (BODY_INDEX) (19);
	desc_729[20].offset = (BODY_INDEX) (-1);
	desc_729[20].type = (EIF_TYPE_INDEX) (-1);
	desc_729[20].gen_type = NULL;
	desc_729[21].body_index = (BODY_INDEX) (20);
	desc_729[21].offset = (BODY_INDEX) (-1);
	desc_729[21].type = (EIF_TYPE_INDEX) (18);
	desc_729[21].gen_type =  gen_type8_729;
	desc_729[22].body_index = (BODY_INDEX) (21);
	desc_729[22].offset = (BODY_INDEX) (-1);
	desc_729[22].type = (EIF_TYPE_INDEX) (257);
	desc_729[22].gen_type =  gen_type9_729;
	desc_729[23].body_index = (BODY_INDEX) (22);
	desc_729[23].offset = (BODY_INDEX) (-1);
	desc_729[23].type = (EIF_TYPE_INDEX) (257);
	desc_729[23].gen_type =  gen_type10_729;
	desc_729[24].body_index = (BODY_INDEX) (23);
	desc_729[24].offset = (BODY_INDEX) (-1);
	desc_729[24].type = (EIF_TYPE_INDEX) (-1);
	desc_729[24].gen_type = NULL;
	desc_729[25].body_index = (BODY_INDEX) (24);
	desc_729[25].offset = (BODY_INDEX) (-1);
	desc_729[25].type = (EIF_TYPE_INDEX) (38);
	desc_729[25].gen_type =  gen_type11_729;
	desc_729[26].body_index = (BODY_INDEX) (25);
	desc_729[26].offset = (BODY_INDEX) (-1);
	desc_729[26].type = (EIF_TYPE_INDEX) (-1);
	desc_729[26].gen_type = NULL;
	desc_729[27].body_index = (BODY_INDEX) (26);
	desc_729[27].offset = (BODY_INDEX) (-1);
	desc_729[27].type = (EIF_TYPE_INDEX) (-1);
	desc_729[27].gen_type = NULL;
	desc_729[28].body_index = (BODY_INDEX) (27);
	desc_729[28].offset = (BODY_INDEX) (-1);
	desc_729[28].type = (EIF_TYPE_INDEX) (-1);
	desc_729[28].gen_type = NULL;
	desc_729[29].body_index = (BODY_INDEX) (28);
	desc_729[29].offset = (BODY_INDEX) (-1);
	desc_729[29].type = (EIF_TYPE_INDEX) (728);
	desc_729[29].gen_type =  gen_type12_729;
	desc_729[30].body_index = (BODY_INDEX) (29);
	desc_729[30].offset = (BODY_INDEX) (-1);
	desc_729[30].type = (EIF_TYPE_INDEX) (252);
	desc_729[30].gen_type = NULL;
	desc_729[31].body_index = (BODY_INDEX) (30);
	desc_729[31].offset = (BODY_INDEX) (-1);
	desc_729[31].type = (EIF_TYPE_INDEX) (728);
	desc_729[31].gen_type =  gen_type13_729;
	desc_729[32].body_index = (BODY_INDEX) (-1);
	desc_729[32].offset = (BODY_INDEX) (-1);
	desc_729[32].type = (EIF_TYPE_INDEX) (225);
	desc_729[32].gen_type = NULL;
	desc_729[33].body_index = (BODY_INDEX) (-1);
	desc_729[33].offset = (BODY_INDEX) (-1);
	desc_729[33].type = (EIF_TYPE_INDEX) (225);
	desc_729[33].gen_type = NULL;
	desc_729[34].body_index = (BODY_INDEX) (2136);
	desc_729[34].offset = (BODY_INDEX) (-1);
	desc_729[34].type = (EIF_TYPE_INDEX) (225);
	desc_729[34].gen_type = NULL;
	desc_729[35].body_index = (BODY_INDEX) (2137);
	desc_729[35].offset = (BODY_INDEX) (0);
	desc_729[35].type = (EIF_TYPE_INDEX) (225);
	desc_729[35].gen_type = NULL;
	desc_729[36].body_index = (BODY_INDEX) (2138);
	desc_729[36].offset = (BODY_INDEX) (-1);
	desc_729[36].type = (EIF_TYPE_INDEX) (225);
	desc_729[36].gen_type = NULL;
	desc_729[37].body_index = (BODY_INDEX) (2139);
	desc_729[37].offset = (BODY_INDEX) (-1);
	desc_729[37].type = (EIF_TYPE_INDEX) (-1);
	desc_729[37].gen_type = NULL;
	desc_729[38].body_index = (BODY_INDEX) (2140);
	desc_729[38].offset = (BODY_INDEX) (-1);
	desc_729[38].type = (EIF_TYPE_INDEX) (-1);
	desc_729[38].gen_type = NULL;
	desc_729[39].body_index = (BODY_INDEX) (-1);
	desc_729[39].offset = (BODY_INDEX) (-1);
	desc_729[39].type = (EIF_TYPE_INDEX) (719);
	desc_729[39].gen_type =  gen_type14_729;
	desc_729[40].body_index = (BODY_INDEX) (-1);
	desc_729[40].offset = (BODY_INDEX) (-1);
	desc_729[40].type = (EIF_TYPE_INDEX) (-1);
	desc_729[40].gen_type =  gen_type15_729;
	desc_729[41].body_index = (BODY_INDEX) (-1);
	desc_729[41].offset = (BODY_INDEX) (-1);
	desc_729[41].type = (EIF_TYPE_INDEX) (225);
	desc_729[41].gen_type = NULL;
}

extern void Init729(void);
void Init729(void)
{
	if (desc_fill != 0)
		build_desc_729();
	IDSC(desc_729, 0, 728);
	IDSC(desc_729 + 1, 1, 728);
	IDSC(desc_729 + 32, 84, 728);
	IDSC(desc_729 + 41, 36, 728);
}


#ifdef __cplusplus
}
#endif
