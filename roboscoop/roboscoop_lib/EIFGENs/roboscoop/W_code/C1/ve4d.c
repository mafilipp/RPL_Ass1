/*
 * Class VECTOR_2D
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_4(void);
static EIF_TYPE_INDEX gen_type0_4 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_4 [] = {0xFF11,450,3,0xFFFF};
static EIF_TYPE_INDEX gen_type2_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_4 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_4 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type6_4 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type7_4 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type8_4 [] = {0xFF11,38,0xFFFF};


static struct desc_info desc_4[35];

static void build_desc_4(void) {
	desc_4[0].body_index = (BODY_INDEX) (-1);
	desc_4[0].offset = (BODY_INDEX) (-1);
	desc_4[0].type = INVALID_DTYPE;
	desc_4[0].gen_type = NULL;
	desc_4[1].body_index = (BODY_INDEX) (0);
	desc_4[1].offset = (BODY_INDEX) (-1);
	desc_4[1].type = (EIF_TYPE_INDEX) (257);
	desc_4[1].gen_type =  gen_type0_4;
	desc_4[2].body_index = (BODY_INDEX) (1);
	desc_4[2].offset = (BODY_INDEX) (-1);
	desc_4[2].type = (EIF_TYPE_INDEX) (450);
	desc_4[2].gen_type =  gen_type1_4;
	desc_4[3].body_index = (BODY_INDEX) (2);
	desc_4[3].offset = (BODY_INDEX) (-1);
	desc_4[3].type = (EIF_TYPE_INDEX) (225);
	desc_4[3].gen_type = NULL;
	desc_4[4].body_index = (BODY_INDEX) (3);
	desc_4[4].offset = (BODY_INDEX) (-1);
	desc_4[4].type = (EIF_TYPE_INDEX) (225);
	desc_4[4].gen_type = NULL;
	desc_4[5].body_index = (BODY_INDEX) (4);
	desc_4[5].offset = (BODY_INDEX) (-1);
	desc_4[5].type = (EIF_TYPE_INDEX) (225);
	desc_4[5].gen_type = NULL;
	desc_4[6].body_index = (BODY_INDEX) (5);
	desc_4[6].offset = (BODY_INDEX) (-1);
	desc_4[6].type = (EIF_TYPE_INDEX) (225);
	desc_4[6].gen_type = NULL;
	desc_4[7].body_index = (BODY_INDEX) (6);
	desc_4[7].offset = (BODY_INDEX) (-1);
	desc_4[7].type = (EIF_TYPE_INDEX) (225);
	desc_4[7].gen_type = NULL;
	desc_4[8].body_index = (BODY_INDEX) (7);
	desc_4[8].offset = (BODY_INDEX) (-1);
	desc_4[8].type = (EIF_TYPE_INDEX) (225);
	desc_4[8].gen_type = NULL;
	desc_4[9].body_index = (BODY_INDEX) (8);
	desc_4[9].offset = (BODY_INDEX) (-1);
	desc_4[9].type = (EIF_TYPE_INDEX) (225);
	desc_4[9].gen_type = NULL;
	desc_4[10].body_index = (BODY_INDEX) (9);
	desc_4[10].offset = (BODY_INDEX) (-1);
	desc_4[10].type = (EIF_TYPE_INDEX) (225);
	desc_4[10].gen_type = NULL;
	desc_4[11].body_index = (BODY_INDEX) (10);
	desc_4[11].offset = (BODY_INDEX) (-1);
	desc_4[11].type = (EIF_TYPE_INDEX) (3);
	desc_4[11].gen_type = NULL;
	desc_4[12].body_index = (BODY_INDEX) (11);
	desc_4[12].offset = (BODY_INDEX) (-1);
	desc_4[12].type = (EIF_TYPE_INDEX) (-1);
	desc_4[12].gen_type = NULL;
	desc_4[13].body_index = (BODY_INDEX) (12);
	desc_4[13].offset = (BODY_INDEX) (-1);
	desc_4[13].type = (EIF_TYPE_INDEX) (-1);
	desc_4[13].gen_type = NULL;
	desc_4[14].body_index = (BODY_INDEX) (13);
	desc_4[14].offset = (BODY_INDEX) (-1);
	desc_4[14].type = (EIF_TYPE_INDEX) (0);
	desc_4[14].gen_type =  gen_type2_4;
	desc_4[15].body_index = (BODY_INDEX) (14);
	desc_4[15].offset = (BODY_INDEX) (-1);
	desc_4[15].type = (EIF_TYPE_INDEX) (0);
	desc_4[15].gen_type =  gen_type3_4;
	desc_4[16].body_index = (BODY_INDEX) (15);
	desc_4[16].offset = (BODY_INDEX) (-1);
	desc_4[16].type = (EIF_TYPE_INDEX) (3);
	desc_4[16].gen_type = NULL;
	desc_4[17].body_index = (BODY_INDEX) (16);
	desc_4[17].offset = (BODY_INDEX) (-1);
	desc_4[17].type = (EIF_TYPE_INDEX) (3);
	desc_4[17].gen_type = NULL;
	desc_4[18].body_index = (BODY_INDEX) (17);
	desc_4[18].offset = (BODY_INDEX) (-1);
	desc_4[18].type = (EIF_TYPE_INDEX) (0);
	desc_4[18].gen_type =  gen_type4_4;
	desc_4[19].body_index = (BODY_INDEX) (18);
	desc_4[19].offset = (BODY_INDEX) (-1);
	desc_4[19].type = (EIF_TYPE_INDEX) (-1);
	desc_4[19].gen_type = NULL;
	desc_4[20].body_index = (BODY_INDEX) (19);
	desc_4[20].offset = (BODY_INDEX) (-1);
	desc_4[20].type = (EIF_TYPE_INDEX) (-1);
	desc_4[20].gen_type = NULL;
	desc_4[21].body_index = (BODY_INDEX) (20);
	desc_4[21].offset = (BODY_INDEX) (-1);
	desc_4[21].type = (EIF_TYPE_INDEX) (18);
	desc_4[21].gen_type =  gen_type5_4;
	desc_4[22].body_index = (BODY_INDEX) (21);
	desc_4[22].offset = (BODY_INDEX) (-1);
	desc_4[22].type = (EIF_TYPE_INDEX) (257);
	desc_4[22].gen_type =  gen_type6_4;
	desc_4[23].body_index = (BODY_INDEX) (22);
	desc_4[23].offset = (BODY_INDEX) (-1);
	desc_4[23].type = (EIF_TYPE_INDEX) (257);
	desc_4[23].gen_type =  gen_type7_4;
	desc_4[24].body_index = (BODY_INDEX) (23);
	desc_4[24].offset = (BODY_INDEX) (-1);
	desc_4[24].type = (EIF_TYPE_INDEX) (-1);
	desc_4[24].gen_type = NULL;
	desc_4[25].body_index = (BODY_INDEX) (24);
	desc_4[25].offset = (BODY_INDEX) (-1);
	desc_4[25].type = (EIF_TYPE_INDEX) (38);
	desc_4[25].gen_type =  gen_type8_4;
	desc_4[26].body_index = (BODY_INDEX) (25);
	desc_4[26].offset = (BODY_INDEX) (-1);
	desc_4[26].type = (EIF_TYPE_INDEX) (-1);
	desc_4[26].gen_type = NULL;
	desc_4[27].body_index = (BODY_INDEX) (26);
	desc_4[27].offset = (BODY_INDEX) (-1);
	desc_4[27].type = (EIF_TYPE_INDEX) (-1);
	desc_4[27].gen_type = NULL;
	desc_4[28].body_index = (BODY_INDEX) (27);
	desc_4[28].offset = (BODY_INDEX) (-1);
	desc_4[28].type = (EIF_TYPE_INDEX) (-1);
	desc_4[28].gen_type = NULL;
	desc_4[29].body_index = (BODY_INDEX) (28);
	desc_4[29].offset = (BODY_INDEX) (-1);
	desc_4[29].type = (EIF_TYPE_INDEX) (3);
	desc_4[29].gen_type = NULL;
	desc_4[30].body_index = (BODY_INDEX) (29);
	desc_4[30].offset = (BODY_INDEX) (-1);
	desc_4[30].type = (EIF_TYPE_INDEX) (252);
	desc_4[30].gen_type = NULL;
	desc_4[31].body_index = (BODY_INDEX) (30);
	desc_4[31].offset = (BODY_INDEX) (-1);
	desc_4[31].type = (EIF_TYPE_INDEX) (3);
	desc_4[31].gen_type = NULL;
	desc_4[32].body_index = (BODY_INDEX) (37);
	desc_4[32].offset = (BODY_INDEX) (0);
	desc_4[32].type = (EIF_TYPE_INDEX) (228);
	desc_4[32].gen_type = NULL;
	desc_4[33].body_index = (BODY_INDEX) (38);
	desc_4[33].offset = (BODY_INDEX) (8);
	desc_4[33].type = (EIF_TYPE_INDEX) (228);
	desc_4[33].gen_type = NULL;
	desc_4[34].body_index = (BODY_INDEX) (39);
	desc_4[34].offset = (BODY_INDEX) (-1);
	desc_4[34].type = (EIF_TYPE_INDEX) (-1);
	desc_4[34].gen_type = NULL;
}

extern void Init4(void);
void Init4(void)
{
	if (desc_fill != 0)
		build_desc_4();
	IDSC(desc_4, 0, 3);
	IDSC(desc_4 + 1, 1, 3);
	IDSC(desc_4 + 32, 346, 3);
}


#ifdef __cplusplus
}
#endif
