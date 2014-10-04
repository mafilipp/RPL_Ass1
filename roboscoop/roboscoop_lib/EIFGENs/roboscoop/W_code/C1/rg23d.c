/*
 * Class RGB_COLOR_ACTUATOR
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_23(void);
static EIF_TYPE_INDEX gen_type0_23 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_23 [] = {0xFF11,274,0xFF12,22,0xFFFF};
static EIF_TYPE_INDEX gen_type2_23 [] = {0xFF11,22,0xFFFF};
static EIF_TYPE_INDEX gen_type3_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_23 [] = {0xFF11,22,0xFFFF};
static EIF_TYPE_INDEX gen_type6_23 [] = {0xFF11,22,0xFFFF};
static EIF_TYPE_INDEX gen_type7_23 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_23 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_23 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_23 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_23 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_23 [] = {0xFF11,22,0xFFFF};


static struct desc_info desc_23[41];

static void build_desc_23(void) {
	desc_23[0].body_index = (BODY_INDEX) (-1);
	desc_23[0].offset = (BODY_INDEX) (-1);
	desc_23[0].type = INVALID_DTYPE;
	desc_23[0].gen_type = NULL;
	desc_23[1].body_index = (BODY_INDEX) (0);
	desc_23[1].offset = (BODY_INDEX) (-1);
	desc_23[1].type = (EIF_TYPE_INDEX) (257);
	desc_23[1].gen_type =  gen_type0_23;
	desc_23[2].body_index = (BODY_INDEX) (1);
	desc_23[2].offset = (BODY_INDEX) (-1);
	desc_23[2].type = (EIF_TYPE_INDEX) (274);
	desc_23[2].gen_type =  gen_type1_23;
	desc_23[3].body_index = (BODY_INDEX) (2);
	desc_23[3].offset = (BODY_INDEX) (-1);
	desc_23[3].type = (EIF_TYPE_INDEX) (225);
	desc_23[3].gen_type = NULL;
	desc_23[4].body_index = (BODY_INDEX) (3);
	desc_23[4].offset = (BODY_INDEX) (-1);
	desc_23[4].type = (EIF_TYPE_INDEX) (225);
	desc_23[4].gen_type = NULL;
	desc_23[5].body_index = (BODY_INDEX) (4);
	desc_23[5].offset = (BODY_INDEX) (-1);
	desc_23[5].type = (EIF_TYPE_INDEX) (225);
	desc_23[5].gen_type = NULL;
	desc_23[6].body_index = (BODY_INDEX) (5);
	desc_23[6].offset = (BODY_INDEX) (-1);
	desc_23[6].type = (EIF_TYPE_INDEX) (225);
	desc_23[6].gen_type = NULL;
	desc_23[7].body_index = (BODY_INDEX) (6);
	desc_23[7].offset = (BODY_INDEX) (-1);
	desc_23[7].type = (EIF_TYPE_INDEX) (225);
	desc_23[7].gen_type = NULL;
	desc_23[8].body_index = (BODY_INDEX) (7);
	desc_23[8].offset = (BODY_INDEX) (-1);
	desc_23[8].type = (EIF_TYPE_INDEX) (225);
	desc_23[8].gen_type = NULL;
	desc_23[9].body_index = (BODY_INDEX) (8);
	desc_23[9].offset = (BODY_INDEX) (-1);
	desc_23[9].type = (EIF_TYPE_INDEX) (225);
	desc_23[9].gen_type = NULL;
	desc_23[10].body_index = (BODY_INDEX) (9);
	desc_23[10].offset = (BODY_INDEX) (-1);
	desc_23[10].type = (EIF_TYPE_INDEX) (225);
	desc_23[10].gen_type = NULL;
	desc_23[11].body_index = (BODY_INDEX) (10);
	desc_23[11].offset = (BODY_INDEX) (-1);
	desc_23[11].type = (EIF_TYPE_INDEX) (22);
	desc_23[11].gen_type =  gen_type2_23;
	desc_23[12].body_index = (BODY_INDEX) (11);
	desc_23[12].offset = (BODY_INDEX) (-1);
	desc_23[12].type = (EIF_TYPE_INDEX) (-1);
	desc_23[12].gen_type = NULL;
	desc_23[13].body_index = (BODY_INDEX) (12);
	desc_23[13].offset = (BODY_INDEX) (-1);
	desc_23[13].type = (EIF_TYPE_INDEX) (-1);
	desc_23[13].gen_type = NULL;
	desc_23[14].body_index = (BODY_INDEX) (13);
	desc_23[14].offset = (BODY_INDEX) (-1);
	desc_23[14].type = (EIF_TYPE_INDEX) (0);
	desc_23[14].gen_type =  gen_type3_23;
	desc_23[15].body_index = (BODY_INDEX) (14);
	desc_23[15].offset = (BODY_INDEX) (-1);
	desc_23[15].type = (EIF_TYPE_INDEX) (0);
	desc_23[15].gen_type =  gen_type4_23;
	desc_23[16].body_index = (BODY_INDEX) (15);
	desc_23[16].offset = (BODY_INDEX) (-1);
	desc_23[16].type = (EIF_TYPE_INDEX) (22);
	desc_23[16].gen_type =  gen_type5_23;
	desc_23[17].body_index = (BODY_INDEX) (16);
	desc_23[17].offset = (BODY_INDEX) (-1);
	desc_23[17].type = (EIF_TYPE_INDEX) (22);
	desc_23[17].gen_type =  gen_type6_23;
	desc_23[18].body_index = (BODY_INDEX) (17);
	desc_23[18].offset = (BODY_INDEX) (-1);
	desc_23[18].type = (EIF_TYPE_INDEX) (0);
	desc_23[18].gen_type =  gen_type7_23;
	desc_23[19].body_index = (BODY_INDEX) (18);
	desc_23[19].offset = (BODY_INDEX) (-1);
	desc_23[19].type = (EIF_TYPE_INDEX) (-1);
	desc_23[19].gen_type = NULL;
	desc_23[20].body_index = (BODY_INDEX) (19);
	desc_23[20].offset = (BODY_INDEX) (-1);
	desc_23[20].type = (EIF_TYPE_INDEX) (-1);
	desc_23[20].gen_type = NULL;
	desc_23[21].body_index = (BODY_INDEX) (20);
	desc_23[21].offset = (BODY_INDEX) (-1);
	desc_23[21].type = (EIF_TYPE_INDEX) (18);
	desc_23[21].gen_type =  gen_type8_23;
	desc_23[22].body_index = (BODY_INDEX) (21);
	desc_23[22].offset = (BODY_INDEX) (-1);
	desc_23[22].type = (EIF_TYPE_INDEX) (257);
	desc_23[22].gen_type =  gen_type9_23;
	desc_23[23].body_index = (BODY_INDEX) (22);
	desc_23[23].offset = (BODY_INDEX) (-1);
	desc_23[23].type = (EIF_TYPE_INDEX) (257);
	desc_23[23].gen_type =  gen_type10_23;
	desc_23[24].body_index = (BODY_INDEX) (23);
	desc_23[24].offset = (BODY_INDEX) (-1);
	desc_23[24].type = (EIF_TYPE_INDEX) (-1);
	desc_23[24].gen_type = NULL;
	desc_23[25].body_index = (BODY_INDEX) (24);
	desc_23[25].offset = (BODY_INDEX) (-1);
	desc_23[25].type = (EIF_TYPE_INDEX) (38);
	desc_23[25].gen_type =  gen_type11_23;
	desc_23[26].body_index = (BODY_INDEX) (25);
	desc_23[26].offset = (BODY_INDEX) (-1);
	desc_23[26].type = (EIF_TYPE_INDEX) (-1);
	desc_23[26].gen_type = NULL;
	desc_23[27].body_index = (BODY_INDEX) (26);
	desc_23[27].offset = (BODY_INDEX) (-1);
	desc_23[27].type = (EIF_TYPE_INDEX) (-1);
	desc_23[27].gen_type = NULL;
	desc_23[28].body_index = (BODY_INDEX) (27);
	desc_23[28].offset = (BODY_INDEX) (-1);
	desc_23[28].type = (EIF_TYPE_INDEX) (-1);
	desc_23[28].gen_type = NULL;
	desc_23[29].body_index = (BODY_INDEX) (28);
	desc_23[29].offset = (BODY_INDEX) (-1);
	desc_23[29].type = (EIF_TYPE_INDEX) (22);
	desc_23[29].gen_type = NULL;
	desc_23[30].body_index = (BODY_INDEX) (29);
	desc_23[30].offset = (BODY_INDEX) (-1);
	desc_23[30].type = (EIF_TYPE_INDEX) (252);
	desc_23[30].gen_type = NULL;
	desc_23[31].body_index = (BODY_INDEX) (30);
	desc_23[31].offset = (BODY_INDEX) (-1);
	desc_23[31].type = (EIF_TYPE_INDEX) (22);
	desc_23[31].gen_type =  gen_type12_23;
	desc_23[32].body_index = (BODY_INDEX) (-1);
	desc_23[32].offset = (BODY_INDEX) (-1);
	desc_23[32].type = (EIF_TYPE_INDEX) (-1);
	desc_23[32].gen_type = NULL;
	desc_23[33].body_index = (BODY_INDEX) (-1);
	desc_23[33].offset = (BODY_INDEX) (-1);
	desc_23[33].type = (EIF_TYPE_INDEX) (-1);
	desc_23[33].gen_type = NULL;
	desc_23[34].body_index = (BODY_INDEX) (-1);
	desc_23[34].offset = (BODY_INDEX) (-1);
	desc_23[34].type = (EIF_TYPE_INDEX) (-1);
	desc_23[34].gen_type = NULL;
	desc_23[35].body_index = (BODY_INDEX) (-1);
	desc_23[35].offset = (BODY_INDEX) (-1);
	desc_23[35].type = (EIF_TYPE_INDEX) (-1);
	desc_23[35].gen_type = NULL;
	desc_23[36].body_index = (BODY_INDEX) (-1);
	desc_23[36].offset = (BODY_INDEX) (-1);
	desc_23[36].type = (EIF_TYPE_INDEX) (-1);
	desc_23[36].gen_type = NULL;
	desc_23[37].body_index = (BODY_INDEX) (-1);
	desc_23[37].offset = (BODY_INDEX) (-1);
	desc_23[37].type = (EIF_TYPE_INDEX) (-1);
	desc_23[37].gen_type = NULL;
	desc_23[38].body_index = (BODY_INDEX) (-1);
	desc_23[38].offset = (BODY_INDEX) (-1);
	desc_23[38].type = (EIF_TYPE_INDEX) (-1);
	desc_23[38].gen_type = NULL;
	desc_23[39].body_index = (BODY_INDEX) (-1);
	desc_23[39].offset = (BODY_INDEX) (-1);
	desc_23[39].type = (EIF_TYPE_INDEX) (-1);
	desc_23[39].gen_type = NULL;
	desc_23[40].body_index = (BODY_INDEX) (-1);
	desc_23[40].offset = (BODY_INDEX) (-1);
	desc_23[40].type = (EIF_TYPE_INDEX) (-1);
	desc_23[40].gen_type = NULL;
}

extern void Init23(void);
void Init23(void)
{
	if (desc_fill != 0)
		build_desc_23();
	IDSC(desc_23, 0, 22);
	IDSC(desc_23 + 1, 1, 22);
	IDSC(desc_23 + 32, 195, 22);
}


#ifdef __cplusplus
}
#endif
