/*
 * Class TO_SPECIAL [INTEGER_16]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_802(void);
static EIF_TYPE_INDEX gen_type0_802 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_802 [] = {0xFF11,274,0xFF12,801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type2_802 [] = {0xFF11,801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type3_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_802 [] = {0xFF11,801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type6_802 [] = {0xFF11,801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type7_802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_802 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_802 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_802 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_802 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_802 [] = {801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type13_802 [] = {0xFF11,801,237,0xFFFF};
static EIF_TYPE_INDEX gen_type14_802 [] = {0xFF11,783,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_802 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_802 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_802 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_802[41];

static void build_desc_802(void) {
	desc_802[0].body_index = (BODY_INDEX) (-1);
	desc_802[0].offset = (BODY_INDEX) (-1);
	desc_802[0].type = INVALID_DTYPE;
	desc_802[0].gen_type = NULL;
	desc_802[1].body_index = (BODY_INDEX) (0);
	desc_802[1].offset = (BODY_INDEX) (-1);
	desc_802[1].type = (EIF_TYPE_INDEX) (257);
	desc_802[1].gen_type =  gen_type0_802;
	desc_802[2].body_index = (BODY_INDEX) (1);
	desc_802[2].offset = (BODY_INDEX) (-1);
	desc_802[2].type = (EIF_TYPE_INDEX) (274);
	desc_802[2].gen_type =  gen_type1_802;
	desc_802[3].body_index = (BODY_INDEX) (2);
	desc_802[3].offset = (BODY_INDEX) (-1);
	desc_802[3].type = (EIF_TYPE_INDEX) (225);
	desc_802[3].gen_type = NULL;
	desc_802[4].body_index = (BODY_INDEX) (3);
	desc_802[4].offset = (BODY_INDEX) (-1);
	desc_802[4].type = (EIF_TYPE_INDEX) (225);
	desc_802[4].gen_type = NULL;
	desc_802[5].body_index = (BODY_INDEX) (4);
	desc_802[5].offset = (BODY_INDEX) (-1);
	desc_802[5].type = (EIF_TYPE_INDEX) (225);
	desc_802[5].gen_type = NULL;
	desc_802[6].body_index = (BODY_INDEX) (5);
	desc_802[6].offset = (BODY_INDEX) (-1);
	desc_802[6].type = (EIF_TYPE_INDEX) (225);
	desc_802[6].gen_type = NULL;
	desc_802[7].body_index = (BODY_INDEX) (6);
	desc_802[7].offset = (BODY_INDEX) (-1);
	desc_802[7].type = (EIF_TYPE_INDEX) (225);
	desc_802[7].gen_type = NULL;
	desc_802[8].body_index = (BODY_INDEX) (7);
	desc_802[8].offset = (BODY_INDEX) (-1);
	desc_802[8].type = (EIF_TYPE_INDEX) (225);
	desc_802[8].gen_type = NULL;
	desc_802[9].body_index = (BODY_INDEX) (8);
	desc_802[9].offset = (BODY_INDEX) (-1);
	desc_802[9].type = (EIF_TYPE_INDEX) (225);
	desc_802[9].gen_type = NULL;
	desc_802[10].body_index = (BODY_INDEX) (9);
	desc_802[10].offset = (BODY_INDEX) (-1);
	desc_802[10].type = (EIF_TYPE_INDEX) (225);
	desc_802[10].gen_type = NULL;
	desc_802[11].body_index = (BODY_INDEX) (10);
	desc_802[11].offset = (BODY_INDEX) (-1);
	desc_802[11].type = (EIF_TYPE_INDEX) (801);
	desc_802[11].gen_type =  gen_type2_802;
	desc_802[12].body_index = (BODY_INDEX) (11);
	desc_802[12].offset = (BODY_INDEX) (-1);
	desc_802[12].type = (EIF_TYPE_INDEX) (-1);
	desc_802[12].gen_type = NULL;
	desc_802[13].body_index = (BODY_INDEX) (12);
	desc_802[13].offset = (BODY_INDEX) (-1);
	desc_802[13].type = (EIF_TYPE_INDEX) (-1);
	desc_802[13].gen_type = NULL;
	desc_802[14].body_index = (BODY_INDEX) (13);
	desc_802[14].offset = (BODY_INDEX) (-1);
	desc_802[14].type = (EIF_TYPE_INDEX) (0);
	desc_802[14].gen_type =  gen_type3_802;
	desc_802[15].body_index = (BODY_INDEX) (14);
	desc_802[15].offset = (BODY_INDEX) (-1);
	desc_802[15].type = (EIF_TYPE_INDEX) (0);
	desc_802[15].gen_type =  gen_type4_802;
	desc_802[16].body_index = (BODY_INDEX) (15);
	desc_802[16].offset = (BODY_INDEX) (-1);
	desc_802[16].type = (EIF_TYPE_INDEX) (801);
	desc_802[16].gen_type =  gen_type5_802;
	desc_802[17].body_index = (BODY_INDEX) (16);
	desc_802[17].offset = (BODY_INDEX) (-1);
	desc_802[17].type = (EIF_TYPE_INDEX) (801);
	desc_802[17].gen_type =  gen_type6_802;
	desc_802[18].body_index = (BODY_INDEX) (17);
	desc_802[18].offset = (BODY_INDEX) (-1);
	desc_802[18].type = (EIF_TYPE_INDEX) (0);
	desc_802[18].gen_type =  gen_type7_802;
	desc_802[19].body_index = (BODY_INDEX) (18);
	desc_802[19].offset = (BODY_INDEX) (-1);
	desc_802[19].type = (EIF_TYPE_INDEX) (-1);
	desc_802[19].gen_type = NULL;
	desc_802[20].body_index = (BODY_INDEX) (19);
	desc_802[20].offset = (BODY_INDEX) (-1);
	desc_802[20].type = (EIF_TYPE_INDEX) (-1);
	desc_802[20].gen_type = NULL;
	desc_802[21].body_index = (BODY_INDEX) (20);
	desc_802[21].offset = (BODY_INDEX) (-1);
	desc_802[21].type = (EIF_TYPE_INDEX) (18);
	desc_802[21].gen_type =  gen_type8_802;
	desc_802[22].body_index = (BODY_INDEX) (21);
	desc_802[22].offset = (BODY_INDEX) (-1);
	desc_802[22].type = (EIF_TYPE_INDEX) (257);
	desc_802[22].gen_type =  gen_type9_802;
	desc_802[23].body_index = (BODY_INDEX) (22);
	desc_802[23].offset = (BODY_INDEX) (-1);
	desc_802[23].type = (EIF_TYPE_INDEX) (257);
	desc_802[23].gen_type =  gen_type10_802;
	desc_802[24].body_index = (BODY_INDEX) (23);
	desc_802[24].offset = (BODY_INDEX) (-1);
	desc_802[24].type = (EIF_TYPE_INDEX) (-1);
	desc_802[24].gen_type = NULL;
	desc_802[25].body_index = (BODY_INDEX) (24);
	desc_802[25].offset = (BODY_INDEX) (-1);
	desc_802[25].type = (EIF_TYPE_INDEX) (38);
	desc_802[25].gen_type =  gen_type11_802;
	desc_802[26].body_index = (BODY_INDEX) (25);
	desc_802[26].offset = (BODY_INDEX) (-1);
	desc_802[26].type = (EIF_TYPE_INDEX) (-1);
	desc_802[26].gen_type = NULL;
	desc_802[27].body_index = (BODY_INDEX) (26);
	desc_802[27].offset = (BODY_INDEX) (-1);
	desc_802[27].type = (EIF_TYPE_INDEX) (-1);
	desc_802[27].gen_type = NULL;
	desc_802[28].body_index = (BODY_INDEX) (27);
	desc_802[28].offset = (BODY_INDEX) (-1);
	desc_802[28].type = (EIF_TYPE_INDEX) (-1);
	desc_802[28].gen_type = NULL;
	desc_802[29].body_index = (BODY_INDEX) (28);
	desc_802[29].offset = (BODY_INDEX) (-1);
	desc_802[29].type = (EIF_TYPE_INDEX) (801);
	desc_802[29].gen_type =  gen_type12_802;
	desc_802[30].body_index = (BODY_INDEX) (29);
	desc_802[30].offset = (BODY_INDEX) (-1);
	desc_802[30].type = (EIF_TYPE_INDEX) (252);
	desc_802[30].gen_type = NULL;
	desc_802[31].body_index = (BODY_INDEX) (30);
	desc_802[31].offset = (BODY_INDEX) (-1);
	desc_802[31].type = (EIF_TYPE_INDEX) (801);
	desc_802[31].gen_type =  gen_type13_802;
	desc_802[32].body_index = (BODY_INDEX) (5254);
	desc_802[32].offset = (BODY_INDEX) (0);
	desc_802[32].type = (EIF_TYPE_INDEX) (783);
	desc_802[32].gen_type =  gen_type14_802;
	desc_802[33].body_index = (BODY_INDEX) (5255);
	desc_802[33].offset = (BODY_INDEX) (-1);
	desc_802[33].type = (EIF_TYPE_INDEX) (-1);
	desc_802[33].gen_type = NULL;
	desc_802[34].body_index = (BODY_INDEX) (5256);
	desc_802[34].offset = (BODY_INDEX) (-1);
	desc_802[34].type = (EIF_TYPE_INDEX) (-1);
	desc_802[34].gen_type = NULL;
	desc_802[35].body_index = (BODY_INDEX) (5257);
	desc_802[35].offset = (BODY_INDEX) (-1);
	desc_802[35].type = (EIF_TYPE_INDEX) (-1);
	desc_802[35].gen_type =  gen_type15_802;
	desc_802[36].body_index = (BODY_INDEX) (5258);
	desc_802[36].offset = (BODY_INDEX) (-1);
	desc_802[36].type = (EIF_TYPE_INDEX) (-1);
	desc_802[36].gen_type =  gen_type16_802;
	desc_802[37].body_index = (BODY_INDEX) (5259);
	desc_802[37].offset = (BODY_INDEX) (-1);
	desc_802[37].type = (EIF_TYPE_INDEX) (225);
	desc_802[37].gen_type = NULL;
	desc_802[38].body_index = (BODY_INDEX) (5260);
	desc_802[38].offset = (BODY_INDEX) (-1);
	desc_802[38].type = (EIF_TYPE_INDEX) (-1);
	desc_802[38].gen_type = NULL;
	desc_802[39].body_index = (BODY_INDEX) (5261);
	desc_802[39].offset = (BODY_INDEX) (-1);
	desc_802[39].type = (EIF_TYPE_INDEX) (-1);
	desc_802[39].gen_type = NULL;
	desc_802[40].body_index = (BODY_INDEX) (-1);
	desc_802[40].offset = (BODY_INDEX) (-1);
	desc_802[40].type = (EIF_TYPE_INDEX) (-1);
	desc_802[40].gen_type =  gen_type17_802;
}

extern void Init802(void);
void Init802(void)
{
	if (desc_fill != 0)
		build_desc_802();
	IDSC(desc_802, 0, 801);
	IDSC(desc_802 + 1, 1, 801);
	IDSC(desc_802 + 32, 89, 801);
}


#ifdef __cplusplus
}
#endif
