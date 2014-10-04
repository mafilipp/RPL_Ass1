/*
 * Class TO_SPECIAL [G#1]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_300(void);
static EIF_TYPE_INDEX gen_type0_300 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_300 [] = {0xFF11,274,0xFF12,299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type2_300 [] = {0xFF11,299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type3_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_300 [] = {0xFF11,299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type6_300 [] = {0xFF11,299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type7_300 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_300 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_300 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_300 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_300 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_300 [] = {299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type13_300 [] = {0xFF11,299,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type14_300 [] = {0xFF11,280,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_300 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_300 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_300 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_300[41];

static void build_desc_300(void) {
	desc_300[0].body_index = (BODY_INDEX) (-1);
	desc_300[0].offset = (BODY_INDEX) (-1);
	desc_300[0].type = INVALID_DTYPE;
	desc_300[0].gen_type = NULL;
	desc_300[1].body_index = (BODY_INDEX) (0);
	desc_300[1].offset = (BODY_INDEX) (-1);
	desc_300[1].type = (EIF_TYPE_INDEX) (257);
	desc_300[1].gen_type =  gen_type0_300;
	desc_300[2].body_index = (BODY_INDEX) (1);
	desc_300[2].offset = (BODY_INDEX) (-1);
	desc_300[2].type = (EIF_TYPE_INDEX) (274);
	desc_300[2].gen_type =  gen_type1_300;
	desc_300[3].body_index = (BODY_INDEX) (2);
	desc_300[3].offset = (BODY_INDEX) (-1);
	desc_300[3].type = (EIF_TYPE_INDEX) (225);
	desc_300[3].gen_type = NULL;
	desc_300[4].body_index = (BODY_INDEX) (3);
	desc_300[4].offset = (BODY_INDEX) (-1);
	desc_300[4].type = (EIF_TYPE_INDEX) (225);
	desc_300[4].gen_type = NULL;
	desc_300[5].body_index = (BODY_INDEX) (4);
	desc_300[5].offset = (BODY_INDEX) (-1);
	desc_300[5].type = (EIF_TYPE_INDEX) (225);
	desc_300[5].gen_type = NULL;
	desc_300[6].body_index = (BODY_INDEX) (5);
	desc_300[6].offset = (BODY_INDEX) (-1);
	desc_300[6].type = (EIF_TYPE_INDEX) (225);
	desc_300[6].gen_type = NULL;
	desc_300[7].body_index = (BODY_INDEX) (6);
	desc_300[7].offset = (BODY_INDEX) (-1);
	desc_300[7].type = (EIF_TYPE_INDEX) (225);
	desc_300[7].gen_type = NULL;
	desc_300[8].body_index = (BODY_INDEX) (7);
	desc_300[8].offset = (BODY_INDEX) (-1);
	desc_300[8].type = (EIF_TYPE_INDEX) (225);
	desc_300[8].gen_type = NULL;
	desc_300[9].body_index = (BODY_INDEX) (8);
	desc_300[9].offset = (BODY_INDEX) (-1);
	desc_300[9].type = (EIF_TYPE_INDEX) (225);
	desc_300[9].gen_type = NULL;
	desc_300[10].body_index = (BODY_INDEX) (9);
	desc_300[10].offset = (BODY_INDEX) (-1);
	desc_300[10].type = (EIF_TYPE_INDEX) (225);
	desc_300[10].gen_type = NULL;
	desc_300[11].body_index = (BODY_INDEX) (10);
	desc_300[11].offset = (BODY_INDEX) (-1);
	desc_300[11].type = (EIF_TYPE_INDEX) (299);
	desc_300[11].gen_type =  gen_type2_300;
	desc_300[12].body_index = (BODY_INDEX) (11);
	desc_300[12].offset = (BODY_INDEX) (-1);
	desc_300[12].type = (EIF_TYPE_INDEX) (-1);
	desc_300[12].gen_type = NULL;
	desc_300[13].body_index = (BODY_INDEX) (12);
	desc_300[13].offset = (BODY_INDEX) (-1);
	desc_300[13].type = (EIF_TYPE_INDEX) (-1);
	desc_300[13].gen_type = NULL;
	desc_300[14].body_index = (BODY_INDEX) (13);
	desc_300[14].offset = (BODY_INDEX) (-1);
	desc_300[14].type = (EIF_TYPE_INDEX) (0);
	desc_300[14].gen_type =  gen_type3_300;
	desc_300[15].body_index = (BODY_INDEX) (14);
	desc_300[15].offset = (BODY_INDEX) (-1);
	desc_300[15].type = (EIF_TYPE_INDEX) (0);
	desc_300[15].gen_type =  gen_type4_300;
	desc_300[16].body_index = (BODY_INDEX) (15);
	desc_300[16].offset = (BODY_INDEX) (-1);
	desc_300[16].type = (EIF_TYPE_INDEX) (299);
	desc_300[16].gen_type =  gen_type5_300;
	desc_300[17].body_index = (BODY_INDEX) (16);
	desc_300[17].offset = (BODY_INDEX) (-1);
	desc_300[17].type = (EIF_TYPE_INDEX) (299);
	desc_300[17].gen_type =  gen_type6_300;
	desc_300[18].body_index = (BODY_INDEX) (17);
	desc_300[18].offset = (BODY_INDEX) (-1);
	desc_300[18].type = (EIF_TYPE_INDEX) (0);
	desc_300[18].gen_type =  gen_type7_300;
	desc_300[19].body_index = (BODY_INDEX) (18);
	desc_300[19].offset = (BODY_INDEX) (-1);
	desc_300[19].type = (EIF_TYPE_INDEX) (-1);
	desc_300[19].gen_type = NULL;
	desc_300[20].body_index = (BODY_INDEX) (19);
	desc_300[20].offset = (BODY_INDEX) (-1);
	desc_300[20].type = (EIF_TYPE_INDEX) (-1);
	desc_300[20].gen_type = NULL;
	desc_300[21].body_index = (BODY_INDEX) (20);
	desc_300[21].offset = (BODY_INDEX) (-1);
	desc_300[21].type = (EIF_TYPE_INDEX) (18);
	desc_300[21].gen_type =  gen_type8_300;
	desc_300[22].body_index = (BODY_INDEX) (21);
	desc_300[22].offset = (BODY_INDEX) (-1);
	desc_300[22].type = (EIF_TYPE_INDEX) (257);
	desc_300[22].gen_type =  gen_type9_300;
	desc_300[23].body_index = (BODY_INDEX) (22);
	desc_300[23].offset = (BODY_INDEX) (-1);
	desc_300[23].type = (EIF_TYPE_INDEX) (257);
	desc_300[23].gen_type =  gen_type10_300;
	desc_300[24].body_index = (BODY_INDEX) (23);
	desc_300[24].offset = (BODY_INDEX) (-1);
	desc_300[24].type = (EIF_TYPE_INDEX) (-1);
	desc_300[24].gen_type = NULL;
	desc_300[25].body_index = (BODY_INDEX) (24);
	desc_300[25].offset = (BODY_INDEX) (-1);
	desc_300[25].type = (EIF_TYPE_INDEX) (38);
	desc_300[25].gen_type =  gen_type11_300;
	desc_300[26].body_index = (BODY_INDEX) (25);
	desc_300[26].offset = (BODY_INDEX) (-1);
	desc_300[26].type = (EIF_TYPE_INDEX) (-1);
	desc_300[26].gen_type = NULL;
	desc_300[27].body_index = (BODY_INDEX) (26);
	desc_300[27].offset = (BODY_INDEX) (-1);
	desc_300[27].type = (EIF_TYPE_INDEX) (-1);
	desc_300[27].gen_type = NULL;
	desc_300[28].body_index = (BODY_INDEX) (27);
	desc_300[28].offset = (BODY_INDEX) (-1);
	desc_300[28].type = (EIF_TYPE_INDEX) (-1);
	desc_300[28].gen_type = NULL;
	desc_300[29].body_index = (BODY_INDEX) (28);
	desc_300[29].offset = (BODY_INDEX) (-1);
	desc_300[29].type = (EIF_TYPE_INDEX) (299);
	desc_300[29].gen_type =  gen_type12_300;
	desc_300[30].body_index = (BODY_INDEX) (29);
	desc_300[30].offset = (BODY_INDEX) (-1);
	desc_300[30].type = (EIF_TYPE_INDEX) (252);
	desc_300[30].gen_type = NULL;
	desc_300[31].body_index = (BODY_INDEX) (30);
	desc_300[31].offset = (BODY_INDEX) (-1);
	desc_300[31].type = (EIF_TYPE_INDEX) (299);
	desc_300[31].gen_type =  gen_type13_300;
	desc_300[32].body_index = (BODY_INDEX) (5150);
	desc_300[32].offset = (BODY_INDEX) (0);
	desc_300[32].type = (EIF_TYPE_INDEX) (280);
	desc_300[32].gen_type =  gen_type14_300;
	desc_300[33].body_index = (BODY_INDEX) (5151);
	desc_300[33].offset = (BODY_INDEX) (-1);
	desc_300[33].type = (EIF_TYPE_INDEX) (-1);
	desc_300[33].gen_type = NULL;
	desc_300[34].body_index = (BODY_INDEX) (5152);
	desc_300[34].offset = (BODY_INDEX) (-1);
	desc_300[34].type = (EIF_TYPE_INDEX) (-1);
	desc_300[34].gen_type = NULL;
	desc_300[35].body_index = (BODY_INDEX) (5153);
	desc_300[35].offset = (BODY_INDEX) (-1);
	desc_300[35].type = (EIF_TYPE_INDEX) (-1);
	desc_300[35].gen_type =  gen_type15_300;
	desc_300[36].body_index = (BODY_INDEX) (5154);
	desc_300[36].offset = (BODY_INDEX) (-1);
	desc_300[36].type = (EIF_TYPE_INDEX) (-1);
	desc_300[36].gen_type =  gen_type16_300;
	desc_300[37].body_index = (BODY_INDEX) (5155);
	desc_300[37].offset = (BODY_INDEX) (-1);
	desc_300[37].type = (EIF_TYPE_INDEX) (225);
	desc_300[37].gen_type = NULL;
	desc_300[38].body_index = (BODY_INDEX) (5156);
	desc_300[38].offset = (BODY_INDEX) (-1);
	desc_300[38].type = (EIF_TYPE_INDEX) (-1);
	desc_300[38].gen_type = NULL;
	desc_300[39].body_index = (BODY_INDEX) (5157);
	desc_300[39].offset = (BODY_INDEX) (-1);
	desc_300[39].type = (EIF_TYPE_INDEX) (-1);
	desc_300[39].gen_type = NULL;
	desc_300[40].body_index = (BODY_INDEX) (-1);
	desc_300[40].offset = (BODY_INDEX) (-1);
	desc_300[40].type = (EIF_TYPE_INDEX) (-1);
	desc_300[40].gen_type =  gen_type17_300;
}

extern void Init300(void);
void Init300(void)
{
	if (desc_fill != 0)
		build_desc_300();
	IDSC(desc_300, 0, 299);
	IDSC(desc_300 + 1, 1, 299);
	IDSC(desc_300 + 32, 89, 299);
}


#ifdef __cplusplus
}
#endif
