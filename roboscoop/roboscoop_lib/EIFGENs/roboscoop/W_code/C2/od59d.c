/*
 * Class ODOMETRY_LISTENER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_59(void);
static EIF_TYPE_INDEX gen_type0_59 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_59 [] = {0xFF11,274,0xFF12,58,0xFFFF};
static EIF_TYPE_INDEX gen_type2_59 [] = {0xFF11,58,0xFFFF};
static EIF_TYPE_INDEX gen_type3_59 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_59 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_59 [] = {0xFF11,58,0xFFFF};
static EIF_TYPE_INDEX gen_type6_59 [] = {0xFF11,58,0xFFFF};
static EIF_TYPE_INDEX gen_type7_59 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_59 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_59 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_59 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_59 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_59 [] = {0xFF11,58,0xFFFF};


static struct desc_info desc_59[33];

static void build_desc_59(void) {
	desc_59[0].body_index = (BODY_INDEX) (-1);
	desc_59[0].offset = (BODY_INDEX) (-1);
	desc_59[0].type = INVALID_DTYPE;
	desc_59[0].gen_type = NULL;
	desc_59[1].body_index = (BODY_INDEX) (0);
	desc_59[1].offset = (BODY_INDEX) (-1);
	desc_59[1].type = (EIF_TYPE_INDEX) (257);
	desc_59[1].gen_type =  gen_type0_59;
	desc_59[2].body_index = (BODY_INDEX) (1);
	desc_59[2].offset = (BODY_INDEX) (-1);
	desc_59[2].type = (EIF_TYPE_INDEX) (274);
	desc_59[2].gen_type =  gen_type1_59;
	desc_59[3].body_index = (BODY_INDEX) (2);
	desc_59[3].offset = (BODY_INDEX) (-1);
	desc_59[3].type = (EIF_TYPE_INDEX) (225);
	desc_59[3].gen_type = NULL;
	desc_59[4].body_index = (BODY_INDEX) (3);
	desc_59[4].offset = (BODY_INDEX) (-1);
	desc_59[4].type = (EIF_TYPE_INDEX) (225);
	desc_59[4].gen_type = NULL;
	desc_59[5].body_index = (BODY_INDEX) (4);
	desc_59[5].offset = (BODY_INDEX) (-1);
	desc_59[5].type = (EIF_TYPE_INDEX) (225);
	desc_59[5].gen_type = NULL;
	desc_59[6].body_index = (BODY_INDEX) (5);
	desc_59[6].offset = (BODY_INDEX) (-1);
	desc_59[6].type = (EIF_TYPE_INDEX) (225);
	desc_59[6].gen_type = NULL;
	desc_59[7].body_index = (BODY_INDEX) (6);
	desc_59[7].offset = (BODY_INDEX) (-1);
	desc_59[7].type = (EIF_TYPE_INDEX) (225);
	desc_59[7].gen_type = NULL;
	desc_59[8].body_index = (BODY_INDEX) (7);
	desc_59[8].offset = (BODY_INDEX) (-1);
	desc_59[8].type = (EIF_TYPE_INDEX) (225);
	desc_59[8].gen_type = NULL;
	desc_59[9].body_index = (BODY_INDEX) (8);
	desc_59[9].offset = (BODY_INDEX) (-1);
	desc_59[9].type = (EIF_TYPE_INDEX) (225);
	desc_59[9].gen_type = NULL;
	desc_59[10].body_index = (BODY_INDEX) (9);
	desc_59[10].offset = (BODY_INDEX) (-1);
	desc_59[10].type = (EIF_TYPE_INDEX) (225);
	desc_59[10].gen_type = NULL;
	desc_59[11].body_index = (BODY_INDEX) (10);
	desc_59[11].offset = (BODY_INDEX) (-1);
	desc_59[11].type = (EIF_TYPE_INDEX) (58);
	desc_59[11].gen_type =  gen_type2_59;
	desc_59[12].body_index = (BODY_INDEX) (11);
	desc_59[12].offset = (BODY_INDEX) (-1);
	desc_59[12].type = (EIF_TYPE_INDEX) (-1);
	desc_59[12].gen_type = NULL;
	desc_59[13].body_index = (BODY_INDEX) (12);
	desc_59[13].offset = (BODY_INDEX) (-1);
	desc_59[13].type = (EIF_TYPE_INDEX) (-1);
	desc_59[13].gen_type = NULL;
	desc_59[14].body_index = (BODY_INDEX) (13);
	desc_59[14].offset = (BODY_INDEX) (-1);
	desc_59[14].type = (EIF_TYPE_INDEX) (0);
	desc_59[14].gen_type =  gen_type3_59;
	desc_59[15].body_index = (BODY_INDEX) (14);
	desc_59[15].offset = (BODY_INDEX) (-1);
	desc_59[15].type = (EIF_TYPE_INDEX) (0);
	desc_59[15].gen_type =  gen_type4_59;
	desc_59[16].body_index = (BODY_INDEX) (15);
	desc_59[16].offset = (BODY_INDEX) (-1);
	desc_59[16].type = (EIF_TYPE_INDEX) (58);
	desc_59[16].gen_type =  gen_type5_59;
	desc_59[17].body_index = (BODY_INDEX) (16);
	desc_59[17].offset = (BODY_INDEX) (-1);
	desc_59[17].type = (EIF_TYPE_INDEX) (58);
	desc_59[17].gen_type =  gen_type6_59;
	desc_59[18].body_index = (BODY_INDEX) (17);
	desc_59[18].offset = (BODY_INDEX) (-1);
	desc_59[18].type = (EIF_TYPE_INDEX) (0);
	desc_59[18].gen_type =  gen_type7_59;
	desc_59[19].body_index = (BODY_INDEX) (18);
	desc_59[19].offset = (BODY_INDEX) (-1);
	desc_59[19].type = (EIF_TYPE_INDEX) (-1);
	desc_59[19].gen_type = NULL;
	desc_59[20].body_index = (BODY_INDEX) (19);
	desc_59[20].offset = (BODY_INDEX) (-1);
	desc_59[20].type = (EIF_TYPE_INDEX) (-1);
	desc_59[20].gen_type = NULL;
	desc_59[21].body_index = (BODY_INDEX) (20);
	desc_59[21].offset = (BODY_INDEX) (-1);
	desc_59[21].type = (EIF_TYPE_INDEX) (18);
	desc_59[21].gen_type =  gen_type8_59;
	desc_59[22].body_index = (BODY_INDEX) (21);
	desc_59[22].offset = (BODY_INDEX) (-1);
	desc_59[22].type = (EIF_TYPE_INDEX) (257);
	desc_59[22].gen_type =  gen_type9_59;
	desc_59[23].body_index = (BODY_INDEX) (22);
	desc_59[23].offset = (BODY_INDEX) (-1);
	desc_59[23].type = (EIF_TYPE_INDEX) (257);
	desc_59[23].gen_type =  gen_type10_59;
	desc_59[24].body_index = (BODY_INDEX) (23);
	desc_59[24].offset = (BODY_INDEX) (-1);
	desc_59[24].type = (EIF_TYPE_INDEX) (-1);
	desc_59[24].gen_type = NULL;
	desc_59[25].body_index = (BODY_INDEX) (24);
	desc_59[25].offset = (BODY_INDEX) (-1);
	desc_59[25].type = (EIF_TYPE_INDEX) (38);
	desc_59[25].gen_type =  gen_type11_59;
	desc_59[26].body_index = (BODY_INDEX) (25);
	desc_59[26].offset = (BODY_INDEX) (-1);
	desc_59[26].type = (EIF_TYPE_INDEX) (-1);
	desc_59[26].gen_type = NULL;
	desc_59[27].body_index = (BODY_INDEX) (26);
	desc_59[27].offset = (BODY_INDEX) (-1);
	desc_59[27].type = (EIF_TYPE_INDEX) (-1);
	desc_59[27].gen_type = NULL;
	desc_59[28].body_index = (BODY_INDEX) (27);
	desc_59[28].offset = (BODY_INDEX) (-1);
	desc_59[28].type = (EIF_TYPE_INDEX) (-1);
	desc_59[28].gen_type = NULL;
	desc_59[29].body_index = (BODY_INDEX) (28);
	desc_59[29].offset = (BODY_INDEX) (-1);
	desc_59[29].type = (EIF_TYPE_INDEX) (58);
	desc_59[29].gen_type = NULL;
	desc_59[30].body_index = (BODY_INDEX) (29);
	desc_59[30].offset = (BODY_INDEX) (-1);
	desc_59[30].type = (EIF_TYPE_INDEX) (252);
	desc_59[30].gen_type = NULL;
	desc_59[31].body_index = (BODY_INDEX) (30);
	desc_59[31].offset = (BODY_INDEX) (-1);
	desc_59[31].type = (EIF_TYPE_INDEX) (58);
	desc_59[31].gen_type =  gen_type12_59;
	desc_59[32].body_index = (BODY_INDEX) (-1);
	desc_59[32].offset = (BODY_INDEX) (-1);
	desc_59[32].type = (EIF_TYPE_INDEX) (-1);
	desc_59[32].gen_type = NULL;
}

extern void Init59(void);
void Init59(void)
{
	if (desc_fill != 0)
		build_desc_59();
	IDSC(desc_59, 0, 58);
	IDSC(desc_59 + 1, 1, 58);
	IDSC(desc_59 + 32, 178, 58);
}


#ifdef __cplusplus
}
#endif
