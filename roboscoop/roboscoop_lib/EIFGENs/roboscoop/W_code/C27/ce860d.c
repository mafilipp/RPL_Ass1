/*
 * Class CELL [INTEGER_32]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_860(void);
static EIF_TYPE_INDEX gen_type0_860 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_860 [] = {0xFF11,274,0xFF12,859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type2_860 [] = {0xFF11,859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type3_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_860 [] = {0xFF11,859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type6_860 [] = {0xFF11,859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type7_860 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_860 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_860 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_860 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_860 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_860 [] = {859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type13_860 [] = {0xFF11,859,246,0xFFFF};
static EIF_TYPE_INDEX gen_type14_860 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_860 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_860[36];

static void build_desc_860(void) {
	desc_860[0].body_index = (BODY_INDEX) (-1);
	desc_860[0].offset = (BODY_INDEX) (-1);
	desc_860[0].type = INVALID_DTYPE;
	desc_860[0].gen_type = NULL;
	desc_860[1].body_index = (BODY_INDEX) (0);
	desc_860[1].offset = (BODY_INDEX) (-1);
	desc_860[1].type = (EIF_TYPE_INDEX) (257);
	desc_860[1].gen_type =  gen_type0_860;
	desc_860[2].body_index = (BODY_INDEX) (1);
	desc_860[2].offset = (BODY_INDEX) (-1);
	desc_860[2].type = (EIF_TYPE_INDEX) (274);
	desc_860[2].gen_type =  gen_type1_860;
	desc_860[3].body_index = (BODY_INDEX) (2);
	desc_860[3].offset = (BODY_INDEX) (-1);
	desc_860[3].type = (EIF_TYPE_INDEX) (225);
	desc_860[3].gen_type = NULL;
	desc_860[4].body_index = (BODY_INDEX) (3);
	desc_860[4].offset = (BODY_INDEX) (-1);
	desc_860[4].type = (EIF_TYPE_INDEX) (225);
	desc_860[4].gen_type = NULL;
	desc_860[5].body_index = (BODY_INDEX) (4);
	desc_860[5].offset = (BODY_INDEX) (-1);
	desc_860[5].type = (EIF_TYPE_INDEX) (225);
	desc_860[5].gen_type = NULL;
	desc_860[6].body_index = (BODY_INDEX) (5);
	desc_860[6].offset = (BODY_INDEX) (-1);
	desc_860[6].type = (EIF_TYPE_INDEX) (225);
	desc_860[6].gen_type = NULL;
	desc_860[7].body_index = (BODY_INDEX) (6);
	desc_860[7].offset = (BODY_INDEX) (-1);
	desc_860[7].type = (EIF_TYPE_INDEX) (225);
	desc_860[7].gen_type = NULL;
	desc_860[8].body_index = (BODY_INDEX) (7);
	desc_860[8].offset = (BODY_INDEX) (-1);
	desc_860[8].type = (EIF_TYPE_INDEX) (225);
	desc_860[8].gen_type = NULL;
	desc_860[9].body_index = (BODY_INDEX) (8);
	desc_860[9].offset = (BODY_INDEX) (-1);
	desc_860[9].type = (EIF_TYPE_INDEX) (225);
	desc_860[9].gen_type = NULL;
	desc_860[10].body_index = (BODY_INDEX) (9);
	desc_860[10].offset = (BODY_INDEX) (-1);
	desc_860[10].type = (EIF_TYPE_INDEX) (225);
	desc_860[10].gen_type = NULL;
	desc_860[11].body_index = (BODY_INDEX) (10);
	desc_860[11].offset = (BODY_INDEX) (-1);
	desc_860[11].type = (EIF_TYPE_INDEX) (859);
	desc_860[11].gen_type =  gen_type2_860;
	desc_860[12].body_index = (BODY_INDEX) (11);
	desc_860[12].offset = (BODY_INDEX) (-1);
	desc_860[12].type = (EIF_TYPE_INDEX) (-1);
	desc_860[12].gen_type = NULL;
	desc_860[13].body_index = (BODY_INDEX) (12);
	desc_860[13].offset = (BODY_INDEX) (-1);
	desc_860[13].type = (EIF_TYPE_INDEX) (-1);
	desc_860[13].gen_type = NULL;
	desc_860[14].body_index = (BODY_INDEX) (13);
	desc_860[14].offset = (BODY_INDEX) (-1);
	desc_860[14].type = (EIF_TYPE_INDEX) (0);
	desc_860[14].gen_type =  gen_type3_860;
	desc_860[15].body_index = (BODY_INDEX) (14);
	desc_860[15].offset = (BODY_INDEX) (-1);
	desc_860[15].type = (EIF_TYPE_INDEX) (0);
	desc_860[15].gen_type =  gen_type4_860;
	desc_860[16].body_index = (BODY_INDEX) (15);
	desc_860[16].offset = (BODY_INDEX) (-1);
	desc_860[16].type = (EIF_TYPE_INDEX) (859);
	desc_860[16].gen_type =  gen_type5_860;
	desc_860[17].body_index = (BODY_INDEX) (16);
	desc_860[17].offset = (BODY_INDEX) (-1);
	desc_860[17].type = (EIF_TYPE_INDEX) (859);
	desc_860[17].gen_type =  gen_type6_860;
	desc_860[18].body_index = (BODY_INDEX) (17);
	desc_860[18].offset = (BODY_INDEX) (-1);
	desc_860[18].type = (EIF_TYPE_INDEX) (0);
	desc_860[18].gen_type =  gen_type7_860;
	desc_860[19].body_index = (BODY_INDEX) (18);
	desc_860[19].offset = (BODY_INDEX) (-1);
	desc_860[19].type = (EIF_TYPE_INDEX) (-1);
	desc_860[19].gen_type = NULL;
	desc_860[20].body_index = (BODY_INDEX) (19);
	desc_860[20].offset = (BODY_INDEX) (-1);
	desc_860[20].type = (EIF_TYPE_INDEX) (-1);
	desc_860[20].gen_type = NULL;
	desc_860[21].body_index = (BODY_INDEX) (20);
	desc_860[21].offset = (BODY_INDEX) (-1);
	desc_860[21].type = (EIF_TYPE_INDEX) (18);
	desc_860[21].gen_type =  gen_type8_860;
	desc_860[22].body_index = (BODY_INDEX) (21);
	desc_860[22].offset = (BODY_INDEX) (-1);
	desc_860[22].type = (EIF_TYPE_INDEX) (257);
	desc_860[22].gen_type =  gen_type9_860;
	desc_860[23].body_index = (BODY_INDEX) (22);
	desc_860[23].offset = (BODY_INDEX) (-1);
	desc_860[23].type = (EIF_TYPE_INDEX) (257);
	desc_860[23].gen_type =  gen_type10_860;
	desc_860[24].body_index = (BODY_INDEX) (23);
	desc_860[24].offset = (BODY_INDEX) (-1);
	desc_860[24].type = (EIF_TYPE_INDEX) (-1);
	desc_860[24].gen_type = NULL;
	desc_860[25].body_index = (BODY_INDEX) (24);
	desc_860[25].offset = (BODY_INDEX) (-1);
	desc_860[25].type = (EIF_TYPE_INDEX) (38);
	desc_860[25].gen_type =  gen_type11_860;
	desc_860[26].body_index = (BODY_INDEX) (25);
	desc_860[26].offset = (BODY_INDEX) (-1);
	desc_860[26].type = (EIF_TYPE_INDEX) (-1);
	desc_860[26].gen_type = NULL;
	desc_860[27].body_index = (BODY_INDEX) (26);
	desc_860[27].offset = (BODY_INDEX) (-1);
	desc_860[27].type = (EIF_TYPE_INDEX) (-1);
	desc_860[27].gen_type = NULL;
	desc_860[28].body_index = (BODY_INDEX) (27);
	desc_860[28].offset = (BODY_INDEX) (-1);
	desc_860[28].type = (EIF_TYPE_INDEX) (-1);
	desc_860[28].gen_type = NULL;
	desc_860[29].body_index = (BODY_INDEX) (28);
	desc_860[29].offset = (BODY_INDEX) (-1);
	desc_860[29].type = (EIF_TYPE_INDEX) (859);
	desc_860[29].gen_type =  gen_type12_860;
	desc_860[30].body_index = (BODY_INDEX) (29);
	desc_860[30].offset = (BODY_INDEX) (-1);
	desc_860[30].type = (EIF_TYPE_INDEX) (252);
	desc_860[30].gen_type = NULL;
	desc_860[31].body_index = (BODY_INDEX) (30);
	desc_860[31].offset = (BODY_INDEX) (-1);
	desc_860[31].type = (EIF_TYPE_INDEX) (859);
	desc_860[31].gen_type =  gen_type13_860;
	desc_860[32].body_index = (BODY_INDEX) (2066);
	desc_860[32].offset = (BODY_INDEX) (0);
	desc_860[32].type = (EIF_TYPE_INDEX) (-1);
	desc_860[32].gen_type =  gen_type14_860;
	desc_860[33].body_index = (BODY_INDEX) (2067);
	desc_860[33].offset = (BODY_INDEX) (-1);
	desc_860[33].type = (EIF_TYPE_INDEX) (-1);
	desc_860[33].gen_type = NULL;
	desc_860[34].body_index = (BODY_INDEX) (2068);
	desc_860[34].offset = (BODY_INDEX) (-1);
	desc_860[34].type = (EIF_TYPE_INDEX) (-1);
	desc_860[34].gen_type = NULL;
	desc_860[35].body_index = (BODY_INDEX) (-1);
	desc_860[35].offset = (BODY_INDEX) (-1);
	desc_860[35].type = (EIF_TYPE_INDEX) (-1);
	desc_860[35].gen_type =  gen_type15_860;
}

extern void Init860(void);
void Init860(void)
{
	if (desc_fill != 0)
		build_desc_860();
	IDSC(desc_860, 0, 859);
	IDSC(desc_860 + 1, 1, 859);
	IDSC(desc_860 + 32, 194, 859);
}


#ifdef __cplusplus
}
#endif
