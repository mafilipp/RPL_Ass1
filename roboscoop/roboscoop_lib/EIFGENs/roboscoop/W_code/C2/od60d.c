/*
 * Class ODOMETRY_SIGNALER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_60(void);
static EIF_TYPE_INDEX gen_type0_60 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_60 [] = {0xFF11,274,0xFF12,59,0xFFFF};
static EIF_TYPE_INDEX gen_type2_60 [] = {0xFF11,59,0xFFFF};
static EIF_TYPE_INDEX gen_type3_60 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_60 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_60 [] = {0xFF11,59,0xFFFF};
static EIF_TYPE_INDEX gen_type6_60 [] = {0xFF11,59,0xFFFF};
static EIF_TYPE_INDEX gen_type7_60 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_60 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_60 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_60 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_60 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_60 [] = {0xFF11,59,0xFFFF};
static EIF_TYPE_INDEX gen_type13_60 [] = {0xFF11,545,0xFF11,47,0xFFFF};


static struct desc_info desc_60[44];

static void build_desc_60(void) {
	desc_60[0].body_index = (BODY_INDEX) (-1);
	desc_60[0].offset = (BODY_INDEX) (-1);
	desc_60[0].type = INVALID_DTYPE;
	desc_60[0].gen_type = NULL;
	desc_60[1].body_index = (BODY_INDEX) (0);
	desc_60[1].offset = (BODY_INDEX) (-1);
	desc_60[1].type = (EIF_TYPE_INDEX) (257);
	desc_60[1].gen_type =  gen_type0_60;
	desc_60[2].body_index = (BODY_INDEX) (1);
	desc_60[2].offset = (BODY_INDEX) (-1);
	desc_60[2].type = (EIF_TYPE_INDEX) (274);
	desc_60[2].gen_type =  gen_type1_60;
	desc_60[3].body_index = (BODY_INDEX) (2);
	desc_60[3].offset = (BODY_INDEX) (-1);
	desc_60[3].type = (EIF_TYPE_INDEX) (225);
	desc_60[3].gen_type = NULL;
	desc_60[4].body_index = (BODY_INDEX) (3);
	desc_60[4].offset = (BODY_INDEX) (-1);
	desc_60[4].type = (EIF_TYPE_INDEX) (225);
	desc_60[4].gen_type = NULL;
	desc_60[5].body_index = (BODY_INDEX) (4);
	desc_60[5].offset = (BODY_INDEX) (-1);
	desc_60[5].type = (EIF_TYPE_INDEX) (225);
	desc_60[5].gen_type = NULL;
	desc_60[6].body_index = (BODY_INDEX) (5);
	desc_60[6].offset = (BODY_INDEX) (-1);
	desc_60[6].type = (EIF_TYPE_INDEX) (225);
	desc_60[6].gen_type = NULL;
	desc_60[7].body_index = (BODY_INDEX) (6);
	desc_60[7].offset = (BODY_INDEX) (-1);
	desc_60[7].type = (EIF_TYPE_INDEX) (225);
	desc_60[7].gen_type = NULL;
	desc_60[8].body_index = (BODY_INDEX) (7);
	desc_60[8].offset = (BODY_INDEX) (-1);
	desc_60[8].type = (EIF_TYPE_INDEX) (225);
	desc_60[8].gen_type = NULL;
	desc_60[9].body_index = (BODY_INDEX) (8);
	desc_60[9].offset = (BODY_INDEX) (-1);
	desc_60[9].type = (EIF_TYPE_INDEX) (225);
	desc_60[9].gen_type = NULL;
	desc_60[10].body_index = (BODY_INDEX) (9);
	desc_60[10].offset = (BODY_INDEX) (-1);
	desc_60[10].type = (EIF_TYPE_INDEX) (225);
	desc_60[10].gen_type = NULL;
	desc_60[11].body_index = (BODY_INDEX) (10);
	desc_60[11].offset = (BODY_INDEX) (-1);
	desc_60[11].type = (EIF_TYPE_INDEX) (59);
	desc_60[11].gen_type =  gen_type2_60;
	desc_60[12].body_index = (BODY_INDEX) (11);
	desc_60[12].offset = (BODY_INDEX) (-1);
	desc_60[12].type = (EIF_TYPE_INDEX) (-1);
	desc_60[12].gen_type = NULL;
	desc_60[13].body_index = (BODY_INDEX) (12);
	desc_60[13].offset = (BODY_INDEX) (-1);
	desc_60[13].type = (EIF_TYPE_INDEX) (-1);
	desc_60[13].gen_type = NULL;
	desc_60[14].body_index = (BODY_INDEX) (13);
	desc_60[14].offset = (BODY_INDEX) (-1);
	desc_60[14].type = (EIF_TYPE_INDEX) (0);
	desc_60[14].gen_type =  gen_type3_60;
	desc_60[15].body_index = (BODY_INDEX) (14);
	desc_60[15].offset = (BODY_INDEX) (-1);
	desc_60[15].type = (EIF_TYPE_INDEX) (0);
	desc_60[15].gen_type =  gen_type4_60;
	desc_60[16].body_index = (BODY_INDEX) (15);
	desc_60[16].offset = (BODY_INDEX) (-1);
	desc_60[16].type = (EIF_TYPE_INDEX) (59);
	desc_60[16].gen_type =  gen_type5_60;
	desc_60[17].body_index = (BODY_INDEX) (16);
	desc_60[17].offset = (BODY_INDEX) (-1);
	desc_60[17].type = (EIF_TYPE_INDEX) (59);
	desc_60[17].gen_type =  gen_type6_60;
	desc_60[18].body_index = (BODY_INDEX) (17);
	desc_60[18].offset = (BODY_INDEX) (-1);
	desc_60[18].type = (EIF_TYPE_INDEX) (0);
	desc_60[18].gen_type =  gen_type7_60;
	desc_60[19].body_index = (BODY_INDEX) (18);
	desc_60[19].offset = (BODY_INDEX) (-1);
	desc_60[19].type = (EIF_TYPE_INDEX) (-1);
	desc_60[19].gen_type = NULL;
	desc_60[20].body_index = (BODY_INDEX) (19);
	desc_60[20].offset = (BODY_INDEX) (-1);
	desc_60[20].type = (EIF_TYPE_INDEX) (-1);
	desc_60[20].gen_type = NULL;
	desc_60[21].body_index = (BODY_INDEX) (20);
	desc_60[21].offset = (BODY_INDEX) (-1);
	desc_60[21].type = (EIF_TYPE_INDEX) (18);
	desc_60[21].gen_type =  gen_type8_60;
	desc_60[22].body_index = (BODY_INDEX) (21);
	desc_60[22].offset = (BODY_INDEX) (-1);
	desc_60[22].type = (EIF_TYPE_INDEX) (257);
	desc_60[22].gen_type =  gen_type9_60;
	desc_60[23].body_index = (BODY_INDEX) (22);
	desc_60[23].offset = (BODY_INDEX) (-1);
	desc_60[23].type = (EIF_TYPE_INDEX) (257);
	desc_60[23].gen_type =  gen_type10_60;
	desc_60[24].body_index = (BODY_INDEX) (23);
	desc_60[24].offset = (BODY_INDEX) (-1);
	desc_60[24].type = (EIF_TYPE_INDEX) (-1);
	desc_60[24].gen_type = NULL;
	desc_60[25].body_index = (BODY_INDEX) (24);
	desc_60[25].offset = (BODY_INDEX) (-1);
	desc_60[25].type = (EIF_TYPE_INDEX) (38);
	desc_60[25].gen_type =  gen_type11_60;
	desc_60[26].body_index = (BODY_INDEX) (25);
	desc_60[26].offset = (BODY_INDEX) (-1);
	desc_60[26].type = (EIF_TYPE_INDEX) (-1);
	desc_60[26].gen_type = NULL;
	desc_60[27].body_index = (BODY_INDEX) (26);
	desc_60[27].offset = (BODY_INDEX) (-1);
	desc_60[27].type = (EIF_TYPE_INDEX) (-1);
	desc_60[27].gen_type = NULL;
	desc_60[28].body_index = (BODY_INDEX) (27);
	desc_60[28].offset = (BODY_INDEX) (-1);
	desc_60[28].type = (EIF_TYPE_INDEX) (-1);
	desc_60[28].gen_type = NULL;
	desc_60[29].body_index = (BODY_INDEX) (28);
	desc_60[29].offset = (BODY_INDEX) (-1);
	desc_60[29].type = (EIF_TYPE_INDEX) (59);
	desc_60[29].gen_type = NULL;
	desc_60[30].body_index = (BODY_INDEX) (29);
	desc_60[30].offset = (BODY_INDEX) (-1);
	desc_60[30].type = (EIF_TYPE_INDEX) (252);
	desc_60[30].gen_type = NULL;
	desc_60[31].body_index = (BODY_INDEX) (30);
	desc_60[31].offset = (BODY_INDEX) (-1);
	desc_60[31].type = (EIF_TYPE_INDEX) (59);
	desc_60[31].gen_type =  gen_type12_60;
	desc_60[32].body_index = (BODY_INDEX) (1112);
	desc_60[32].offset = (BODY_INDEX) (-1);
	desc_60[32].type = (EIF_TYPE_INDEX) (-1);
	desc_60[32].gen_type = NULL;
	desc_60[33].body_index = (BODY_INDEX) (1113);
	desc_60[33].offset = (BODY_INDEX) (8);
	desc_60[33].type = (EIF_TYPE_INDEX) (228);
	desc_60[33].gen_type = NULL;
	desc_60[34].body_index = (BODY_INDEX) (1114);
	desc_60[34].offset = (BODY_INDEX) (16);
	desc_60[34].type = (EIF_TYPE_INDEX) (228);
	desc_60[34].gen_type = NULL;
	desc_60[35].body_index = (BODY_INDEX) (1115);
	desc_60[35].offset = (BODY_INDEX) (24);
	desc_60[35].type = (EIF_TYPE_INDEX) (228);
	desc_60[35].gen_type = NULL;
	desc_60[36].body_index = (BODY_INDEX) (1116);
	desc_60[36].offset = (BODY_INDEX) (32);
	desc_60[36].type = (EIF_TYPE_INDEX) (228);
	desc_60[36].gen_type = NULL;
	desc_60[37].body_index = (BODY_INDEX) (1117);
	desc_60[37].offset = (BODY_INDEX) (40);
	desc_60[37].type = (EIF_TYPE_INDEX) (228);
	desc_60[37].gen_type = NULL;
	desc_60[38].body_index = (BODY_INDEX) (1118);
	desc_60[38].offset = (BODY_INDEX) (48);
	desc_60[38].type = (EIF_TYPE_INDEX) (228);
	desc_60[38].gen_type = NULL;
	desc_60[39].body_index = (BODY_INDEX) (1120);
	desc_60[39].offset = (BODY_INDEX) (-1);
	desc_60[39].type = (EIF_TYPE_INDEX) (225);
	desc_60[39].gen_type = NULL;
	desc_60[40].body_index = (BODY_INDEX) (1121);
	desc_60[40].offset = (BODY_INDEX) (-1);
	desc_60[40].type = (EIF_TYPE_INDEX) (225);
	desc_60[40].gen_type = NULL;
	desc_60[41].body_index = (BODY_INDEX) (1122);
	desc_60[41].offset = (BODY_INDEX) (0);
	desc_60[41].type = (EIF_TYPE_INDEX) (545);
	desc_60[41].gen_type =  gen_type13_60;
	desc_60[42].body_index = (BODY_INDEX) (1123);
	desc_60[42].offset = (BODY_INDEX) (-1);
	desc_60[42].type = (EIF_TYPE_INDEX) (-1);
	desc_60[42].gen_type = NULL;
	desc_60[43].body_index = (BODY_INDEX) (1119);
	desc_60[43].offset = (BODY_INDEX) (-1);
	desc_60[43].type = (EIF_TYPE_INDEX) (-1);
	desc_60[43].gen_type = NULL;
}

extern void Init60(void);
void Init60(void)
{
	if (desc_fill != 0)
		build_desc_60();
	IDSC(desc_60, 0, 59);
	IDSC(desc_60 + 1, 1, 59);
	IDSC(desc_60 + 32, 273, 59);
	IDSC(desc_60 + 43, 178, 59);
}


#ifdef __cplusplus
}
#endif
