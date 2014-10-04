/*
 * Class READABLE_INDEXABLE [NATURAL_32]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_625(void);
static EIF_TYPE_INDEX gen_type0_625 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_625 [] = {0xFF11,274,0xFF12,624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type2_625 [] = {0xFF11,624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type3_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_625 [] = {0xFF11,624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type6_625 [] = {0xFF11,624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type7_625 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_625 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_625 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_625 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_625 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_625 [] = {624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type13_625 [] = {0xFF11,624,240,0xFFFF};
static EIF_TYPE_INDEX gen_type14_625 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_625 [] = {0xFF11,180,0xFFFF};
static EIF_TYPE_INDEX gen_type16_625 [] = {0xFF11,621,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_625 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_625[37];

static void build_desc_625(void) {
	desc_625[0].body_index = (BODY_INDEX) (-1);
	desc_625[0].offset = (BODY_INDEX) (-1);
	desc_625[0].type = INVALID_DTYPE;
	desc_625[0].gen_type = NULL;
	desc_625[1].body_index = (BODY_INDEX) (0);
	desc_625[1].offset = (BODY_INDEX) (-1);
	desc_625[1].type = (EIF_TYPE_INDEX) (257);
	desc_625[1].gen_type =  gen_type0_625;
	desc_625[2].body_index = (BODY_INDEX) (1);
	desc_625[2].offset = (BODY_INDEX) (-1);
	desc_625[2].type = (EIF_TYPE_INDEX) (274);
	desc_625[2].gen_type =  gen_type1_625;
	desc_625[3].body_index = (BODY_INDEX) (2);
	desc_625[3].offset = (BODY_INDEX) (-1);
	desc_625[3].type = (EIF_TYPE_INDEX) (225);
	desc_625[3].gen_type = NULL;
	desc_625[4].body_index = (BODY_INDEX) (3);
	desc_625[4].offset = (BODY_INDEX) (-1);
	desc_625[4].type = (EIF_TYPE_INDEX) (225);
	desc_625[4].gen_type = NULL;
	desc_625[5].body_index = (BODY_INDEX) (4);
	desc_625[5].offset = (BODY_INDEX) (-1);
	desc_625[5].type = (EIF_TYPE_INDEX) (225);
	desc_625[5].gen_type = NULL;
	desc_625[6].body_index = (BODY_INDEX) (5);
	desc_625[6].offset = (BODY_INDEX) (-1);
	desc_625[6].type = (EIF_TYPE_INDEX) (225);
	desc_625[6].gen_type = NULL;
	desc_625[7].body_index = (BODY_INDEX) (6);
	desc_625[7].offset = (BODY_INDEX) (-1);
	desc_625[7].type = (EIF_TYPE_INDEX) (225);
	desc_625[7].gen_type = NULL;
	desc_625[8].body_index = (BODY_INDEX) (7);
	desc_625[8].offset = (BODY_INDEX) (-1);
	desc_625[8].type = (EIF_TYPE_INDEX) (225);
	desc_625[8].gen_type = NULL;
	desc_625[9].body_index = (BODY_INDEX) (8);
	desc_625[9].offset = (BODY_INDEX) (-1);
	desc_625[9].type = (EIF_TYPE_INDEX) (225);
	desc_625[9].gen_type = NULL;
	desc_625[10].body_index = (BODY_INDEX) (9);
	desc_625[10].offset = (BODY_INDEX) (-1);
	desc_625[10].type = (EIF_TYPE_INDEX) (225);
	desc_625[10].gen_type = NULL;
	desc_625[11].body_index = (BODY_INDEX) (10);
	desc_625[11].offset = (BODY_INDEX) (-1);
	desc_625[11].type = (EIF_TYPE_INDEX) (624);
	desc_625[11].gen_type =  gen_type2_625;
	desc_625[12].body_index = (BODY_INDEX) (11);
	desc_625[12].offset = (BODY_INDEX) (-1);
	desc_625[12].type = (EIF_TYPE_INDEX) (-1);
	desc_625[12].gen_type = NULL;
	desc_625[13].body_index = (BODY_INDEX) (12);
	desc_625[13].offset = (BODY_INDEX) (-1);
	desc_625[13].type = (EIF_TYPE_INDEX) (-1);
	desc_625[13].gen_type = NULL;
	desc_625[14].body_index = (BODY_INDEX) (13);
	desc_625[14].offset = (BODY_INDEX) (-1);
	desc_625[14].type = (EIF_TYPE_INDEX) (0);
	desc_625[14].gen_type =  gen_type3_625;
	desc_625[15].body_index = (BODY_INDEX) (14);
	desc_625[15].offset = (BODY_INDEX) (-1);
	desc_625[15].type = (EIF_TYPE_INDEX) (0);
	desc_625[15].gen_type =  gen_type4_625;
	desc_625[16].body_index = (BODY_INDEX) (15);
	desc_625[16].offset = (BODY_INDEX) (-1);
	desc_625[16].type = (EIF_TYPE_INDEX) (624);
	desc_625[16].gen_type =  gen_type5_625;
	desc_625[17].body_index = (BODY_INDEX) (16);
	desc_625[17].offset = (BODY_INDEX) (-1);
	desc_625[17].type = (EIF_TYPE_INDEX) (624);
	desc_625[17].gen_type =  gen_type6_625;
	desc_625[18].body_index = (BODY_INDEX) (17);
	desc_625[18].offset = (BODY_INDEX) (-1);
	desc_625[18].type = (EIF_TYPE_INDEX) (0);
	desc_625[18].gen_type =  gen_type7_625;
	desc_625[19].body_index = (BODY_INDEX) (18);
	desc_625[19].offset = (BODY_INDEX) (-1);
	desc_625[19].type = (EIF_TYPE_INDEX) (-1);
	desc_625[19].gen_type = NULL;
	desc_625[20].body_index = (BODY_INDEX) (19);
	desc_625[20].offset = (BODY_INDEX) (-1);
	desc_625[20].type = (EIF_TYPE_INDEX) (-1);
	desc_625[20].gen_type = NULL;
	desc_625[21].body_index = (BODY_INDEX) (20);
	desc_625[21].offset = (BODY_INDEX) (-1);
	desc_625[21].type = (EIF_TYPE_INDEX) (18);
	desc_625[21].gen_type =  gen_type8_625;
	desc_625[22].body_index = (BODY_INDEX) (21);
	desc_625[22].offset = (BODY_INDEX) (-1);
	desc_625[22].type = (EIF_TYPE_INDEX) (257);
	desc_625[22].gen_type =  gen_type9_625;
	desc_625[23].body_index = (BODY_INDEX) (22);
	desc_625[23].offset = (BODY_INDEX) (-1);
	desc_625[23].type = (EIF_TYPE_INDEX) (257);
	desc_625[23].gen_type =  gen_type10_625;
	desc_625[24].body_index = (BODY_INDEX) (23);
	desc_625[24].offset = (BODY_INDEX) (-1);
	desc_625[24].type = (EIF_TYPE_INDEX) (-1);
	desc_625[24].gen_type = NULL;
	desc_625[25].body_index = (BODY_INDEX) (24);
	desc_625[25].offset = (BODY_INDEX) (-1);
	desc_625[25].type = (EIF_TYPE_INDEX) (38);
	desc_625[25].gen_type =  gen_type11_625;
	desc_625[26].body_index = (BODY_INDEX) (25);
	desc_625[26].offset = (BODY_INDEX) (-1);
	desc_625[26].type = (EIF_TYPE_INDEX) (-1);
	desc_625[26].gen_type = NULL;
	desc_625[27].body_index = (BODY_INDEX) (26);
	desc_625[27].offset = (BODY_INDEX) (-1);
	desc_625[27].type = (EIF_TYPE_INDEX) (-1);
	desc_625[27].gen_type = NULL;
	desc_625[28].body_index = (BODY_INDEX) (27);
	desc_625[28].offset = (BODY_INDEX) (-1);
	desc_625[28].type = (EIF_TYPE_INDEX) (-1);
	desc_625[28].gen_type = NULL;
	desc_625[29].body_index = (BODY_INDEX) (28);
	desc_625[29].offset = (BODY_INDEX) (-1);
	desc_625[29].type = (EIF_TYPE_INDEX) (624);
	desc_625[29].gen_type =  gen_type12_625;
	desc_625[30].body_index = (BODY_INDEX) (29);
	desc_625[30].offset = (BODY_INDEX) (-1);
	desc_625[30].type = (EIF_TYPE_INDEX) (252);
	desc_625[30].gen_type = NULL;
	desc_625[31].body_index = (BODY_INDEX) (30);
	desc_625[31].offset = (BODY_INDEX) (-1);
	desc_625[31].type = (EIF_TYPE_INDEX) (624);
	desc_625[31].gen_type =  gen_type13_625;
	desc_625[32].body_index = (BODY_INDEX) (-1);
	desc_625[32].offset = (BODY_INDEX) (-1);
	desc_625[32].type = (EIF_TYPE_INDEX) (-1);
	desc_625[32].gen_type =  gen_type14_625;
	desc_625[33].body_index = (BODY_INDEX) (-1);
	desc_625[33].offset = (BODY_INDEX) (-1);
	desc_625[33].type = (EIF_TYPE_INDEX) (180);
	desc_625[33].gen_type =  gen_type15_625;
	desc_625[34].body_index = (BODY_INDEX) (-1);
	desc_625[34].offset = (BODY_INDEX) (-1);
	desc_625[34].type = (EIF_TYPE_INDEX) (225);
	desc_625[34].gen_type = NULL;
	desc_625[35].body_index = (BODY_INDEX) (3589);
	desc_625[35].offset = (BODY_INDEX) (-1);
	desc_625[35].type = (EIF_TYPE_INDEX) (621);
	desc_625[35].gen_type =  gen_type16_625;
	desc_625[36].body_index = (BODY_INDEX) (-1);
	desc_625[36].offset = (BODY_INDEX) (-1);
	desc_625[36].type = (EIF_TYPE_INDEX) (-1);
	desc_625[36].gen_type =  gen_type17_625;
}

extern void Init625(void);
void Init625(void)
{
	if (desc_fill != 0)
		build_desc_625();
	IDSC(desc_625, 0, 624);
	IDSC(desc_625 + 1, 1, 624);
	IDSC(desc_625 + 32, 288, 624);
	IDSC(desc_625 + 35, 135, 624);
}


#ifdef __cplusplus
}
#endif
