/*
 * Class DIFFERENTIAL_DRIVE
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_145(void);
static EIF_TYPE_INDEX gen_type0_145 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_145 [] = {0xFF11,274,0xFF12,144,0xFFFF};
static EIF_TYPE_INDEX gen_type2_145 [] = {0xFF11,144,0xFFFF};
static EIF_TYPE_INDEX gen_type3_145 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_145 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_145 [] = {0xFF11,144,0xFFFF};
static EIF_TYPE_INDEX gen_type6_145 [] = {0xFF11,144,0xFFFF};
static EIF_TYPE_INDEX gen_type7_145 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_145 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_145 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_145 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_145 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_145 [] = {0xFF11,144,0xFFFF};


static struct desc_info desc_145[34];

static void build_desc_145(void) {
	desc_145[0].body_index = (BODY_INDEX) (-1);
	desc_145[0].offset = (BODY_INDEX) (-1);
	desc_145[0].type = INVALID_DTYPE;
	desc_145[0].gen_type = NULL;
	desc_145[1].body_index = (BODY_INDEX) (0);
	desc_145[1].offset = (BODY_INDEX) (-1);
	desc_145[1].type = (EIF_TYPE_INDEX) (257);
	desc_145[1].gen_type =  gen_type0_145;
	desc_145[2].body_index = (BODY_INDEX) (1);
	desc_145[2].offset = (BODY_INDEX) (-1);
	desc_145[2].type = (EIF_TYPE_INDEX) (274);
	desc_145[2].gen_type =  gen_type1_145;
	desc_145[3].body_index = (BODY_INDEX) (2);
	desc_145[3].offset = (BODY_INDEX) (-1);
	desc_145[3].type = (EIF_TYPE_INDEX) (225);
	desc_145[3].gen_type = NULL;
	desc_145[4].body_index = (BODY_INDEX) (3);
	desc_145[4].offset = (BODY_INDEX) (-1);
	desc_145[4].type = (EIF_TYPE_INDEX) (225);
	desc_145[4].gen_type = NULL;
	desc_145[5].body_index = (BODY_INDEX) (4);
	desc_145[5].offset = (BODY_INDEX) (-1);
	desc_145[5].type = (EIF_TYPE_INDEX) (225);
	desc_145[5].gen_type = NULL;
	desc_145[6].body_index = (BODY_INDEX) (5);
	desc_145[6].offset = (BODY_INDEX) (-1);
	desc_145[6].type = (EIF_TYPE_INDEX) (225);
	desc_145[6].gen_type = NULL;
	desc_145[7].body_index = (BODY_INDEX) (6);
	desc_145[7].offset = (BODY_INDEX) (-1);
	desc_145[7].type = (EIF_TYPE_INDEX) (225);
	desc_145[7].gen_type = NULL;
	desc_145[8].body_index = (BODY_INDEX) (7);
	desc_145[8].offset = (BODY_INDEX) (-1);
	desc_145[8].type = (EIF_TYPE_INDEX) (225);
	desc_145[8].gen_type = NULL;
	desc_145[9].body_index = (BODY_INDEX) (8);
	desc_145[9].offset = (BODY_INDEX) (-1);
	desc_145[9].type = (EIF_TYPE_INDEX) (225);
	desc_145[9].gen_type = NULL;
	desc_145[10].body_index = (BODY_INDEX) (9);
	desc_145[10].offset = (BODY_INDEX) (-1);
	desc_145[10].type = (EIF_TYPE_INDEX) (225);
	desc_145[10].gen_type = NULL;
	desc_145[11].body_index = (BODY_INDEX) (10);
	desc_145[11].offset = (BODY_INDEX) (-1);
	desc_145[11].type = (EIF_TYPE_INDEX) (144);
	desc_145[11].gen_type =  gen_type2_145;
	desc_145[12].body_index = (BODY_INDEX) (11);
	desc_145[12].offset = (BODY_INDEX) (-1);
	desc_145[12].type = (EIF_TYPE_INDEX) (-1);
	desc_145[12].gen_type = NULL;
	desc_145[13].body_index = (BODY_INDEX) (12);
	desc_145[13].offset = (BODY_INDEX) (-1);
	desc_145[13].type = (EIF_TYPE_INDEX) (-1);
	desc_145[13].gen_type = NULL;
	desc_145[14].body_index = (BODY_INDEX) (13);
	desc_145[14].offset = (BODY_INDEX) (-1);
	desc_145[14].type = (EIF_TYPE_INDEX) (0);
	desc_145[14].gen_type =  gen_type3_145;
	desc_145[15].body_index = (BODY_INDEX) (14);
	desc_145[15].offset = (BODY_INDEX) (-1);
	desc_145[15].type = (EIF_TYPE_INDEX) (0);
	desc_145[15].gen_type =  gen_type4_145;
	desc_145[16].body_index = (BODY_INDEX) (15);
	desc_145[16].offset = (BODY_INDEX) (-1);
	desc_145[16].type = (EIF_TYPE_INDEX) (144);
	desc_145[16].gen_type =  gen_type5_145;
	desc_145[17].body_index = (BODY_INDEX) (16);
	desc_145[17].offset = (BODY_INDEX) (-1);
	desc_145[17].type = (EIF_TYPE_INDEX) (144);
	desc_145[17].gen_type =  gen_type6_145;
	desc_145[18].body_index = (BODY_INDEX) (17);
	desc_145[18].offset = (BODY_INDEX) (-1);
	desc_145[18].type = (EIF_TYPE_INDEX) (0);
	desc_145[18].gen_type =  gen_type7_145;
	desc_145[19].body_index = (BODY_INDEX) (18);
	desc_145[19].offset = (BODY_INDEX) (-1);
	desc_145[19].type = (EIF_TYPE_INDEX) (-1);
	desc_145[19].gen_type = NULL;
	desc_145[20].body_index = (BODY_INDEX) (19);
	desc_145[20].offset = (BODY_INDEX) (-1);
	desc_145[20].type = (EIF_TYPE_INDEX) (-1);
	desc_145[20].gen_type = NULL;
	desc_145[21].body_index = (BODY_INDEX) (20);
	desc_145[21].offset = (BODY_INDEX) (-1);
	desc_145[21].type = (EIF_TYPE_INDEX) (18);
	desc_145[21].gen_type =  gen_type8_145;
	desc_145[22].body_index = (BODY_INDEX) (21);
	desc_145[22].offset = (BODY_INDEX) (-1);
	desc_145[22].type = (EIF_TYPE_INDEX) (257);
	desc_145[22].gen_type =  gen_type9_145;
	desc_145[23].body_index = (BODY_INDEX) (22);
	desc_145[23].offset = (BODY_INDEX) (-1);
	desc_145[23].type = (EIF_TYPE_INDEX) (257);
	desc_145[23].gen_type =  gen_type10_145;
	desc_145[24].body_index = (BODY_INDEX) (23);
	desc_145[24].offset = (BODY_INDEX) (-1);
	desc_145[24].type = (EIF_TYPE_INDEX) (-1);
	desc_145[24].gen_type = NULL;
	desc_145[25].body_index = (BODY_INDEX) (24);
	desc_145[25].offset = (BODY_INDEX) (-1);
	desc_145[25].type = (EIF_TYPE_INDEX) (38);
	desc_145[25].gen_type =  gen_type11_145;
	desc_145[26].body_index = (BODY_INDEX) (25);
	desc_145[26].offset = (BODY_INDEX) (-1);
	desc_145[26].type = (EIF_TYPE_INDEX) (-1);
	desc_145[26].gen_type = NULL;
	desc_145[27].body_index = (BODY_INDEX) (26);
	desc_145[27].offset = (BODY_INDEX) (-1);
	desc_145[27].type = (EIF_TYPE_INDEX) (-1);
	desc_145[27].gen_type = NULL;
	desc_145[28].body_index = (BODY_INDEX) (27);
	desc_145[28].offset = (BODY_INDEX) (-1);
	desc_145[28].type = (EIF_TYPE_INDEX) (-1);
	desc_145[28].gen_type = NULL;
	desc_145[29].body_index = (BODY_INDEX) (28);
	desc_145[29].offset = (BODY_INDEX) (-1);
	desc_145[29].type = (EIF_TYPE_INDEX) (144);
	desc_145[29].gen_type = NULL;
	desc_145[30].body_index = (BODY_INDEX) (29);
	desc_145[30].offset = (BODY_INDEX) (-1);
	desc_145[30].type = (EIF_TYPE_INDEX) (252);
	desc_145[30].gen_type = NULL;
	desc_145[31].body_index = (BODY_INDEX) (30);
	desc_145[31].offset = (BODY_INDEX) (-1);
	desc_145[31].type = (EIF_TYPE_INDEX) (144);
	desc_145[31].gen_type =  gen_type12_145;
	desc_145[32].body_index = (BODY_INDEX) (-1);
	desc_145[32].offset = (BODY_INDEX) (-1);
	desc_145[32].type = (EIF_TYPE_INDEX) (-1);
	desc_145[32].gen_type = NULL;
	desc_145[33].body_index = (BODY_INDEX) (-1);
	desc_145[33].offset = (BODY_INDEX) (-1);
	desc_145[33].type = (EIF_TYPE_INDEX) (-1);
	desc_145[33].gen_type = NULL;
}

extern void Init145(void);
void Init145(void)
{
	if (desc_fill != 0)
		build_desc_145();
	IDSC(desc_145, 0, 144);
	IDSC(desc_145 + 1, 1, 144);
	IDSC(desc_145 + 32, 265, 144);
}


#ifdef __cplusplus
}
#endif
