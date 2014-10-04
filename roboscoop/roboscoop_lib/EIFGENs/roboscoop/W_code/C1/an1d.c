/*
 * Class ANY
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_1(void);
static EIF_TYPE_INDEX gen_type0_1 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1 [] = {0xFF11,274,0xFF12,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1 [] = {0xFF11,0,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1 [] = {0xFF11,0,0xFFFF};


static struct desc_info desc_1[32];

static void build_desc_1(void) {
	desc_1[0].body_index = (BODY_INDEX) (31);
	desc_1[0].offset = (BODY_INDEX) (-1);
	desc_1[0].type = INVALID_DTYPE;
	desc_1[0].gen_type = NULL;
	desc_1[1].body_index = (BODY_INDEX) (0);
	desc_1[1].offset = (BODY_INDEX) (-1);
	desc_1[1].type = (EIF_TYPE_INDEX) (257);
	desc_1[1].gen_type =  gen_type0_1;
	desc_1[2].body_index = (BODY_INDEX) (1);
	desc_1[2].offset = (BODY_INDEX) (-1);
	desc_1[2].type = (EIF_TYPE_INDEX) (274);
	desc_1[2].gen_type =  gen_type1_1;
	desc_1[3].body_index = (BODY_INDEX) (2);
	desc_1[3].offset = (BODY_INDEX) (-1);
	desc_1[3].type = (EIF_TYPE_INDEX) (225);
	desc_1[3].gen_type = NULL;
	desc_1[4].body_index = (BODY_INDEX) (3);
	desc_1[4].offset = (BODY_INDEX) (-1);
	desc_1[4].type = (EIF_TYPE_INDEX) (225);
	desc_1[4].gen_type = NULL;
	desc_1[5].body_index = (BODY_INDEX) (4);
	desc_1[5].offset = (BODY_INDEX) (-1);
	desc_1[5].type = (EIF_TYPE_INDEX) (225);
	desc_1[5].gen_type = NULL;
	desc_1[6].body_index = (BODY_INDEX) (5);
	desc_1[6].offset = (BODY_INDEX) (-1);
	desc_1[6].type = (EIF_TYPE_INDEX) (225);
	desc_1[6].gen_type = NULL;
	desc_1[7].body_index = (BODY_INDEX) (6);
	desc_1[7].offset = (BODY_INDEX) (-1);
	desc_1[7].type = (EIF_TYPE_INDEX) (225);
	desc_1[7].gen_type = NULL;
	desc_1[8].body_index = (BODY_INDEX) (7);
	desc_1[8].offset = (BODY_INDEX) (-1);
	desc_1[8].type = (EIF_TYPE_INDEX) (225);
	desc_1[8].gen_type = NULL;
	desc_1[9].body_index = (BODY_INDEX) (8);
	desc_1[9].offset = (BODY_INDEX) (-1);
	desc_1[9].type = (EIF_TYPE_INDEX) (225);
	desc_1[9].gen_type = NULL;
	desc_1[10].body_index = (BODY_INDEX) (9);
	desc_1[10].offset = (BODY_INDEX) (-1);
	desc_1[10].type = (EIF_TYPE_INDEX) (225);
	desc_1[10].gen_type = NULL;
	desc_1[11].body_index = (BODY_INDEX) (10);
	desc_1[11].offset = (BODY_INDEX) (-1);
	desc_1[11].type = (EIF_TYPE_INDEX) (0);
	desc_1[11].gen_type =  gen_type2_1;
	desc_1[12].body_index = (BODY_INDEX) (11);
	desc_1[12].offset = (BODY_INDEX) (-1);
	desc_1[12].type = (EIF_TYPE_INDEX) (-1);
	desc_1[12].gen_type = NULL;
	desc_1[13].body_index = (BODY_INDEX) (12);
	desc_1[13].offset = (BODY_INDEX) (-1);
	desc_1[13].type = (EIF_TYPE_INDEX) (-1);
	desc_1[13].gen_type = NULL;
	desc_1[14].body_index = (BODY_INDEX) (13);
	desc_1[14].offset = (BODY_INDEX) (-1);
	desc_1[14].type = (EIF_TYPE_INDEX) (0);
	desc_1[14].gen_type =  gen_type3_1;
	desc_1[15].body_index = (BODY_INDEX) (14);
	desc_1[15].offset = (BODY_INDEX) (-1);
	desc_1[15].type = (EIF_TYPE_INDEX) (0);
	desc_1[15].gen_type =  gen_type4_1;
	desc_1[16].body_index = (BODY_INDEX) (15);
	desc_1[16].offset = (BODY_INDEX) (-1);
	desc_1[16].type = (EIF_TYPE_INDEX) (0);
	desc_1[16].gen_type =  gen_type5_1;
	desc_1[17].body_index = (BODY_INDEX) (16);
	desc_1[17].offset = (BODY_INDEX) (-1);
	desc_1[17].type = (EIF_TYPE_INDEX) (0);
	desc_1[17].gen_type =  gen_type6_1;
	desc_1[18].body_index = (BODY_INDEX) (17);
	desc_1[18].offset = (BODY_INDEX) (-1);
	desc_1[18].type = (EIF_TYPE_INDEX) (0);
	desc_1[18].gen_type =  gen_type7_1;
	desc_1[19].body_index = (BODY_INDEX) (18);
	desc_1[19].offset = (BODY_INDEX) (-1);
	desc_1[19].type = (EIF_TYPE_INDEX) (-1);
	desc_1[19].gen_type = NULL;
	desc_1[20].body_index = (BODY_INDEX) (19);
	desc_1[20].offset = (BODY_INDEX) (-1);
	desc_1[20].type = (EIF_TYPE_INDEX) (-1);
	desc_1[20].gen_type = NULL;
	desc_1[21].body_index = (BODY_INDEX) (20);
	desc_1[21].offset = (BODY_INDEX) (-1);
	desc_1[21].type = (EIF_TYPE_INDEX) (18);
	desc_1[21].gen_type =  gen_type8_1;
	desc_1[22].body_index = (BODY_INDEX) (21);
	desc_1[22].offset = (BODY_INDEX) (-1);
	desc_1[22].type = (EIF_TYPE_INDEX) (257);
	desc_1[22].gen_type =  gen_type9_1;
	desc_1[23].body_index = (BODY_INDEX) (22);
	desc_1[23].offset = (BODY_INDEX) (-1);
	desc_1[23].type = (EIF_TYPE_INDEX) (257);
	desc_1[23].gen_type =  gen_type10_1;
	desc_1[24].body_index = (BODY_INDEX) (23);
	desc_1[24].offset = (BODY_INDEX) (-1);
	desc_1[24].type = (EIF_TYPE_INDEX) (-1);
	desc_1[24].gen_type = NULL;
	desc_1[25].body_index = (BODY_INDEX) (24);
	desc_1[25].offset = (BODY_INDEX) (-1);
	desc_1[25].type = (EIF_TYPE_INDEX) (38);
	desc_1[25].gen_type =  gen_type11_1;
	desc_1[26].body_index = (BODY_INDEX) (25);
	desc_1[26].offset = (BODY_INDEX) (-1);
	desc_1[26].type = (EIF_TYPE_INDEX) (-1);
	desc_1[26].gen_type = NULL;
	desc_1[27].body_index = (BODY_INDEX) (26);
	desc_1[27].offset = (BODY_INDEX) (-1);
	desc_1[27].type = (EIF_TYPE_INDEX) (-1);
	desc_1[27].gen_type = NULL;
	desc_1[28].body_index = (BODY_INDEX) (27);
	desc_1[28].offset = (BODY_INDEX) (-1);
	desc_1[28].type = (EIF_TYPE_INDEX) (-1);
	desc_1[28].gen_type = NULL;
	desc_1[29].body_index = (BODY_INDEX) (28);
	desc_1[29].offset = (BODY_INDEX) (-1);
	desc_1[29].type = (EIF_TYPE_INDEX) (0);
	desc_1[29].gen_type = NULL;
	desc_1[30].body_index = (BODY_INDEX) (29);
	desc_1[30].offset = (BODY_INDEX) (-1);
	desc_1[30].type = (EIF_TYPE_INDEX) (252);
	desc_1[30].gen_type = NULL;
	desc_1[31].body_index = (BODY_INDEX) (30);
	desc_1[31].offset = (BODY_INDEX) (-1);
	desc_1[31].type = (EIF_TYPE_INDEX) (0);
	desc_1[31].gen_type =  gen_type12_1;
}

extern void Init1(void);
void Init1(void)
{
	if (desc_fill != 0)
		build_desc_1();
	IDSC(desc_1, 0, 0);
	IDSC(desc_1 + 1, 1, 0);
}


#ifdef __cplusplus
}
#endif
