/*
 * Class ROS_MESSAGE
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_45(void);
static EIF_TYPE_INDEX gen_type0_45 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_45 [] = {0xFF11,274,0xFF12,44,0xFFFF};
static EIF_TYPE_INDEX gen_type2_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type3_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type6_45 [] = {0xFF11,44,0xFFFF};
static EIF_TYPE_INDEX gen_type7_45 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_45 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_45 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_45 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_45 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_45 [] = {0xFF11,44,0xFFFF};


static struct desc_info desc_45[40];

static void build_desc_45(void) {
	desc_45[0].body_index = (BODY_INDEX) (-1);
	desc_45[0].offset = (BODY_INDEX) (-1);
	desc_45[0].type = INVALID_DTYPE;
	desc_45[0].gen_type = NULL;
	desc_45[1].body_index = (BODY_INDEX) (0);
	desc_45[1].offset = (BODY_INDEX) (-1);
	desc_45[1].type = (EIF_TYPE_INDEX) (257);
	desc_45[1].gen_type =  gen_type0_45;
	desc_45[2].body_index = (BODY_INDEX) (1);
	desc_45[2].offset = (BODY_INDEX) (-1);
	desc_45[2].type = (EIF_TYPE_INDEX) (274);
	desc_45[2].gen_type =  gen_type1_45;
	desc_45[3].body_index = (BODY_INDEX) (2);
	desc_45[3].offset = (BODY_INDEX) (-1);
	desc_45[3].type = (EIF_TYPE_INDEX) (225);
	desc_45[3].gen_type = NULL;
	desc_45[4].body_index = (BODY_INDEX) (3);
	desc_45[4].offset = (BODY_INDEX) (-1);
	desc_45[4].type = (EIF_TYPE_INDEX) (225);
	desc_45[4].gen_type = NULL;
	desc_45[5].body_index = (BODY_INDEX) (4);
	desc_45[5].offset = (BODY_INDEX) (-1);
	desc_45[5].type = (EIF_TYPE_INDEX) (225);
	desc_45[5].gen_type = NULL;
	desc_45[6].body_index = (BODY_INDEX) (5);
	desc_45[6].offset = (BODY_INDEX) (-1);
	desc_45[6].type = (EIF_TYPE_INDEX) (225);
	desc_45[6].gen_type = NULL;
	desc_45[7].body_index = (BODY_INDEX) (6);
	desc_45[7].offset = (BODY_INDEX) (-1);
	desc_45[7].type = (EIF_TYPE_INDEX) (225);
	desc_45[7].gen_type = NULL;
	desc_45[8].body_index = (BODY_INDEX) (7);
	desc_45[8].offset = (BODY_INDEX) (-1);
	desc_45[8].type = (EIF_TYPE_INDEX) (225);
	desc_45[8].gen_type = NULL;
	desc_45[9].body_index = (BODY_INDEX) (8);
	desc_45[9].offset = (BODY_INDEX) (-1);
	desc_45[9].type = (EIF_TYPE_INDEX) (225);
	desc_45[9].gen_type = NULL;
	desc_45[10].body_index = (BODY_INDEX) (9);
	desc_45[10].offset = (BODY_INDEX) (-1);
	desc_45[10].type = (EIF_TYPE_INDEX) (225);
	desc_45[10].gen_type = NULL;
	desc_45[11].body_index = (BODY_INDEX) (10);
	desc_45[11].offset = (BODY_INDEX) (-1);
	desc_45[11].type = (EIF_TYPE_INDEX) (44);
	desc_45[11].gen_type =  gen_type2_45;
	desc_45[12].body_index = (BODY_INDEX) (11);
	desc_45[12].offset = (BODY_INDEX) (-1);
	desc_45[12].type = (EIF_TYPE_INDEX) (-1);
	desc_45[12].gen_type = NULL;
	desc_45[13].body_index = (BODY_INDEX) (12);
	desc_45[13].offset = (BODY_INDEX) (-1);
	desc_45[13].type = (EIF_TYPE_INDEX) (-1);
	desc_45[13].gen_type = NULL;
	desc_45[14].body_index = (BODY_INDEX) (13);
	desc_45[14].offset = (BODY_INDEX) (-1);
	desc_45[14].type = (EIF_TYPE_INDEX) (0);
	desc_45[14].gen_type =  gen_type3_45;
	desc_45[15].body_index = (BODY_INDEX) (14);
	desc_45[15].offset = (BODY_INDEX) (-1);
	desc_45[15].type = (EIF_TYPE_INDEX) (0);
	desc_45[15].gen_type =  gen_type4_45;
	desc_45[16].body_index = (BODY_INDEX) (15);
	desc_45[16].offset = (BODY_INDEX) (-1);
	desc_45[16].type = (EIF_TYPE_INDEX) (44);
	desc_45[16].gen_type =  gen_type5_45;
	desc_45[17].body_index = (BODY_INDEX) (16);
	desc_45[17].offset = (BODY_INDEX) (-1);
	desc_45[17].type = (EIF_TYPE_INDEX) (44);
	desc_45[17].gen_type =  gen_type6_45;
	desc_45[18].body_index = (BODY_INDEX) (17);
	desc_45[18].offset = (BODY_INDEX) (-1);
	desc_45[18].type = (EIF_TYPE_INDEX) (0);
	desc_45[18].gen_type =  gen_type7_45;
	desc_45[19].body_index = (BODY_INDEX) (18);
	desc_45[19].offset = (BODY_INDEX) (-1);
	desc_45[19].type = (EIF_TYPE_INDEX) (-1);
	desc_45[19].gen_type = NULL;
	desc_45[20].body_index = (BODY_INDEX) (19);
	desc_45[20].offset = (BODY_INDEX) (-1);
	desc_45[20].type = (EIF_TYPE_INDEX) (-1);
	desc_45[20].gen_type = NULL;
	desc_45[21].body_index = (BODY_INDEX) (20);
	desc_45[21].offset = (BODY_INDEX) (-1);
	desc_45[21].type = (EIF_TYPE_INDEX) (18);
	desc_45[21].gen_type =  gen_type8_45;
	desc_45[22].body_index = (BODY_INDEX) (21);
	desc_45[22].offset = (BODY_INDEX) (-1);
	desc_45[22].type = (EIF_TYPE_INDEX) (257);
	desc_45[22].gen_type =  gen_type9_45;
	desc_45[23].body_index = (BODY_INDEX) (22);
	desc_45[23].offset = (BODY_INDEX) (-1);
	desc_45[23].type = (EIF_TYPE_INDEX) (257);
	desc_45[23].gen_type =  gen_type10_45;
	desc_45[24].body_index = (BODY_INDEX) (23);
	desc_45[24].offset = (BODY_INDEX) (-1);
	desc_45[24].type = (EIF_TYPE_INDEX) (-1);
	desc_45[24].gen_type = NULL;
	desc_45[25].body_index = (BODY_INDEX) (24);
	desc_45[25].offset = (BODY_INDEX) (-1);
	desc_45[25].type = (EIF_TYPE_INDEX) (38);
	desc_45[25].gen_type =  gen_type11_45;
	desc_45[26].body_index = (BODY_INDEX) (25);
	desc_45[26].offset = (BODY_INDEX) (-1);
	desc_45[26].type = (EIF_TYPE_INDEX) (-1);
	desc_45[26].gen_type = NULL;
	desc_45[27].body_index = (BODY_INDEX) (26);
	desc_45[27].offset = (BODY_INDEX) (-1);
	desc_45[27].type = (EIF_TYPE_INDEX) (-1);
	desc_45[27].gen_type = NULL;
	desc_45[28].body_index = (BODY_INDEX) (27);
	desc_45[28].offset = (BODY_INDEX) (-1);
	desc_45[28].type = (EIF_TYPE_INDEX) (-1);
	desc_45[28].gen_type = NULL;
	desc_45[29].body_index = (BODY_INDEX) (28);
	desc_45[29].offset = (BODY_INDEX) (-1);
	desc_45[29].type = (EIF_TYPE_INDEX) (44);
	desc_45[29].gen_type = NULL;
	desc_45[30].body_index = (BODY_INDEX) (29);
	desc_45[30].offset = (BODY_INDEX) (-1);
	desc_45[30].type = (EIF_TYPE_INDEX) (252);
	desc_45[30].gen_type = NULL;
	desc_45[31].body_index = (BODY_INDEX) (30);
	desc_45[31].offset = (BODY_INDEX) (-1);
	desc_45[31].type = (EIF_TYPE_INDEX) (44);
	desc_45[31].gen_type =  gen_type12_45;
	desc_45[32].body_index = (BODY_INDEX) (915);
	desc_45[32].offset = (BODY_INDEX) (-1);
	desc_45[32].type = (EIF_TYPE_INDEX) (-1);
	desc_45[32].gen_type = NULL;
	desc_45[33].body_index = (BODY_INDEX) (-1);
	desc_45[33].offset = (BODY_INDEX) (-1);
	desc_45[33].type = (EIF_TYPE_INDEX) (-1);
	desc_45[33].gen_type = NULL;
	desc_45[34].body_index = (BODY_INDEX) (916);
	desc_45[34].offset = (BODY_INDEX) (-1);
	desc_45[34].type = (EIF_TYPE_INDEX) (-1);
	desc_45[34].gen_type = NULL;
	desc_45[35].body_index = (BODY_INDEX) (-1);
	desc_45[35].offset = (BODY_INDEX) (-1);
	desc_45[35].type = (EIF_TYPE_INDEX) (-1);
	desc_45[35].gen_type = NULL;
	desc_45[36].body_index = (BODY_INDEX) (-1);
	desc_45[36].offset = (BODY_INDEX) (-1);
	desc_45[36].type = (EIF_TYPE_INDEX) (-1);
	desc_45[36].gen_type = NULL;
	desc_45[37].body_index = (BODY_INDEX) (-1);
	desc_45[37].offset = (BODY_INDEX) (-1);
	desc_45[37].type = (EIF_TYPE_INDEX) (-1);
	desc_45[37].gen_type = NULL;
	desc_45[38].body_index = (BODY_INDEX) (917);
	desc_45[38].offset = (BODY_INDEX) (-1);
	desc_45[38].type = (EIF_TYPE_INDEX) (228);
	desc_45[38].gen_type = NULL;
	desc_45[39].body_index = (BODY_INDEX) (-1);
	desc_45[39].offset = (BODY_INDEX) (-1);
	desc_45[39].type = (EIF_TYPE_INDEX) (-1);
	desc_45[39].gen_type = NULL;
}

extern void Init45(void);
void Init45(void)
{
	if (desc_fill != 0)
		build_desc_45();
	IDSC(desc_45, 0, 44);
	IDSC(desc_45 + 1, 1, 44);
	IDSC(desc_45 + 32, 32, 44);
	IDSC(desc_45 + 39, 292, 44);
}


#ifdef __cplusplus
}
#endif
