/*
 * Class ITERABLE [NATURAL_64]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_485(void);
static EIF_TYPE_INDEX gen_type0_485 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_485 [] = {0xFF11,274,0xFF12,484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type2_485 [] = {0xFF11,484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type3_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_485 [] = {0xFF11,484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type6_485 [] = {0xFF11,484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type7_485 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_485 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_485 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_485 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_485 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_485 [] = {484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type13_485 [] = {0xFF11,484,249,0xFFFF};
static EIF_TYPE_INDEX gen_type14_485 [] = {0xFF11,483,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_485 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_485[34];

static void build_desc_485(void) {
	desc_485[0].body_index = (BODY_INDEX) (-1);
	desc_485[0].offset = (BODY_INDEX) (-1);
	desc_485[0].type = INVALID_DTYPE;
	desc_485[0].gen_type = NULL;
	desc_485[1].body_index = (BODY_INDEX) (0);
	desc_485[1].offset = (BODY_INDEX) (-1);
	desc_485[1].type = (EIF_TYPE_INDEX) (257);
	desc_485[1].gen_type =  gen_type0_485;
	desc_485[2].body_index = (BODY_INDEX) (1);
	desc_485[2].offset = (BODY_INDEX) (-1);
	desc_485[2].type = (EIF_TYPE_INDEX) (274);
	desc_485[2].gen_type =  gen_type1_485;
	desc_485[3].body_index = (BODY_INDEX) (2);
	desc_485[3].offset = (BODY_INDEX) (-1);
	desc_485[3].type = (EIF_TYPE_INDEX) (225);
	desc_485[3].gen_type = NULL;
	desc_485[4].body_index = (BODY_INDEX) (3);
	desc_485[4].offset = (BODY_INDEX) (-1);
	desc_485[4].type = (EIF_TYPE_INDEX) (225);
	desc_485[4].gen_type = NULL;
	desc_485[5].body_index = (BODY_INDEX) (4);
	desc_485[5].offset = (BODY_INDEX) (-1);
	desc_485[5].type = (EIF_TYPE_INDEX) (225);
	desc_485[5].gen_type = NULL;
	desc_485[6].body_index = (BODY_INDEX) (5);
	desc_485[6].offset = (BODY_INDEX) (-1);
	desc_485[6].type = (EIF_TYPE_INDEX) (225);
	desc_485[6].gen_type = NULL;
	desc_485[7].body_index = (BODY_INDEX) (6);
	desc_485[7].offset = (BODY_INDEX) (-1);
	desc_485[7].type = (EIF_TYPE_INDEX) (225);
	desc_485[7].gen_type = NULL;
	desc_485[8].body_index = (BODY_INDEX) (7);
	desc_485[8].offset = (BODY_INDEX) (-1);
	desc_485[8].type = (EIF_TYPE_INDEX) (225);
	desc_485[8].gen_type = NULL;
	desc_485[9].body_index = (BODY_INDEX) (8);
	desc_485[9].offset = (BODY_INDEX) (-1);
	desc_485[9].type = (EIF_TYPE_INDEX) (225);
	desc_485[9].gen_type = NULL;
	desc_485[10].body_index = (BODY_INDEX) (9);
	desc_485[10].offset = (BODY_INDEX) (-1);
	desc_485[10].type = (EIF_TYPE_INDEX) (225);
	desc_485[10].gen_type = NULL;
	desc_485[11].body_index = (BODY_INDEX) (10);
	desc_485[11].offset = (BODY_INDEX) (-1);
	desc_485[11].type = (EIF_TYPE_INDEX) (484);
	desc_485[11].gen_type =  gen_type2_485;
	desc_485[12].body_index = (BODY_INDEX) (11);
	desc_485[12].offset = (BODY_INDEX) (-1);
	desc_485[12].type = (EIF_TYPE_INDEX) (-1);
	desc_485[12].gen_type = NULL;
	desc_485[13].body_index = (BODY_INDEX) (12);
	desc_485[13].offset = (BODY_INDEX) (-1);
	desc_485[13].type = (EIF_TYPE_INDEX) (-1);
	desc_485[13].gen_type = NULL;
	desc_485[14].body_index = (BODY_INDEX) (13);
	desc_485[14].offset = (BODY_INDEX) (-1);
	desc_485[14].type = (EIF_TYPE_INDEX) (0);
	desc_485[14].gen_type =  gen_type3_485;
	desc_485[15].body_index = (BODY_INDEX) (14);
	desc_485[15].offset = (BODY_INDEX) (-1);
	desc_485[15].type = (EIF_TYPE_INDEX) (0);
	desc_485[15].gen_type =  gen_type4_485;
	desc_485[16].body_index = (BODY_INDEX) (15);
	desc_485[16].offset = (BODY_INDEX) (-1);
	desc_485[16].type = (EIF_TYPE_INDEX) (484);
	desc_485[16].gen_type =  gen_type5_485;
	desc_485[17].body_index = (BODY_INDEX) (16);
	desc_485[17].offset = (BODY_INDEX) (-1);
	desc_485[17].type = (EIF_TYPE_INDEX) (484);
	desc_485[17].gen_type =  gen_type6_485;
	desc_485[18].body_index = (BODY_INDEX) (17);
	desc_485[18].offset = (BODY_INDEX) (-1);
	desc_485[18].type = (EIF_TYPE_INDEX) (0);
	desc_485[18].gen_type =  gen_type7_485;
	desc_485[19].body_index = (BODY_INDEX) (18);
	desc_485[19].offset = (BODY_INDEX) (-1);
	desc_485[19].type = (EIF_TYPE_INDEX) (-1);
	desc_485[19].gen_type = NULL;
	desc_485[20].body_index = (BODY_INDEX) (19);
	desc_485[20].offset = (BODY_INDEX) (-1);
	desc_485[20].type = (EIF_TYPE_INDEX) (-1);
	desc_485[20].gen_type = NULL;
	desc_485[21].body_index = (BODY_INDEX) (20);
	desc_485[21].offset = (BODY_INDEX) (-1);
	desc_485[21].type = (EIF_TYPE_INDEX) (18);
	desc_485[21].gen_type =  gen_type8_485;
	desc_485[22].body_index = (BODY_INDEX) (21);
	desc_485[22].offset = (BODY_INDEX) (-1);
	desc_485[22].type = (EIF_TYPE_INDEX) (257);
	desc_485[22].gen_type =  gen_type9_485;
	desc_485[23].body_index = (BODY_INDEX) (22);
	desc_485[23].offset = (BODY_INDEX) (-1);
	desc_485[23].type = (EIF_TYPE_INDEX) (257);
	desc_485[23].gen_type =  gen_type10_485;
	desc_485[24].body_index = (BODY_INDEX) (23);
	desc_485[24].offset = (BODY_INDEX) (-1);
	desc_485[24].type = (EIF_TYPE_INDEX) (-1);
	desc_485[24].gen_type = NULL;
	desc_485[25].body_index = (BODY_INDEX) (24);
	desc_485[25].offset = (BODY_INDEX) (-1);
	desc_485[25].type = (EIF_TYPE_INDEX) (38);
	desc_485[25].gen_type =  gen_type11_485;
	desc_485[26].body_index = (BODY_INDEX) (25);
	desc_485[26].offset = (BODY_INDEX) (-1);
	desc_485[26].type = (EIF_TYPE_INDEX) (-1);
	desc_485[26].gen_type = NULL;
	desc_485[27].body_index = (BODY_INDEX) (26);
	desc_485[27].offset = (BODY_INDEX) (-1);
	desc_485[27].type = (EIF_TYPE_INDEX) (-1);
	desc_485[27].gen_type = NULL;
	desc_485[28].body_index = (BODY_INDEX) (27);
	desc_485[28].offset = (BODY_INDEX) (-1);
	desc_485[28].type = (EIF_TYPE_INDEX) (-1);
	desc_485[28].gen_type = NULL;
	desc_485[29].body_index = (BODY_INDEX) (28);
	desc_485[29].offset = (BODY_INDEX) (-1);
	desc_485[29].type = (EIF_TYPE_INDEX) (484);
	desc_485[29].gen_type =  gen_type12_485;
	desc_485[30].body_index = (BODY_INDEX) (29);
	desc_485[30].offset = (BODY_INDEX) (-1);
	desc_485[30].type = (EIF_TYPE_INDEX) (252);
	desc_485[30].gen_type = NULL;
	desc_485[31].body_index = (BODY_INDEX) (30);
	desc_485[31].offset = (BODY_INDEX) (-1);
	desc_485[31].type = (EIF_TYPE_INDEX) (484);
	desc_485[31].gen_type =  gen_type13_485;
	desc_485[32].body_index = (BODY_INDEX) (-1);
	desc_485[32].offset = (BODY_INDEX) (-1);
	desc_485[32].type = (EIF_TYPE_INDEX) (483);
	desc_485[32].gen_type =  gen_type14_485;
	desc_485[33].body_index = (BODY_INDEX) (-1);
	desc_485[33].offset = (BODY_INDEX) (-1);
	desc_485[33].type = (EIF_TYPE_INDEX) (-1);
	desc_485[33].gen_type =  gen_type15_485;
}

extern void Init485(void);
void Init485(void)
{
	if (desc_fill != 0)
		build_desc_485();
	IDSC(desc_485, 0, 484);
	IDSC(desc_485 + 1, 1, 484);
	IDSC(desc_485 + 32, 135, 484);
}


#ifdef __cplusplus
}
#endif
