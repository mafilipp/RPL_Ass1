/*
 * Class BOX [INTEGER_16]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_800(void);
static EIF_TYPE_INDEX gen_type0_800 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_800 [] = {0xFF11,274,0xFF12,799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type2_800 [] = {0xFF11,799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type3_800 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_800 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_800 [] = {0xFF11,799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type6_800 [] = {0xFF11,799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type7_800 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_800 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_800 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_800 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_800 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_800 [] = {799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type13_800 [] = {0xFF11,799,237,0xFFFF};
static EIF_TYPE_INDEX gen_type14_800 [] = {0xFF11,790,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_800 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_800[42];

static void build_desc_800(void) {
	desc_800[0].body_index = (BODY_INDEX) (-1);
	desc_800[0].offset = (BODY_INDEX) (-1);
	desc_800[0].type = INVALID_DTYPE;
	desc_800[0].gen_type = NULL;
	desc_800[1].body_index = (BODY_INDEX) (0);
	desc_800[1].offset = (BODY_INDEX) (-1);
	desc_800[1].type = (EIF_TYPE_INDEX) (257);
	desc_800[1].gen_type =  gen_type0_800;
	desc_800[2].body_index = (BODY_INDEX) (1);
	desc_800[2].offset = (BODY_INDEX) (-1);
	desc_800[2].type = (EIF_TYPE_INDEX) (274);
	desc_800[2].gen_type =  gen_type1_800;
	desc_800[3].body_index = (BODY_INDEX) (2);
	desc_800[3].offset = (BODY_INDEX) (-1);
	desc_800[3].type = (EIF_TYPE_INDEX) (225);
	desc_800[3].gen_type = NULL;
	desc_800[4].body_index = (BODY_INDEX) (3);
	desc_800[4].offset = (BODY_INDEX) (-1);
	desc_800[4].type = (EIF_TYPE_INDEX) (225);
	desc_800[4].gen_type = NULL;
	desc_800[5].body_index = (BODY_INDEX) (4);
	desc_800[5].offset = (BODY_INDEX) (-1);
	desc_800[5].type = (EIF_TYPE_INDEX) (225);
	desc_800[5].gen_type = NULL;
	desc_800[6].body_index = (BODY_INDEX) (5);
	desc_800[6].offset = (BODY_INDEX) (-1);
	desc_800[6].type = (EIF_TYPE_INDEX) (225);
	desc_800[6].gen_type = NULL;
	desc_800[7].body_index = (BODY_INDEX) (6);
	desc_800[7].offset = (BODY_INDEX) (-1);
	desc_800[7].type = (EIF_TYPE_INDEX) (225);
	desc_800[7].gen_type = NULL;
	desc_800[8].body_index = (BODY_INDEX) (7);
	desc_800[8].offset = (BODY_INDEX) (-1);
	desc_800[8].type = (EIF_TYPE_INDEX) (225);
	desc_800[8].gen_type = NULL;
	desc_800[9].body_index = (BODY_INDEX) (8);
	desc_800[9].offset = (BODY_INDEX) (-1);
	desc_800[9].type = (EIF_TYPE_INDEX) (225);
	desc_800[9].gen_type = NULL;
	desc_800[10].body_index = (BODY_INDEX) (9);
	desc_800[10].offset = (BODY_INDEX) (-1);
	desc_800[10].type = (EIF_TYPE_INDEX) (225);
	desc_800[10].gen_type = NULL;
	desc_800[11].body_index = (BODY_INDEX) (10);
	desc_800[11].offset = (BODY_INDEX) (-1);
	desc_800[11].type = (EIF_TYPE_INDEX) (799);
	desc_800[11].gen_type =  gen_type2_800;
	desc_800[12].body_index = (BODY_INDEX) (11);
	desc_800[12].offset = (BODY_INDEX) (-1);
	desc_800[12].type = (EIF_TYPE_INDEX) (-1);
	desc_800[12].gen_type = NULL;
	desc_800[13].body_index = (BODY_INDEX) (12);
	desc_800[13].offset = (BODY_INDEX) (-1);
	desc_800[13].type = (EIF_TYPE_INDEX) (-1);
	desc_800[13].gen_type = NULL;
	desc_800[14].body_index = (BODY_INDEX) (13);
	desc_800[14].offset = (BODY_INDEX) (-1);
	desc_800[14].type = (EIF_TYPE_INDEX) (0);
	desc_800[14].gen_type =  gen_type3_800;
	desc_800[15].body_index = (BODY_INDEX) (14);
	desc_800[15].offset = (BODY_INDEX) (-1);
	desc_800[15].type = (EIF_TYPE_INDEX) (0);
	desc_800[15].gen_type =  gen_type4_800;
	desc_800[16].body_index = (BODY_INDEX) (15);
	desc_800[16].offset = (BODY_INDEX) (-1);
	desc_800[16].type = (EIF_TYPE_INDEX) (799);
	desc_800[16].gen_type =  gen_type5_800;
	desc_800[17].body_index = (BODY_INDEX) (16);
	desc_800[17].offset = (BODY_INDEX) (-1);
	desc_800[17].type = (EIF_TYPE_INDEX) (799);
	desc_800[17].gen_type =  gen_type6_800;
	desc_800[18].body_index = (BODY_INDEX) (17);
	desc_800[18].offset = (BODY_INDEX) (-1);
	desc_800[18].type = (EIF_TYPE_INDEX) (0);
	desc_800[18].gen_type =  gen_type7_800;
	desc_800[19].body_index = (BODY_INDEX) (18);
	desc_800[19].offset = (BODY_INDEX) (-1);
	desc_800[19].type = (EIF_TYPE_INDEX) (-1);
	desc_800[19].gen_type = NULL;
	desc_800[20].body_index = (BODY_INDEX) (19);
	desc_800[20].offset = (BODY_INDEX) (-1);
	desc_800[20].type = (EIF_TYPE_INDEX) (-1);
	desc_800[20].gen_type = NULL;
	desc_800[21].body_index = (BODY_INDEX) (20);
	desc_800[21].offset = (BODY_INDEX) (-1);
	desc_800[21].type = (EIF_TYPE_INDEX) (18);
	desc_800[21].gen_type =  gen_type8_800;
	desc_800[22].body_index = (BODY_INDEX) (21);
	desc_800[22].offset = (BODY_INDEX) (-1);
	desc_800[22].type = (EIF_TYPE_INDEX) (257);
	desc_800[22].gen_type =  gen_type9_800;
	desc_800[23].body_index = (BODY_INDEX) (22);
	desc_800[23].offset = (BODY_INDEX) (-1);
	desc_800[23].type = (EIF_TYPE_INDEX) (257);
	desc_800[23].gen_type =  gen_type10_800;
	desc_800[24].body_index = (BODY_INDEX) (23);
	desc_800[24].offset = (BODY_INDEX) (-1);
	desc_800[24].type = (EIF_TYPE_INDEX) (-1);
	desc_800[24].gen_type = NULL;
	desc_800[25].body_index = (BODY_INDEX) (24);
	desc_800[25].offset = (BODY_INDEX) (-1);
	desc_800[25].type = (EIF_TYPE_INDEX) (38);
	desc_800[25].gen_type =  gen_type11_800;
	desc_800[26].body_index = (BODY_INDEX) (25);
	desc_800[26].offset = (BODY_INDEX) (-1);
	desc_800[26].type = (EIF_TYPE_INDEX) (-1);
	desc_800[26].gen_type = NULL;
	desc_800[27].body_index = (BODY_INDEX) (26);
	desc_800[27].offset = (BODY_INDEX) (-1);
	desc_800[27].type = (EIF_TYPE_INDEX) (-1);
	desc_800[27].gen_type = NULL;
	desc_800[28].body_index = (BODY_INDEX) (27);
	desc_800[28].offset = (BODY_INDEX) (-1);
	desc_800[28].type = (EIF_TYPE_INDEX) (-1);
	desc_800[28].gen_type = NULL;
	desc_800[29].body_index = (BODY_INDEX) (28);
	desc_800[29].offset = (BODY_INDEX) (-1);
	desc_800[29].type = (EIF_TYPE_INDEX) (799);
	desc_800[29].gen_type =  gen_type12_800;
	desc_800[30].body_index = (BODY_INDEX) (29);
	desc_800[30].offset = (BODY_INDEX) (-1);
	desc_800[30].type = (EIF_TYPE_INDEX) (252);
	desc_800[30].gen_type = NULL;
	desc_800[31].body_index = (BODY_INDEX) (30);
	desc_800[31].offset = (BODY_INDEX) (-1);
	desc_800[31].type = (EIF_TYPE_INDEX) (799);
	desc_800[31].gen_type =  gen_type13_800;
	desc_800[32].body_index = (BODY_INDEX) (-1);
	desc_800[32].offset = (BODY_INDEX) (-1);
	desc_800[32].type = (EIF_TYPE_INDEX) (225);
	desc_800[32].gen_type = NULL;
	desc_800[33].body_index = (BODY_INDEX) (-1);
	desc_800[33].offset = (BODY_INDEX) (-1);
	desc_800[33].type = (EIF_TYPE_INDEX) (225);
	desc_800[33].gen_type = NULL;
	desc_800[34].body_index = (BODY_INDEX) (2146);
	desc_800[34].offset = (BODY_INDEX) (-1);
	desc_800[34].type = (EIF_TYPE_INDEX) (225);
	desc_800[34].gen_type = NULL;
	desc_800[35].body_index = (BODY_INDEX) (2147);
	desc_800[35].offset = (BODY_INDEX) (0);
	desc_800[35].type = (EIF_TYPE_INDEX) (225);
	desc_800[35].gen_type = NULL;
	desc_800[36].body_index = (BODY_INDEX) (2148);
	desc_800[36].offset = (BODY_INDEX) (-1);
	desc_800[36].type = (EIF_TYPE_INDEX) (225);
	desc_800[36].gen_type = NULL;
	desc_800[37].body_index = (BODY_INDEX) (2149);
	desc_800[37].offset = (BODY_INDEX) (-1);
	desc_800[37].type = (EIF_TYPE_INDEX) (-1);
	desc_800[37].gen_type = NULL;
	desc_800[38].body_index = (BODY_INDEX) (2150);
	desc_800[38].offset = (BODY_INDEX) (-1);
	desc_800[38].type = (EIF_TYPE_INDEX) (-1);
	desc_800[38].gen_type = NULL;
	desc_800[39].body_index = (BODY_INDEX) (-1);
	desc_800[39].offset = (BODY_INDEX) (-1);
	desc_800[39].type = (EIF_TYPE_INDEX) (790);
	desc_800[39].gen_type =  gen_type14_800;
	desc_800[40].body_index = (BODY_INDEX) (-1);
	desc_800[40].offset = (BODY_INDEX) (-1);
	desc_800[40].type = (EIF_TYPE_INDEX) (-1);
	desc_800[40].gen_type =  gen_type15_800;
	desc_800[41].body_index = (BODY_INDEX) (-1);
	desc_800[41].offset = (BODY_INDEX) (-1);
	desc_800[41].type = (EIF_TYPE_INDEX) (225);
	desc_800[41].gen_type = NULL;
}

extern void Init800(void);
void Init800(void)
{
	if (desc_fill != 0)
		build_desc_800();
	IDSC(desc_800, 0, 799);
	IDSC(desc_800 + 1, 1, 799);
	IDSC(desc_800 + 32, 84, 799);
	IDSC(desc_800 + 41, 36, 799);
}


#ifdef __cplusplus
}
#endif
