/*
 * Class BASIC_ROUTINES
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_42(void);
static EIF_TYPE_INDEX gen_type0_42 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_42 [] = {0xFF11,274,0xFF12,41,0xFFFF};
static EIF_TYPE_INDEX gen_type2_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type3_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type6_42 [] = {0xFF11,41,0xFFFF};
static EIF_TYPE_INDEX gen_type7_42 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_42 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_42 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_42 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_42 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_42 [] = {0xFF11,41,0xFFFF};


static struct desc_info desc_42[38];

static void build_desc_42(void) {
	desc_42[0].body_index = (BODY_INDEX) (-1);
	desc_42[0].offset = (BODY_INDEX) (-1);
	desc_42[0].type = INVALID_DTYPE;
	desc_42[0].gen_type = NULL;
	desc_42[1].body_index = (BODY_INDEX) (0);
	desc_42[1].offset = (BODY_INDEX) (-1);
	desc_42[1].type = (EIF_TYPE_INDEX) (257);
	desc_42[1].gen_type =  gen_type0_42;
	desc_42[2].body_index = (BODY_INDEX) (1);
	desc_42[2].offset = (BODY_INDEX) (-1);
	desc_42[2].type = (EIF_TYPE_INDEX) (274);
	desc_42[2].gen_type =  gen_type1_42;
	desc_42[3].body_index = (BODY_INDEX) (2);
	desc_42[3].offset = (BODY_INDEX) (-1);
	desc_42[3].type = (EIF_TYPE_INDEX) (225);
	desc_42[3].gen_type = NULL;
	desc_42[4].body_index = (BODY_INDEX) (3);
	desc_42[4].offset = (BODY_INDEX) (-1);
	desc_42[4].type = (EIF_TYPE_INDEX) (225);
	desc_42[4].gen_type = NULL;
	desc_42[5].body_index = (BODY_INDEX) (4);
	desc_42[5].offset = (BODY_INDEX) (-1);
	desc_42[5].type = (EIF_TYPE_INDEX) (225);
	desc_42[5].gen_type = NULL;
	desc_42[6].body_index = (BODY_INDEX) (5);
	desc_42[6].offset = (BODY_INDEX) (-1);
	desc_42[6].type = (EIF_TYPE_INDEX) (225);
	desc_42[6].gen_type = NULL;
	desc_42[7].body_index = (BODY_INDEX) (6);
	desc_42[7].offset = (BODY_INDEX) (-1);
	desc_42[7].type = (EIF_TYPE_INDEX) (225);
	desc_42[7].gen_type = NULL;
	desc_42[8].body_index = (BODY_INDEX) (7);
	desc_42[8].offset = (BODY_INDEX) (-1);
	desc_42[8].type = (EIF_TYPE_INDEX) (225);
	desc_42[8].gen_type = NULL;
	desc_42[9].body_index = (BODY_INDEX) (8);
	desc_42[9].offset = (BODY_INDEX) (-1);
	desc_42[9].type = (EIF_TYPE_INDEX) (225);
	desc_42[9].gen_type = NULL;
	desc_42[10].body_index = (BODY_INDEX) (9);
	desc_42[10].offset = (BODY_INDEX) (-1);
	desc_42[10].type = (EIF_TYPE_INDEX) (225);
	desc_42[10].gen_type = NULL;
	desc_42[11].body_index = (BODY_INDEX) (10);
	desc_42[11].offset = (BODY_INDEX) (-1);
	desc_42[11].type = (EIF_TYPE_INDEX) (41);
	desc_42[11].gen_type =  gen_type2_42;
	desc_42[12].body_index = (BODY_INDEX) (11);
	desc_42[12].offset = (BODY_INDEX) (-1);
	desc_42[12].type = (EIF_TYPE_INDEX) (-1);
	desc_42[12].gen_type = NULL;
	desc_42[13].body_index = (BODY_INDEX) (12);
	desc_42[13].offset = (BODY_INDEX) (-1);
	desc_42[13].type = (EIF_TYPE_INDEX) (-1);
	desc_42[13].gen_type = NULL;
	desc_42[14].body_index = (BODY_INDEX) (13);
	desc_42[14].offset = (BODY_INDEX) (-1);
	desc_42[14].type = (EIF_TYPE_INDEX) (0);
	desc_42[14].gen_type =  gen_type3_42;
	desc_42[15].body_index = (BODY_INDEX) (14);
	desc_42[15].offset = (BODY_INDEX) (-1);
	desc_42[15].type = (EIF_TYPE_INDEX) (0);
	desc_42[15].gen_type =  gen_type4_42;
	desc_42[16].body_index = (BODY_INDEX) (15);
	desc_42[16].offset = (BODY_INDEX) (-1);
	desc_42[16].type = (EIF_TYPE_INDEX) (41);
	desc_42[16].gen_type =  gen_type5_42;
	desc_42[17].body_index = (BODY_INDEX) (16);
	desc_42[17].offset = (BODY_INDEX) (-1);
	desc_42[17].type = (EIF_TYPE_INDEX) (41);
	desc_42[17].gen_type =  gen_type6_42;
	desc_42[18].body_index = (BODY_INDEX) (17);
	desc_42[18].offset = (BODY_INDEX) (-1);
	desc_42[18].type = (EIF_TYPE_INDEX) (0);
	desc_42[18].gen_type =  gen_type7_42;
	desc_42[19].body_index = (BODY_INDEX) (18);
	desc_42[19].offset = (BODY_INDEX) (-1);
	desc_42[19].type = (EIF_TYPE_INDEX) (-1);
	desc_42[19].gen_type = NULL;
	desc_42[20].body_index = (BODY_INDEX) (19);
	desc_42[20].offset = (BODY_INDEX) (-1);
	desc_42[20].type = (EIF_TYPE_INDEX) (-1);
	desc_42[20].gen_type = NULL;
	desc_42[21].body_index = (BODY_INDEX) (20);
	desc_42[21].offset = (BODY_INDEX) (-1);
	desc_42[21].type = (EIF_TYPE_INDEX) (18);
	desc_42[21].gen_type =  gen_type8_42;
	desc_42[22].body_index = (BODY_INDEX) (21);
	desc_42[22].offset = (BODY_INDEX) (-1);
	desc_42[22].type = (EIF_TYPE_INDEX) (257);
	desc_42[22].gen_type =  gen_type9_42;
	desc_42[23].body_index = (BODY_INDEX) (22);
	desc_42[23].offset = (BODY_INDEX) (-1);
	desc_42[23].type = (EIF_TYPE_INDEX) (257);
	desc_42[23].gen_type =  gen_type10_42;
	desc_42[24].body_index = (BODY_INDEX) (23);
	desc_42[24].offset = (BODY_INDEX) (-1);
	desc_42[24].type = (EIF_TYPE_INDEX) (-1);
	desc_42[24].gen_type = NULL;
	desc_42[25].body_index = (BODY_INDEX) (24);
	desc_42[25].offset = (BODY_INDEX) (-1);
	desc_42[25].type = (EIF_TYPE_INDEX) (38);
	desc_42[25].gen_type =  gen_type11_42;
	desc_42[26].body_index = (BODY_INDEX) (25);
	desc_42[26].offset = (BODY_INDEX) (-1);
	desc_42[26].type = (EIF_TYPE_INDEX) (-1);
	desc_42[26].gen_type = NULL;
	desc_42[27].body_index = (BODY_INDEX) (26);
	desc_42[27].offset = (BODY_INDEX) (-1);
	desc_42[27].type = (EIF_TYPE_INDEX) (-1);
	desc_42[27].gen_type = NULL;
	desc_42[28].body_index = (BODY_INDEX) (27);
	desc_42[28].offset = (BODY_INDEX) (-1);
	desc_42[28].type = (EIF_TYPE_INDEX) (-1);
	desc_42[28].gen_type = NULL;
	desc_42[29].body_index = (BODY_INDEX) (28);
	desc_42[29].offset = (BODY_INDEX) (-1);
	desc_42[29].type = (EIF_TYPE_INDEX) (41);
	desc_42[29].gen_type = NULL;
	desc_42[30].body_index = (BODY_INDEX) (29);
	desc_42[30].offset = (BODY_INDEX) (-1);
	desc_42[30].type = (EIF_TYPE_INDEX) (252);
	desc_42[30].gen_type = NULL;
	desc_42[31].body_index = (BODY_INDEX) (30);
	desc_42[31].offset = (BODY_INDEX) (-1);
	desc_42[31].type = (EIF_TYPE_INDEX) (41);
	desc_42[31].gen_type =  gen_type12_42;
	desc_42[32].body_index = (BODY_INDEX) (730);
	desc_42[32].offset = (BODY_INDEX) (-1);
	desc_42[32].type = (EIF_TYPE_INDEX) (219);
	desc_42[32].gen_type = NULL;
	desc_42[33].body_index = (BODY_INDEX) (731);
	desc_42[33].offset = (BODY_INDEX) (-1);
	desc_42[33].type = (EIF_TYPE_INDEX) (246);
	desc_42[33].gen_type = NULL;
	desc_42[34].body_index = (BODY_INDEX) (732);
	desc_42[34].offset = (BODY_INDEX) (-1);
	desc_42[34].type = (EIF_TYPE_INDEX) (246);
	desc_42[34].gen_type = NULL;
	desc_42[35].body_index = (BODY_INDEX) (733);
	desc_42[35].offset = (BODY_INDEX) (-1);
	desc_42[35].type = (EIF_TYPE_INDEX) (246);
	desc_42[35].gen_type = NULL;
	desc_42[36].body_index = (BODY_INDEX) (734);
	desc_42[36].offset = (BODY_INDEX) (-1);
	desc_42[36].type = (EIF_TYPE_INDEX) (246);
	desc_42[36].gen_type = NULL;
	desc_42[37].body_index = (BODY_INDEX) (735);
	desc_42[37].offset = (BODY_INDEX) (-1);
	desc_42[37].type = (EIF_TYPE_INDEX) (246);
	desc_42[37].gen_type = NULL;
}

extern void Init42(void);
void Init42(void)
{
	if (desc_fill != 0)
		build_desc_42();
	IDSC(desc_42, 0, 41);
	IDSC(desc_42 + 1, 1, 41);
	IDSC(desc_42 + 32, 56, 41);
}


#ifdef __cplusplus
}
#endif
