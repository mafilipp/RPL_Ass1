/*
 * Class ACTUATOR
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_144(void);
static EIF_TYPE_INDEX gen_type0_144 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_144 [] = {0xFF11,274,0xFF12,143,0xFFFF};
static EIF_TYPE_INDEX gen_type2_144 [] = {0xFF11,143,0xFFFF};
static EIF_TYPE_INDEX gen_type3_144 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_144 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_144 [] = {0xFF11,143,0xFFFF};
static EIF_TYPE_INDEX gen_type6_144 [] = {0xFF11,143,0xFFFF};
static EIF_TYPE_INDEX gen_type7_144 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_144 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_144 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_144 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_144 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_144 [] = {0xFF11,143,0xFFFF};


static struct desc_info desc_144[32];

static void build_desc_144(void) {
	desc_144[0].body_index = (BODY_INDEX) (-1);
	desc_144[0].offset = (BODY_INDEX) (-1);
	desc_144[0].type = INVALID_DTYPE;
	desc_144[0].gen_type = NULL;
	desc_144[1].body_index = (BODY_INDEX) (0);
	desc_144[1].offset = (BODY_INDEX) (-1);
	desc_144[1].type = (EIF_TYPE_INDEX) (257);
	desc_144[1].gen_type =  gen_type0_144;
	desc_144[2].body_index = (BODY_INDEX) (1);
	desc_144[2].offset = (BODY_INDEX) (-1);
	desc_144[2].type = (EIF_TYPE_INDEX) (274);
	desc_144[2].gen_type =  gen_type1_144;
	desc_144[3].body_index = (BODY_INDEX) (2);
	desc_144[3].offset = (BODY_INDEX) (-1);
	desc_144[3].type = (EIF_TYPE_INDEX) (225);
	desc_144[3].gen_type = NULL;
	desc_144[4].body_index = (BODY_INDEX) (3);
	desc_144[4].offset = (BODY_INDEX) (-1);
	desc_144[4].type = (EIF_TYPE_INDEX) (225);
	desc_144[4].gen_type = NULL;
	desc_144[5].body_index = (BODY_INDEX) (4);
	desc_144[5].offset = (BODY_INDEX) (-1);
	desc_144[5].type = (EIF_TYPE_INDEX) (225);
	desc_144[5].gen_type = NULL;
	desc_144[6].body_index = (BODY_INDEX) (5);
	desc_144[6].offset = (BODY_INDEX) (-1);
	desc_144[6].type = (EIF_TYPE_INDEX) (225);
	desc_144[6].gen_type = NULL;
	desc_144[7].body_index = (BODY_INDEX) (6);
	desc_144[7].offset = (BODY_INDEX) (-1);
	desc_144[7].type = (EIF_TYPE_INDEX) (225);
	desc_144[7].gen_type = NULL;
	desc_144[8].body_index = (BODY_INDEX) (7);
	desc_144[8].offset = (BODY_INDEX) (-1);
	desc_144[8].type = (EIF_TYPE_INDEX) (225);
	desc_144[8].gen_type = NULL;
	desc_144[9].body_index = (BODY_INDEX) (8);
	desc_144[9].offset = (BODY_INDEX) (-1);
	desc_144[9].type = (EIF_TYPE_INDEX) (225);
	desc_144[9].gen_type = NULL;
	desc_144[10].body_index = (BODY_INDEX) (9);
	desc_144[10].offset = (BODY_INDEX) (-1);
	desc_144[10].type = (EIF_TYPE_INDEX) (225);
	desc_144[10].gen_type = NULL;
	desc_144[11].body_index = (BODY_INDEX) (10);
	desc_144[11].offset = (BODY_INDEX) (-1);
	desc_144[11].type = (EIF_TYPE_INDEX) (143);
	desc_144[11].gen_type =  gen_type2_144;
	desc_144[12].body_index = (BODY_INDEX) (11);
	desc_144[12].offset = (BODY_INDEX) (-1);
	desc_144[12].type = (EIF_TYPE_INDEX) (-1);
	desc_144[12].gen_type = NULL;
	desc_144[13].body_index = (BODY_INDEX) (12);
	desc_144[13].offset = (BODY_INDEX) (-1);
	desc_144[13].type = (EIF_TYPE_INDEX) (-1);
	desc_144[13].gen_type = NULL;
	desc_144[14].body_index = (BODY_INDEX) (13);
	desc_144[14].offset = (BODY_INDEX) (-1);
	desc_144[14].type = (EIF_TYPE_INDEX) (0);
	desc_144[14].gen_type =  gen_type3_144;
	desc_144[15].body_index = (BODY_INDEX) (14);
	desc_144[15].offset = (BODY_INDEX) (-1);
	desc_144[15].type = (EIF_TYPE_INDEX) (0);
	desc_144[15].gen_type =  gen_type4_144;
	desc_144[16].body_index = (BODY_INDEX) (15);
	desc_144[16].offset = (BODY_INDEX) (-1);
	desc_144[16].type = (EIF_TYPE_INDEX) (143);
	desc_144[16].gen_type =  gen_type5_144;
	desc_144[17].body_index = (BODY_INDEX) (16);
	desc_144[17].offset = (BODY_INDEX) (-1);
	desc_144[17].type = (EIF_TYPE_INDEX) (143);
	desc_144[17].gen_type =  gen_type6_144;
	desc_144[18].body_index = (BODY_INDEX) (17);
	desc_144[18].offset = (BODY_INDEX) (-1);
	desc_144[18].type = (EIF_TYPE_INDEX) (0);
	desc_144[18].gen_type =  gen_type7_144;
	desc_144[19].body_index = (BODY_INDEX) (18);
	desc_144[19].offset = (BODY_INDEX) (-1);
	desc_144[19].type = (EIF_TYPE_INDEX) (-1);
	desc_144[19].gen_type = NULL;
	desc_144[20].body_index = (BODY_INDEX) (19);
	desc_144[20].offset = (BODY_INDEX) (-1);
	desc_144[20].type = (EIF_TYPE_INDEX) (-1);
	desc_144[20].gen_type = NULL;
	desc_144[21].body_index = (BODY_INDEX) (20);
	desc_144[21].offset = (BODY_INDEX) (-1);
	desc_144[21].type = (EIF_TYPE_INDEX) (18);
	desc_144[21].gen_type =  gen_type8_144;
	desc_144[22].body_index = (BODY_INDEX) (21);
	desc_144[22].offset = (BODY_INDEX) (-1);
	desc_144[22].type = (EIF_TYPE_INDEX) (257);
	desc_144[22].gen_type =  gen_type9_144;
	desc_144[23].body_index = (BODY_INDEX) (22);
	desc_144[23].offset = (BODY_INDEX) (-1);
	desc_144[23].type = (EIF_TYPE_INDEX) (257);
	desc_144[23].gen_type =  gen_type10_144;
	desc_144[24].body_index = (BODY_INDEX) (23);
	desc_144[24].offset = (BODY_INDEX) (-1);
	desc_144[24].type = (EIF_TYPE_INDEX) (-1);
	desc_144[24].gen_type = NULL;
	desc_144[25].body_index = (BODY_INDEX) (24);
	desc_144[25].offset = (BODY_INDEX) (-1);
	desc_144[25].type = (EIF_TYPE_INDEX) (38);
	desc_144[25].gen_type =  gen_type11_144;
	desc_144[26].body_index = (BODY_INDEX) (25);
	desc_144[26].offset = (BODY_INDEX) (-1);
	desc_144[26].type = (EIF_TYPE_INDEX) (-1);
	desc_144[26].gen_type = NULL;
	desc_144[27].body_index = (BODY_INDEX) (26);
	desc_144[27].offset = (BODY_INDEX) (-1);
	desc_144[27].type = (EIF_TYPE_INDEX) (-1);
	desc_144[27].gen_type = NULL;
	desc_144[28].body_index = (BODY_INDEX) (27);
	desc_144[28].offset = (BODY_INDEX) (-1);
	desc_144[28].type = (EIF_TYPE_INDEX) (-1);
	desc_144[28].gen_type = NULL;
	desc_144[29].body_index = (BODY_INDEX) (28);
	desc_144[29].offset = (BODY_INDEX) (-1);
	desc_144[29].type = (EIF_TYPE_INDEX) (143);
	desc_144[29].gen_type = NULL;
	desc_144[30].body_index = (BODY_INDEX) (29);
	desc_144[30].offset = (BODY_INDEX) (-1);
	desc_144[30].type = (EIF_TYPE_INDEX) (252);
	desc_144[30].gen_type = NULL;
	desc_144[31].body_index = (BODY_INDEX) (30);
	desc_144[31].offset = (BODY_INDEX) (-1);
	desc_144[31].type = (EIF_TYPE_INDEX) (143);
	desc_144[31].gen_type =  gen_type12_144;
}

extern void Init144(void);
void Init144(void)
{
	if (desc_fill != 0)
		build_desc_144();
	IDSC(desc_144, 0, 143);
	IDSC(desc_144 + 1, 1, 143);
}


#ifdef __cplusplus
}
#endif
