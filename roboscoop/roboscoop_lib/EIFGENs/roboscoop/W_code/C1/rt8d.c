/*
 * Class RT_DBG_EXECUTION_PARAMETERS
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_8(void);
static EIF_TYPE_INDEX gen_type0_8 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_8 [] = {0xFF11,274,0xFF12,7,0xFFFF};
static EIF_TYPE_INDEX gen_type2_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type3_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type6_8 [] = {0xFF11,7,0xFFFF};
static EIF_TYPE_INDEX gen_type7_8 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_8 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_8 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_8 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_8 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_8 [] = {0xFF11,7,0xFFFF};


static struct desc_info desc_8[41];

static void build_desc_8(void) {
	desc_8[0].body_index = (BODY_INDEX) (-1);
	desc_8[0].offset = (BODY_INDEX) (-1);
	desc_8[0].type = INVALID_DTYPE;
	desc_8[0].gen_type = NULL;
	desc_8[1].body_index = (BODY_INDEX) (0);
	desc_8[1].offset = (BODY_INDEX) (-1);
	desc_8[1].type = (EIF_TYPE_INDEX) (257);
	desc_8[1].gen_type =  gen_type0_8;
	desc_8[2].body_index = (BODY_INDEX) (1);
	desc_8[2].offset = (BODY_INDEX) (-1);
	desc_8[2].type = (EIF_TYPE_INDEX) (274);
	desc_8[2].gen_type =  gen_type1_8;
	desc_8[3].body_index = (BODY_INDEX) (2);
	desc_8[3].offset = (BODY_INDEX) (-1);
	desc_8[3].type = (EIF_TYPE_INDEX) (225);
	desc_8[3].gen_type = NULL;
	desc_8[4].body_index = (BODY_INDEX) (3);
	desc_8[4].offset = (BODY_INDEX) (-1);
	desc_8[4].type = (EIF_TYPE_INDEX) (225);
	desc_8[4].gen_type = NULL;
	desc_8[5].body_index = (BODY_INDEX) (4);
	desc_8[5].offset = (BODY_INDEX) (-1);
	desc_8[5].type = (EIF_TYPE_INDEX) (225);
	desc_8[5].gen_type = NULL;
	desc_8[6].body_index = (BODY_INDEX) (5);
	desc_8[6].offset = (BODY_INDEX) (-1);
	desc_8[6].type = (EIF_TYPE_INDEX) (225);
	desc_8[6].gen_type = NULL;
	desc_8[7].body_index = (BODY_INDEX) (6);
	desc_8[7].offset = (BODY_INDEX) (-1);
	desc_8[7].type = (EIF_TYPE_INDEX) (225);
	desc_8[7].gen_type = NULL;
	desc_8[8].body_index = (BODY_INDEX) (7);
	desc_8[8].offset = (BODY_INDEX) (-1);
	desc_8[8].type = (EIF_TYPE_INDEX) (225);
	desc_8[8].gen_type = NULL;
	desc_8[9].body_index = (BODY_INDEX) (8);
	desc_8[9].offset = (BODY_INDEX) (-1);
	desc_8[9].type = (EIF_TYPE_INDEX) (225);
	desc_8[9].gen_type = NULL;
	desc_8[10].body_index = (BODY_INDEX) (9);
	desc_8[10].offset = (BODY_INDEX) (-1);
	desc_8[10].type = (EIF_TYPE_INDEX) (225);
	desc_8[10].gen_type = NULL;
	desc_8[11].body_index = (BODY_INDEX) (10);
	desc_8[11].offset = (BODY_INDEX) (-1);
	desc_8[11].type = (EIF_TYPE_INDEX) (7);
	desc_8[11].gen_type =  gen_type2_8;
	desc_8[12].body_index = (BODY_INDEX) (11);
	desc_8[12].offset = (BODY_INDEX) (-1);
	desc_8[12].type = (EIF_TYPE_INDEX) (-1);
	desc_8[12].gen_type = NULL;
	desc_8[13].body_index = (BODY_INDEX) (12);
	desc_8[13].offset = (BODY_INDEX) (-1);
	desc_8[13].type = (EIF_TYPE_INDEX) (-1);
	desc_8[13].gen_type = NULL;
	desc_8[14].body_index = (BODY_INDEX) (13);
	desc_8[14].offset = (BODY_INDEX) (-1);
	desc_8[14].type = (EIF_TYPE_INDEX) (0);
	desc_8[14].gen_type =  gen_type3_8;
	desc_8[15].body_index = (BODY_INDEX) (14);
	desc_8[15].offset = (BODY_INDEX) (-1);
	desc_8[15].type = (EIF_TYPE_INDEX) (0);
	desc_8[15].gen_type =  gen_type4_8;
	desc_8[16].body_index = (BODY_INDEX) (15);
	desc_8[16].offset = (BODY_INDEX) (-1);
	desc_8[16].type = (EIF_TYPE_INDEX) (7);
	desc_8[16].gen_type =  gen_type5_8;
	desc_8[17].body_index = (BODY_INDEX) (16);
	desc_8[17].offset = (BODY_INDEX) (-1);
	desc_8[17].type = (EIF_TYPE_INDEX) (7);
	desc_8[17].gen_type =  gen_type6_8;
	desc_8[18].body_index = (BODY_INDEX) (17);
	desc_8[18].offset = (BODY_INDEX) (-1);
	desc_8[18].type = (EIF_TYPE_INDEX) (0);
	desc_8[18].gen_type =  gen_type7_8;
	desc_8[19].body_index = (BODY_INDEX) (18);
	desc_8[19].offset = (BODY_INDEX) (-1);
	desc_8[19].type = (EIF_TYPE_INDEX) (-1);
	desc_8[19].gen_type = NULL;
	desc_8[20].body_index = (BODY_INDEX) (19);
	desc_8[20].offset = (BODY_INDEX) (-1);
	desc_8[20].type = (EIF_TYPE_INDEX) (-1);
	desc_8[20].gen_type = NULL;
	desc_8[21].body_index = (BODY_INDEX) (20);
	desc_8[21].offset = (BODY_INDEX) (-1);
	desc_8[21].type = (EIF_TYPE_INDEX) (18);
	desc_8[21].gen_type =  gen_type8_8;
	desc_8[22].body_index = (BODY_INDEX) (21);
	desc_8[22].offset = (BODY_INDEX) (-1);
	desc_8[22].type = (EIF_TYPE_INDEX) (257);
	desc_8[22].gen_type =  gen_type9_8;
	desc_8[23].body_index = (BODY_INDEX) (22);
	desc_8[23].offset = (BODY_INDEX) (-1);
	desc_8[23].type = (EIF_TYPE_INDEX) (257);
	desc_8[23].gen_type =  gen_type10_8;
	desc_8[24].body_index = (BODY_INDEX) (23);
	desc_8[24].offset = (BODY_INDEX) (-1);
	desc_8[24].type = (EIF_TYPE_INDEX) (-1);
	desc_8[24].gen_type = NULL;
	desc_8[25].body_index = (BODY_INDEX) (24);
	desc_8[25].offset = (BODY_INDEX) (-1);
	desc_8[25].type = (EIF_TYPE_INDEX) (38);
	desc_8[25].gen_type =  gen_type11_8;
	desc_8[26].body_index = (BODY_INDEX) (25);
	desc_8[26].offset = (BODY_INDEX) (-1);
	desc_8[26].type = (EIF_TYPE_INDEX) (-1);
	desc_8[26].gen_type = NULL;
	desc_8[27].body_index = (BODY_INDEX) (26);
	desc_8[27].offset = (BODY_INDEX) (-1);
	desc_8[27].type = (EIF_TYPE_INDEX) (-1);
	desc_8[27].gen_type = NULL;
	desc_8[28].body_index = (BODY_INDEX) (27);
	desc_8[28].offset = (BODY_INDEX) (-1);
	desc_8[28].type = (EIF_TYPE_INDEX) (-1);
	desc_8[28].gen_type = NULL;
	desc_8[29].body_index = (BODY_INDEX) (28);
	desc_8[29].offset = (BODY_INDEX) (-1);
	desc_8[29].type = (EIF_TYPE_INDEX) (7);
	desc_8[29].gen_type = NULL;
	desc_8[30].body_index = (BODY_INDEX) (29);
	desc_8[30].offset = (BODY_INDEX) (-1);
	desc_8[30].type = (EIF_TYPE_INDEX) (252);
	desc_8[30].gen_type = NULL;
	desc_8[31].body_index = (BODY_INDEX) (30);
	desc_8[31].offset = (BODY_INDEX) (-1);
	desc_8[31].type = (EIF_TYPE_INDEX) (7);
	desc_8[31].gen_type =  gen_type12_8;
	desc_8[32].body_index = (BODY_INDEX) (59);
	desc_8[32].offset = (BODY_INDEX) (-1);
	desc_8[32].type = (EIF_TYPE_INDEX) (-1);
	desc_8[32].gen_type = NULL;
	desc_8[33].body_index = (BODY_INDEX) (60);
	desc_8[33].offset = (BODY_INDEX) (4);
	desc_8[33].type = (EIF_TYPE_INDEX) (246);
	desc_8[33].gen_type = NULL;
	desc_8[34].body_index = (BODY_INDEX) (61);
	desc_8[34].offset = (BODY_INDEX) (0);
	desc_8[34].type = (EIF_TYPE_INDEX) (225);
	desc_8[34].gen_type = NULL;
	desc_8[35].body_index = (BODY_INDEX) (62);
	desc_8[35].offset = (BODY_INDEX) (1);
	desc_8[35].type = (EIF_TYPE_INDEX) (225);
	desc_8[35].gen_type = NULL;
	desc_8[36].body_index = (BODY_INDEX) (63);
	desc_8[36].offset = (BODY_INDEX) (2);
	desc_8[36].type = (EIF_TYPE_INDEX) (225);
	desc_8[36].gen_type = NULL;
	desc_8[37].body_index = (BODY_INDEX) (64);
	desc_8[37].offset = (BODY_INDEX) (-1);
	desc_8[37].type = (EIF_TYPE_INDEX) (-1);
	desc_8[37].gen_type = NULL;
	desc_8[38].body_index = (BODY_INDEX) (65);
	desc_8[38].offset = (BODY_INDEX) (-1);
	desc_8[38].type = (EIF_TYPE_INDEX) (-1);
	desc_8[38].gen_type = NULL;
	desc_8[39].body_index = (BODY_INDEX) (66);
	desc_8[39].offset = (BODY_INDEX) (-1);
	desc_8[39].type = (EIF_TYPE_INDEX) (-1);
	desc_8[39].gen_type = NULL;
	desc_8[40].body_index = (BODY_INDEX) (67);
	desc_8[40].offset = (BODY_INDEX) (-1);
	desc_8[40].type = (EIF_TYPE_INDEX) (-1);
	desc_8[40].gen_type = NULL;
}

extern void Init8(void);
void Init8(void)
{
	if (desc_fill != 0)
		build_desc_8();
	IDSC(desc_8, 0, 7);
	IDSC(desc_8 + 1, 1, 7);
	IDSC(desc_8 + 32, 315, 7);
}


#ifdef __cplusplus
}
#endif
