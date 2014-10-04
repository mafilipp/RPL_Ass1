/*
 * Class CELL [BOOLEAN]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_405(void);
static EIF_TYPE_INDEX gen_type0_405 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_405 [] = {0xFF11,274,0xFF12,404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type2_405 [] = {0xFF11,404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type3_405 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_405 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_405 [] = {0xFF11,404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type6_405 [] = {0xFF11,404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type7_405 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_405 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_405 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_405 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_405 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_405 [] = {404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type13_405 [] = {0xFF11,404,225,0xFFFF};
static EIF_TYPE_INDEX gen_type14_405 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_405 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_405[36];

static void build_desc_405(void) {
	desc_405[0].body_index = (BODY_INDEX) (-1);
	desc_405[0].offset = (BODY_INDEX) (-1);
	desc_405[0].type = INVALID_DTYPE;
	desc_405[0].gen_type = NULL;
	desc_405[1].body_index = (BODY_INDEX) (0);
	desc_405[1].offset = (BODY_INDEX) (-1);
	desc_405[1].type = (EIF_TYPE_INDEX) (257);
	desc_405[1].gen_type =  gen_type0_405;
	desc_405[2].body_index = (BODY_INDEX) (1);
	desc_405[2].offset = (BODY_INDEX) (-1);
	desc_405[2].type = (EIF_TYPE_INDEX) (274);
	desc_405[2].gen_type =  gen_type1_405;
	desc_405[3].body_index = (BODY_INDEX) (2);
	desc_405[3].offset = (BODY_INDEX) (-1);
	desc_405[3].type = (EIF_TYPE_INDEX) (225);
	desc_405[3].gen_type = NULL;
	desc_405[4].body_index = (BODY_INDEX) (3);
	desc_405[4].offset = (BODY_INDEX) (-1);
	desc_405[4].type = (EIF_TYPE_INDEX) (225);
	desc_405[4].gen_type = NULL;
	desc_405[5].body_index = (BODY_INDEX) (4);
	desc_405[5].offset = (BODY_INDEX) (-1);
	desc_405[5].type = (EIF_TYPE_INDEX) (225);
	desc_405[5].gen_type = NULL;
	desc_405[6].body_index = (BODY_INDEX) (5);
	desc_405[6].offset = (BODY_INDEX) (-1);
	desc_405[6].type = (EIF_TYPE_INDEX) (225);
	desc_405[6].gen_type = NULL;
	desc_405[7].body_index = (BODY_INDEX) (6);
	desc_405[7].offset = (BODY_INDEX) (-1);
	desc_405[7].type = (EIF_TYPE_INDEX) (225);
	desc_405[7].gen_type = NULL;
	desc_405[8].body_index = (BODY_INDEX) (7);
	desc_405[8].offset = (BODY_INDEX) (-1);
	desc_405[8].type = (EIF_TYPE_INDEX) (225);
	desc_405[8].gen_type = NULL;
	desc_405[9].body_index = (BODY_INDEX) (8);
	desc_405[9].offset = (BODY_INDEX) (-1);
	desc_405[9].type = (EIF_TYPE_INDEX) (225);
	desc_405[9].gen_type = NULL;
	desc_405[10].body_index = (BODY_INDEX) (9);
	desc_405[10].offset = (BODY_INDEX) (-1);
	desc_405[10].type = (EIF_TYPE_INDEX) (225);
	desc_405[10].gen_type = NULL;
	desc_405[11].body_index = (BODY_INDEX) (10);
	desc_405[11].offset = (BODY_INDEX) (-1);
	desc_405[11].type = (EIF_TYPE_INDEX) (404);
	desc_405[11].gen_type =  gen_type2_405;
	desc_405[12].body_index = (BODY_INDEX) (11);
	desc_405[12].offset = (BODY_INDEX) (-1);
	desc_405[12].type = (EIF_TYPE_INDEX) (-1);
	desc_405[12].gen_type = NULL;
	desc_405[13].body_index = (BODY_INDEX) (12);
	desc_405[13].offset = (BODY_INDEX) (-1);
	desc_405[13].type = (EIF_TYPE_INDEX) (-1);
	desc_405[13].gen_type = NULL;
	desc_405[14].body_index = (BODY_INDEX) (13);
	desc_405[14].offset = (BODY_INDEX) (-1);
	desc_405[14].type = (EIF_TYPE_INDEX) (0);
	desc_405[14].gen_type =  gen_type3_405;
	desc_405[15].body_index = (BODY_INDEX) (14);
	desc_405[15].offset = (BODY_INDEX) (-1);
	desc_405[15].type = (EIF_TYPE_INDEX) (0);
	desc_405[15].gen_type =  gen_type4_405;
	desc_405[16].body_index = (BODY_INDEX) (15);
	desc_405[16].offset = (BODY_INDEX) (-1);
	desc_405[16].type = (EIF_TYPE_INDEX) (404);
	desc_405[16].gen_type =  gen_type5_405;
	desc_405[17].body_index = (BODY_INDEX) (16);
	desc_405[17].offset = (BODY_INDEX) (-1);
	desc_405[17].type = (EIF_TYPE_INDEX) (404);
	desc_405[17].gen_type =  gen_type6_405;
	desc_405[18].body_index = (BODY_INDEX) (17);
	desc_405[18].offset = (BODY_INDEX) (-1);
	desc_405[18].type = (EIF_TYPE_INDEX) (0);
	desc_405[18].gen_type =  gen_type7_405;
	desc_405[19].body_index = (BODY_INDEX) (18);
	desc_405[19].offset = (BODY_INDEX) (-1);
	desc_405[19].type = (EIF_TYPE_INDEX) (-1);
	desc_405[19].gen_type = NULL;
	desc_405[20].body_index = (BODY_INDEX) (19);
	desc_405[20].offset = (BODY_INDEX) (-1);
	desc_405[20].type = (EIF_TYPE_INDEX) (-1);
	desc_405[20].gen_type = NULL;
	desc_405[21].body_index = (BODY_INDEX) (20);
	desc_405[21].offset = (BODY_INDEX) (-1);
	desc_405[21].type = (EIF_TYPE_INDEX) (18);
	desc_405[21].gen_type =  gen_type8_405;
	desc_405[22].body_index = (BODY_INDEX) (21);
	desc_405[22].offset = (BODY_INDEX) (-1);
	desc_405[22].type = (EIF_TYPE_INDEX) (257);
	desc_405[22].gen_type =  gen_type9_405;
	desc_405[23].body_index = (BODY_INDEX) (22);
	desc_405[23].offset = (BODY_INDEX) (-1);
	desc_405[23].type = (EIF_TYPE_INDEX) (257);
	desc_405[23].gen_type =  gen_type10_405;
	desc_405[24].body_index = (BODY_INDEX) (23);
	desc_405[24].offset = (BODY_INDEX) (-1);
	desc_405[24].type = (EIF_TYPE_INDEX) (-1);
	desc_405[24].gen_type = NULL;
	desc_405[25].body_index = (BODY_INDEX) (24);
	desc_405[25].offset = (BODY_INDEX) (-1);
	desc_405[25].type = (EIF_TYPE_INDEX) (38);
	desc_405[25].gen_type =  gen_type11_405;
	desc_405[26].body_index = (BODY_INDEX) (25);
	desc_405[26].offset = (BODY_INDEX) (-1);
	desc_405[26].type = (EIF_TYPE_INDEX) (-1);
	desc_405[26].gen_type = NULL;
	desc_405[27].body_index = (BODY_INDEX) (26);
	desc_405[27].offset = (BODY_INDEX) (-1);
	desc_405[27].type = (EIF_TYPE_INDEX) (-1);
	desc_405[27].gen_type = NULL;
	desc_405[28].body_index = (BODY_INDEX) (27);
	desc_405[28].offset = (BODY_INDEX) (-1);
	desc_405[28].type = (EIF_TYPE_INDEX) (-1);
	desc_405[28].gen_type = NULL;
	desc_405[29].body_index = (BODY_INDEX) (28);
	desc_405[29].offset = (BODY_INDEX) (-1);
	desc_405[29].type = (EIF_TYPE_INDEX) (404);
	desc_405[29].gen_type =  gen_type12_405;
	desc_405[30].body_index = (BODY_INDEX) (29);
	desc_405[30].offset = (BODY_INDEX) (-1);
	desc_405[30].type = (EIF_TYPE_INDEX) (252);
	desc_405[30].gen_type = NULL;
	desc_405[31].body_index = (BODY_INDEX) (30);
	desc_405[31].offset = (BODY_INDEX) (-1);
	desc_405[31].type = (EIF_TYPE_INDEX) (404);
	desc_405[31].gen_type =  gen_type13_405;
	desc_405[32].body_index = (BODY_INDEX) (2057);
	desc_405[32].offset = (BODY_INDEX) (0);
	desc_405[32].type = (EIF_TYPE_INDEX) (-1);
	desc_405[32].gen_type =  gen_type14_405;
	desc_405[33].body_index = (BODY_INDEX) (2058);
	desc_405[33].offset = (BODY_INDEX) (-1);
	desc_405[33].type = (EIF_TYPE_INDEX) (-1);
	desc_405[33].gen_type = NULL;
	desc_405[34].body_index = (BODY_INDEX) (2059);
	desc_405[34].offset = (BODY_INDEX) (-1);
	desc_405[34].type = (EIF_TYPE_INDEX) (-1);
	desc_405[34].gen_type = NULL;
	desc_405[35].body_index = (BODY_INDEX) (-1);
	desc_405[35].offset = (BODY_INDEX) (-1);
	desc_405[35].type = (EIF_TYPE_INDEX) (-1);
	desc_405[35].gen_type =  gen_type15_405;
}

extern void Init405(void);
void Init405(void)
{
	if (desc_fill != 0)
		build_desc_405();
	IDSC(desc_405, 0, 404);
	IDSC(desc_405 + 1, 1, 404);
	IDSC(desc_405 + 32, 194, 404);
}


#ifdef __cplusplus
}
#endif
