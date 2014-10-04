/*
 * Class IDENTIFIED_CONTROLLER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_9(void);
static EIF_TYPE_INDEX gen_type0_9 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_9 [] = {0xFF11,274,0xFF12,8,0xFFFF};
static EIF_TYPE_INDEX gen_type2_9 [] = {0xFF11,8,0xFFFF};
static EIF_TYPE_INDEX gen_type3_9 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_9 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_9 [] = {0xFF11,8,0xFFFF};
static EIF_TYPE_INDEX gen_type6_9 [] = {0xFF11,8,0xFFFF};
static EIF_TYPE_INDEX gen_type7_9 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_9 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_9 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_9 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_9 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_9 [] = {0xFF11,8,0xFFFF};


static struct desc_info desc_9[34];

static void build_desc_9(void) {
	desc_9[0].body_index = (BODY_INDEX) (-1);
	desc_9[0].offset = (BODY_INDEX) (-1);
	desc_9[0].type = INVALID_DTYPE;
	desc_9[0].gen_type = NULL;
	desc_9[1].body_index = (BODY_INDEX) (0);
	desc_9[1].offset = (BODY_INDEX) (-1);
	desc_9[1].type = (EIF_TYPE_INDEX) (257);
	desc_9[1].gen_type =  gen_type0_9;
	desc_9[2].body_index = (BODY_INDEX) (1);
	desc_9[2].offset = (BODY_INDEX) (-1);
	desc_9[2].type = (EIF_TYPE_INDEX) (274);
	desc_9[2].gen_type =  gen_type1_9;
	desc_9[3].body_index = (BODY_INDEX) (2);
	desc_9[3].offset = (BODY_INDEX) (-1);
	desc_9[3].type = (EIF_TYPE_INDEX) (225);
	desc_9[3].gen_type = NULL;
	desc_9[4].body_index = (BODY_INDEX) (3);
	desc_9[4].offset = (BODY_INDEX) (-1);
	desc_9[4].type = (EIF_TYPE_INDEX) (225);
	desc_9[4].gen_type = NULL;
	desc_9[5].body_index = (BODY_INDEX) (4);
	desc_9[5].offset = (BODY_INDEX) (-1);
	desc_9[5].type = (EIF_TYPE_INDEX) (225);
	desc_9[5].gen_type = NULL;
	desc_9[6].body_index = (BODY_INDEX) (5);
	desc_9[6].offset = (BODY_INDEX) (-1);
	desc_9[6].type = (EIF_TYPE_INDEX) (225);
	desc_9[6].gen_type = NULL;
	desc_9[7].body_index = (BODY_INDEX) (6);
	desc_9[7].offset = (BODY_INDEX) (-1);
	desc_9[7].type = (EIF_TYPE_INDEX) (225);
	desc_9[7].gen_type = NULL;
	desc_9[8].body_index = (BODY_INDEX) (7);
	desc_9[8].offset = (BODY_INDEX) (-1);
	desc_9[8].type = (EIF_TYPE_INDEX) (225);
	desc_9[8].gen_type = NULL;
	desc_9[9].body_index = (BODY_INDEX) (8);
	desc_9[9].offset = (BODY_INDEX) (-1);
	desc_9[9].type = (EIF_TYPE_INDEX) (225);
	desc_9[9].gen_type = NULL;
	desc_9[10].body_index = (BODY_INDEX) (9);
	desc_9[10].offset = (BODY_INDEX) (-1);
	desc_9[10].type = (EIF_TYPE_INDEX) (225);
	desc_9[10].gen_type = NULL;
	desc_9[11].body_index = (BODY_INDEX) (10);
	desc_9[11].offset = (BODY_INDEX) (-1);
	desc_9[11].type = (EIF_TYPE_INDEX) (8);
	desc_9[11].gen_type =  gen_type2_9;
	desc_9[12].body_index = (BODY_INDEX) (11);
	desc_9[12].offset = (BODY_INDEX) (-1);
	desc_9[12].type = (EIF_TYPE_INDEX) (-1);
	desc_9[12].gen_type = NULL;
	desc_9[13].body_index = (BODY_INDEX) (12);
	desc_9[13].offset = (BODY_INDEX) (-1);
	desc_9[13].type = (EIF_TYPE_INDEX) (-1);
	desc_9[13].gen_type = NULL;
	desc_9[14].body_index = (BODY_INDEX) (13);
	desc_9[14].offset = (BODY_INDEX) (-1);
	desc_9[14].type = (EIF_TYPE_INDEX) (0);
	desc_9[14].gen_type =  gen_type3_9;
	desc_9[15].body_index = (BODY_INDEX) (14);
	desc_9[15].offset = (BODY_INDEX) (-1);
	desc_9[15].type = (EIF_TYPE_INDEX) (0);
	desc_9[15].gen_type =  gen_type4_9;
	desc_9[16].body_index = (BODY_INDEX) (15);
	desc_9[16].offset = (BODY_INDEX) (-1);
	desc_9[16].type = (EIF_TYPE_INDEX) (8);
	desc_9[16].gen_type =  gen_type5_9;
	desc_9[17].body_index = (BODY_INDEX) (16);
	desc_9[17].offset = (BODY_INDEX) (-1);
	desc_9[17].type = (EIF_TYPE_INDEX) (8);
	desc_9[17].gen_type =  gen_type6_9;
	desc_9[18].body_index = (BODY_INDEX) (17);
	desc_9[18].offset = (BODY_INDEX) (-1);
	desc_9[18].type = (EIF_TYPE_INDEX) (0);
	desc_9[18].gen_type =  gen_type7_9;
	desc_9[19].body_index = (BODY_INDEX) (18);
	desc_9[19].offset = (BODY_INDEX) (-1);
	desc_9[19].type = (EIF_TYPE_INDEX) (-1);
	desc_9[19].gen_type = NULL;
	desc_9[20].body_index = (BODY_INDEX) (19);
	desc_9[20].offset = (BODY_INDEX) (-1);
	desc_9[20].type = (EIF_TYPE_INDEX) (-1);
	desc_9[20].gen_type = NULL;
	desc_9[21].body_index = (BODY_INDEX) (20);
	desc_9[21].offset = (BODY_INDEX) (-1);
	desc_9[21].type = (EIF_TYPE_INDEX) (18);
	desc_9[21].gen_type =  gen_type8_9;
	desc_9[22].body_index = (BODY_INDEX) (21);
	desc_9[22].offset = (BODY_INDEX) (-1);
	desc_9[22].type = (EIF_TYPE_INDEX) (257);
	desc_9[22].gen_type =  gen_type9_9;
	desc_9[23].body_index = (BODY_INDEX) (22);
	desc_9[23].offset = (BODY_INDEX) (-1);
	desc_9[23].type = (EIF_TYPE_INDEX) (257);
	desc_9[23].gen_type =  gen_type10_9;
	desc_9[24].body_index = (BODY_INDEX) (23);
	desc_9[24].offset = (BODY_INDEX) (-1);
	desc_9[24].type = (EIF_TYPE_INDEX) (-1);
	desc_9[24].gen_type = NULL;
	desc_9[25].body_index = (BODY_INDEX) (24);
	desc_9[25].offset = (BODY_INDEX) (-1);
	desc_9[25].type = (EIF_TYPE_INDEX) (38);
	desc_9[25].gen_type =  gen_type11_9;
	desc_9[26].body_index = (BODY_INDEX) (25);
	desc_9[26].offset = (BODY_INDEX) (-1);
	desc_9[26].type = (EIF_TYPE_INDEX) (-1);
	desc_9[26].gen_type = NULL;
	desc_9[27].body_index = (BODY_INDEX) (26);
	desc_9[27].offset = (BODY_INDEX) (-1);
	desc_9[27].type = (EIF_TYPE_INDEX) (-1);
	desc_9[27].gen_type = NULL;
	desc_9[28].body_index = (BODY_INDEX) (27);
	desc_9[28].offset = (BODY_INDEX) (-1);
	desc_9[28].type = (EIF_TYPE_INDEX) (-1);
	desc_9[28].gen_type = NULL;
	desc_9[29].body_index = (BODY_INDEX) (28);
	desc_9[29].offset = (BODY_INDEX) (-1);
	desc_9[29].type = (EIF_TYPE_INDEX) (8);
	desc_9[29].gen_type = NULL;
	desc_9[30].body_index = (BODY_INDEX) (29);
	desc_9[30].offset = (BODY_INDEX) (-1);
	desc_9[30].type = (EIF_TYPE_INDEX) (252);
	desc_9[30].gen_type = NULL;
	desc_9[31].body_index = (BODY_INDEX) (30);
	desc_9[31].offset = (BODY_INDEX) (-1);
	desc_9[31].type = (EIF_TYPE_INDEX) (8);
	desc_9[31].gen_type =  gen_type12_9;
	desc_9[32].body_index = (BODY_INDEX) (68);
	desc_9[32].offset = (BODY_INDEX) (-1);
	desc_9[32].type = (EIF_TYPE_INDEX) (246);
	desc_9[32].gen_type = NULL;
	desc_9[33].body_index = (BODY_INDEX) (69);
	desc_9[33].offset = (BODY_INDEX) (-1);
	desc_9[33].type = (EIF_TYPE_INDEX) (-1);
	desc_9[33].gen_type = NULL;
}

extern void Init9(void);
void Init9(void)
{
	if (desc_fill != 0)
		build_desc_9();
	IDSC(desc_9, 0, 8);
	IDSC(desc_9 + 1, 1, 8);
	IDSC(desc_9 + 32, 307, 8);
}


#ifdef __cplusplus
}
#endif
