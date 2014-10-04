/*
 * Class MISMATCH_CORRECTOR
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_205(void);
static EIF_TYPE_INDEX gen_type0_205 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_205 [] = {0xFF11,274,0xFF12,204,0xFFFF};
static EIF_TYPE_INDEX gen_type2_205 [] = {0xFF11,204,0xFFFF};
static EIF_TYPE_INDEX gen_type3_205 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_205 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_205 [] = {0xFF11,204,0xFFFF};
static EIF_TYPE_INDEX gen_type6_205 [] = {0xFF11,204,0xFFFF};
static EIF_TYPE_INDEX gen_type7_205 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_205 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_205 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_205 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_205 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_205 [] = {0xFF11,204,0xFFFF};
static EIF_TYPE_INDEX gen_type13_205 [] = {0xFF11,207,0xFFFF};


static struct desc_info desc_205[34];

static void build_desc_205(void) {
	desc_205[0].body_index = (BODY_INDEX) (-1);
	desc_205[0].offset = (BODY_INDEX) (-1);
	desc_205[0].type = INVALID_DTYPE;
	desc_205[0].gen_type = NULL;
	desc_205[1].body_index = (BODY_INDEX) (0);
	desc_205[1].offset = (BODY_INDEX) (-1);
	desc_205[1].type = (EIF_TYPE_INDEX) (257);
	desc_205[1].gen_type =  gen_type0_205;
	desc_205[2].body_index = (BODY_INDEX) (1);
	desc_205[2].offset = (BODY_INDEX) (-1);
	desc_205[2].type = (EIF_TYPE_INDEX) (274);
	desc_205[2].gen_type =  gen_type1_205;
	desc_205[3].body_index = (BODY_INDEX) (2);
	desc_205[3].offset = (BODY_INDEX) (-1);
	desc_205[3].type = (EIF_TYPE_INDEX) (225);
	desc_205[3].gen_type = NULL;
	desc_205[4].body_index = (BODY_INDEX) (3);
	desc_205[4].offset = (BODY_INDEX) (-1);
	desc_205[4].type = (EIF_TYPE_INDEX) (225);
	desc_205[4].gen_type = NULL;
	desc_205[5].body_index = (BODY_INDEX) (4);
	desc_205[5].offset = (BODY_INDEX) (-1);
	desc_205[5].type = (EIF_TYPE_INDEX) (225);
	desc_205[5].gen_type = NULL;
	desc_205[6].body_index = (BODY_INDEX) (5);
	desc_205[6].offset = (BODY_INDEX) (-1);
	desc_205[6].type = (EIF_TYPE_INDEX) (225);
	desc_205[6].gen_type = NULL;
	desc_205[7].body_index = (BODY_INDEX) (6);
	desc_205[7].offset = (BODY_INDEX) (-1);
	desc_205[7].type = (EIF_TYPE_INDEX) (225);
	desc_205[7].gen_type = NULL;
	desc_205[8].body_index = (BODY_INDEX) (7);
	desc_205[8].offset = (BODY_INDEX) (-1);
	desc_205[8].type = (EIF_TYPE_INDEX) (225);
	desc_205[8].gen_type = NULL;
	desc_205[9].body_index = (BODY_INDEX) (8);
	desc_205[9].offset = (BODY_INDEX) (-1);
	desc_205[9].type = (EIF_TYPE_INDEX) (225);
	desc_205[9].gen_type = NULL;
	desc_205[10].body_index = (BODY_INDEX) (9);
	desc_205[10].offset = (BODY_INDEX) (-1);
	desc_205[10].type = (EIF_TYPE_INDEX) (225);
	desc_205[10].gen_type = NULL;
	desc_205[11].body_index = (BODY_INDEX) (10);
	desc_205[11].offset = (BODY_INDEX) (-1);
	desc_205[11].type = (EIF_TYPE_INDEX) (204);
	desc_205[11].gen_type =  gen_type2_205;
	desc_205[12].body_index = (BODY_INDEX) (11);
	desc_205[12].offset = (BODY_INDEX) (-1);
	desc_205[12].type = (EIF_TYPE_INDEX) (-1);
	desc_205[12].gen_type = NULL;
	desc_205[13].body_index = (BODY_INDEX) (12);
	desc_205[13].offset = (BODY_INDEX) (-1);
	desc_205[13].type = (EIF_TYPE_INDEX) (-1);
	desc_205[13].gen_type = NULL;
	desc_205[14].body_index = (BODY_INDEX) (13);
	desc_205[14].offset = (BODY_INDEX) (-1);
	desc_205[14].type = (EIF_TYPE_INDEX) (0);
	desc_205[14].gen_type =  gen_type3_205;
	desc_205[15].body_index = (BODY_INDEX) (14);
	desc_205[15].offset = (BODY_INDEX) (-1);
	desc_205[15].type = (EIF_TYPE_INDEX) (0);
	desc_205[15].gen_type =  gen_type4_205;
	desc_205[16].body_index = (BODY_INDEX) (15);
	desc_205[16].offset = (BODY_INDEX) (-1);
	desc_205[16].type = (EIF_TYPE_INDEX) (204);
	desc_205[16].gen_type =  gen_type5_205;
	desc_205[17].body_index = (BODY_INDEX) (16);
	desc_205[17].offset = (BODY_INDEX) (-1);
	desc_205[17].type = (EIF_TYPE_INDEX) (204);
	desc_205[17].gen_type =  gen_type6_205;
	desc_205[18].body_index = (BODY_INDEX) (17);
	desc_205[18].offset = (BODY_INDEX) (-1);
	desc_205[18].type = (EIF_TYPE_INDEX) (0);
	desc_205[18].gen_type =  gen_type7_205;
	desc_205[19].body_index = (BODY_INDEX) (18);
	desc_205[19].offset = (BODY_INDEX) (-1);
	desc_205[19].type = (EIF_TYPE_INDEX) (-1);
	desc_205[19].gen_type = NULL;
	desc_205[20].body_index = (BODY_INDEX) (19);
	desc_205[20].offset = (BODY_INDEX) (-1);
	desc_205[20].type = (EIF_TYPE_INDEX) (-1);
	desc_205[20].gen_type = NULL;
	desc_205[21].body_index = (BODY_INDEX) (20);
	desc_205[21].offset = (BODY_INDEX) (-1);
	desc_205[21].type = (EIF_TYPE_INDEX) (18);
	desc_205[21].gen_type =  gen_type8_205;
	desc_205[22].body_index = (BODY_INDEX) (21);
	desc_205[22].offset = (BODY_INDEX) (-1);
	desc_205[22].type = (EIF_TYPE_INDEX) (257);
	desc_205[22].gen_type =  gen_type9_205;
	desc_205[23].body_index = (BODY_INDEX) (22);
	desc_205[23].offset = (BODY_INDEX) (-1);
	desc_205[23].type = (EIF_TYPE_INDEX) (257);
	desc_205[23].gen_type =  gen_type10_205;
	desc_205[24].body_index = (BODY_INDEX) (23);
	desc_205[24].offset = (BODY_INDEX) (-1);
	desc_205[24].type = (EIF_TYPE_INDEX) (-1);
	desc_205[24].gen_type = NULL;
	desc_205[25].body_index = (BODY_INDEX) (24);
	desc_205[25].offset = (BODY_INDEX) (-1);
	desc_205[25].type = (EIF_TYPE_INDEX) (38);
	desc_205[25].gen_type =  gen_type11_205;
	desc_205[26].body_index = (BODY_INDEX) (25);
	desc_205[26].offset = (BODY_INDEX) (-1);
	desc_205[26].type = (EIF_TYPE_INDEX) (-1);
	desc_205[26].gen_type = NULL;
	desc_205[27].body_index = (BODY_INDEX) (26);
	desc_205[27].offset = (BODY_INDEX) (-1);
	desc_205[27].type = (EIF_TYPE_INDEX) (-1);
	desc_205[27].gen_type = NULL;
	desc_205[28].body_index = (BODY_INDEX) (27);
	desc_205[28].offset = (BODY_INDEX) (-1);
	desc_205[28].type = (EIF_TYPE_INDEX) (-1);
	desc_205[28].gen_type = NULL;
	desc_205[29].body_index = (BODY_INDEX) (28);
	desc_205[29].offset = (BODY_INDEX) (-1);
	desc_205[29].type = (EIF_TYPE_INDEX) (204);
	desc_205[29].gen_type = NULL;
	desc_205[30].body_index = (BODY_INDEX) (29);
	desc_205[30].offset = (BODY_INDEX) (-1);
	desc_205[30].type = (EIF_TYPE_INDEX) (252);
	desc_205[30].gen_type = NULL;
	desc_205[31].body_index = (BODY_INDEX) (30);
	desc_205[31].offset = (BODY_INDEX) (-1);
	desc_205[31].type = (EIF_TYPE_INDEX) (204);
	desc_205[31].gen_type =  gen_type12_205;
	desc_205[32].body_index = (BODY_INDEX) (7088);
	desc_205[32].offset = (BODY_INDEX) (-1);
	desc_205[32].type = (EIF_TYPE_INDEX) (-1);
	desc_205[32].gen_type = NULL;
	desc_205[33].body_index = (BODY_INDEX) (7089);
	desc_205[33].offset = (BODY_INDEX) (-1);
	desc_205[33].type = (EIF_TYPE_INDEX) (207);
	desc_205[33].gen_type =  gen_type13_205;
}

extern void Init205(void);
void Init205(void)
{
	if (desc_fill != 0)
		build_desc_205();
	IDSC(desc_205, 0, 204);
	IDSC(desc_205 + 1, 1, 204);
	IDSC(desc_205 + 32, 325, 204);
}


#ifdef __cplusplus
}
#endif
