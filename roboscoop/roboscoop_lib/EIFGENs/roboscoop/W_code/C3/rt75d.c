/*
 * Class RT_DBG_COMMON
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_75(void);
static EIF_TYPE_INDEX gen_type0_75 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_75 [] = {0xFF11,274,0xFF12,74,0xFFFF};
static EIF_TYPE_INDEX gen_type2_75 [] = {0xFF11,74,0xFFFF};
static EIF_TYPE_INDEX gen_type3_75 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_75 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_75 [] = {0xFF11,74,0xFFFF};
static EIF_TYPE_INDEX gen_type6_75 [] = {0xFF11,74,0xFFFF};
static EIF_TYPE_INDEX gen_type7_75 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_75 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_75 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_75 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_75 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_75 [] = {0xFF11,74,0xFFFF};
static EIF_TYPE_INDEX gen_type13_75 [] = {0xFF11,300,0xFF11,273,0xFFFF};


static struct desc_info desc_75[35];

static void build_desc_75(void) {
	desc_75[0].body_index = (BODY_INDEX) (-1);
	desc_75[0].offset = (BODY_INDEX) (-1);
	desc_75[0].type = INVALID_DTYPE;
	desc_75[0].gen_type = NULL;
	desc_75[1].body_index = (BODY_INDEX) (0);
	desc_75[1].offset = (BODY_INDEX) (-1);
	desc_75[1].type = (EIF_TYPE_INDEX) (257);
	desc_75[1].gen_type =  gen_type0_75;
	desc_75[2].body_index = (BODY_INDEX) (1);
	desc_75[2].offset = (BODY_INDEX) (-1);
	desc_75[2].type = (EIF_TYPE_INDEX) (274);
	desc_75[2].gen_type =  gen_type1_75;
	desc_75[3].body_index = (BODY_INDEX) (2);
	desc_75[3].offset = (BODY_INDEX) (-1);
	desc_75[3].type = (EIF_TYPE_INDEX) (225);
	desc_75[3].gen_type = NULL;
	desc_75[4].body_index = (BODY_INDEX) (3);
	desc_75[4].offset = (BODY_INDEX) (-1);
	desc_75[4].type = (EIF_TYPE_INDEX) (225);
	desc_75[4].gen_type = NULL;
	desc_75[5].body_index = (BODY_INDEX) (4);
	desc_75[5].offset = (BODY_INDEX) (-1);
	desc_75[5].type = (EIF_TYPE_INDEX) (225);
	desc_75[5].gen_type = NULL;
	desc_75[6].body_index = (BODY_INDEX) (5);
	desc_75[6].offset = (BODY_INDEX) (-1);
	desc_75[6].type = (EIF_TYPE_INDEX) (225);
	desc_75[6].gen_type = NULL;
	desc_75[7].body_index = (BODY_INDEX) (6);
	desc_75[7].offset = (BODY_INDEX) (-1);
	desc_75[7].type = (EIF_TYPE_INDEX) (225);
	desc_75[7].gen_type = NULL;
	desc_75[8].body_index = (BODY_INDEX) (7);
	desc_75[8].offset = (BODY_INDEX) (-1);
	desc_75[8].type = (EIF_TYPE_INDEX) (225);
	desc_75[8].gen_type = NULL;
	desc_75[9].body_index = (BODY_INDEX) (8);
	desc_75[9].offset = (BODY_INDEX) (-1);
	desc_75[9].type = (EIF_TYPE_INDEX) (225);
	desc_75[9].gen_type = NULL;
	desc_75[10].body_index = (BODY_INDEX) (9);
	desc_75[10].offset = (BODY_INDEX) (-1);
	desc_75[10].type = (EIF_TYPE_INDEX) (225);
	desc_75[10].gen_type = NULL;
	desc_75[11].body_index = (BODY_INDEX) (10);
	desc_75[11].offset = (BODY_INDEX) (-1);
	desc_75[11].type = (EIF_TYPE_INDEX) (74);
	desc_75[11].gen_type =  gen_type2_75;
	desc_75[12].body_index = (BODY_INDEX) (11);
	desc_75[12].offset = (BODY_INDEX) (-1);
	desc_75[12].type = (EIF_TYPE_INDEX) (-1);
	desc_75[12].gen_type = NULL;
	desc_75[13].body_index = (BODY_INDEX) (12);
	desc_75[13].offset = (BODY_INDEX) (-1);
	desc_75[13].type = (EIF_TYPE_INDEX) (-1);
	desc_75[13].gen_type = NULL;
	desc_75[14].body_index = (BODY_INDEX) (13);
	desc_75[14].offset = (BODY_INDEX) (-1);
	desc_75[14].type = (EIF_TYPE_INDEX) (0);
	desc_75[14].gen_type =  gen_type3_75;
	desc_75[15].body_index = (BODY_INDEX) (14);
	desc_75[15].offset = (BODY_INDEX) (-1);
	desc_75[15].type = (EIF_TYPE_INDEX) (0);
	desc_75[15].gen_type =  gen_type4_75;
	desc_75[16].body_index = (BODY_INDEX) (15);
	desc_75[16].offset = (BODY_INDEX) (-1);
	desc_75[16].type = (EIF_TYPE_INDEX) (74);
	desc_75[16].gen_type =  gen_type5_75;
	desc_75[17].body_index = (BODY_INDEX) (16);
	desc_75[17].offset = (BODY_INDEX) (-1);
	desc_75[17].type = (EIF_TYPE_INDEX) (74);
	desc_75[17].gen_type =  gen_type6_75;
	desc_75[18].body_index = (BODY_INDEX) (17);
	desc_75[18].offset = (BODY_INDEX) (-1);
	desc_75[18].type = (EIF_TYPE_INDEX) (0);
	desc_75[18].gen_type =  gen_type7_75;
	desc_75[19].body_index = (BODY_INDEX) (18);
	desc_75[19].offset = (BODY_INDEX) (-1);
	desc_75[19].type = (EIF_TYPE_INDEX) (-1);
	desc_75[19].gen_type = NULL;
	desc_75[20].body_index = (BODY_INDEX) (19);
	desc_75[20].offset = (BODY_INDEX) (-1);
	desc_75[20].type = (EIF_TYPE_INDEX) (-1);
	desc_75[20].gen_type = NULL;
	desc_75[21].body_index = (BODY_INDEX) (20);
	desc_75[21].offset = (BODY_INDEX) (-1);
	desc_75[21].type = (EIF_TYPE_INDEX) (18);
	desc_75[21].gen_type =  gen_type8_75;
	desc_75[22].body_index = (BODY_INDEX) (21);
	desc_75[22].offset = (BODY_INDEX) (-1);
	desc_75[22].type = (EIF_TYPE_INDEX) (257);
	desc_75[22].gen_type =  gen_type9_75;
	desc_75[23].body_index = (BODY_INDEX) (22);
	desc_75[23].offset = (BODY_INDEX) (-1);
	desc_75[23].type = (EIF_TYPE_INDEX) (257);
	desc_75[23].gen_type =  gen_type10_75;
	desc_75[24].body_index = (BODY_INDEX) (23);
	desc_75[24].offset = (BODY_INDEX) (-1);
	desc_75[24].type = (EIF_TYPE_INDEX) (-1);
	desc_75[24].gen_type = NULL;
	desc_75[25].body_index = (BODY_INDEX) (24);
	desc_75[25].offset = (BODY_INDEX) (-1);
	desc_75[25].type = (EIF_TYPE_INDEX) (38);
	desc_75[25].gen_type =  gen_type11_75;
	desc_75[26].body_index = (BODY_INDEX) (25);
	desc_75[26].offset = (BODY_INDEX) (-1);
	desc_75[26].type = (EIF_TYPE_INDEX) (-1);
	desc_75[26].gen_type = NULL;
	desc_75[27].body_index = (BODY_INDEX) (26);
	desc_75[27].offset = (BODY_INDEX) (-1);
	desc_75[27].type = (EIF_TYPE_INDEX) (-1);
	desc_75[27].gen_type = NULL;
	desc_75[28].body_index = (BODY_INDEX) (27);
	desc_75[28].offset = (BODY_INDEX) (-1);
	desc_75[28].type = (EIF_TYPE_INDEX) (-1);
	desc_75[28].gen_type = NULL;
	desc_75[29].body_index = (BODY_INDEX) (28);
	desc_75[29].offset = (BODY_INDEX) (-1);
	desc_75[29].type = (EIF_TYPE_INDEX) (74);
	desc_75[29].gen_type = NULL;
	desc_75[30].body_index = (BODY_INDEX) (29);
	desc_75[30].offset = (BODY_INDEX) (-1);
	desc_75[30].type = (EIF_TYPE_INDEX) (252);
	desc_75[30].gen_type = NULL;
	desc_75[31].body_index = (BODY_INDEX) (30);
	desc_75[31].offset = (BODY_INDEX) (-1);
	desc_75[31].type = (EIF_TYPE_INDEX) (74);
	desc_75[31].gen_type =  gen_type12_75;
	desc_75[32].body_index = (BODY_INDEX) (1236);
	desc_75[32].offset = (BODY_INDEX) (-1);
	desc_75[32].type = (EIF_TYPE_INDEX) (-1);
	desc_75[32].gen_type = NULL;
	desc_75[33].body_index = (BODY_INDEX) (1237);
	desc_75[33].offset = (BODY_INDEX) (-1);
	desc_75[33].type = (EIF_TYPE_INDEX) (-1);
	desc_75[33].gen_type = NULL;
	desc_75[34].body_index = (BODY_INDEX) (1274);
	desc_75[34].offset = (BODY_INDEX) (-1);
	desc_75[34].type = (EIF_TYPE_INDEX) (300);
	desc_75[34].gen_type =  gen_type13_75;
}

extern void Init75(void);
void Init75(void)
{
	if (desc_fill != 0)
		build_desc_75();
	IDSC(desc_75, 0, 74);
	IDSC(desc_75 + 1, 1, 74);
	IDSC(desc_75 + 32, 366, 74);
	IDSC(desc_75 + 34, 342, 74);
}


#ifdef __cplusplus
}
#endif
