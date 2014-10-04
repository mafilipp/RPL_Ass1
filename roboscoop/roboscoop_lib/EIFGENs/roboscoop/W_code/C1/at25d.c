/*
 * Class ATOMIC_MEMORY_OPERATIONS
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_25(void);
static EIF_TYPE_INDEX gen_type0_25 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_25 [] = {0xFF11,274,0xFF12,24,0xFFFF};
static EIF_TYPE_INDEX gen_type2_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type3_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type6_25 [] = {0xFF11,24,0xFFFF};
static EIF_TYPE_INDEX gen_type7_25 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_25 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_25 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_25 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_25 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_25 [] = {0xFF11,24,0xFFFF};


static struct desc_info desc_25[38];

static void build_desc_25(void) {
	desc_25[0].body_index = (BODY_INDEX) (-1);
	desc_25[0].offset = (BODY_INDEX) (-1);
	desc_25[0].type = INVALID_DTYPE;
	desc_25[0].gen_type = NULL;
	desc_25[1].body_index = (BODY_INDEX) (0);
	desc_25[1].offset = (BODY_INDEX) (-1);
	desc_25[1].type = (EIF_TYPE_INDEX) (257);
	desc_25[1].gen_type =  gen_type0_25;
	desc_25[2].body_index = (BODY_INDEX) (1);
	desc_25[2].offset = (BODY_INDEX) (-1);
	desc_25[2].type = (EIF_TYPE_INDEX) (274);
	desc_25[2].gen_type =  gen_type1_25;
	desc_25[3].body_index = (BODY_INDEX) (2);
	desc_25[3].offset = (BODY_INDEX) (-1);
	desc_25[3].type = (EIF_TYPE_INDEX) (225);
	desc_25[3].gen_type = NULL;
	desc_25[4].body_index = (BODY_INDEX) (3);
	desc_25[4].offset = (BODY_INDEX) (-1);
	desc_25[4].type = (EIF_TYPE_INDEX) (225);
	desc_25[4].gen_type = NULL;
	desc_25[5].body_index = (BODY_INDEX) (4);
	desc_25[5].offset = (BODY_INDEX) (-1);
	desc_25[5].type = (EIF_TYPE_INDEX) (225);
	desc_25[5].gen_type = NULL;
	desc_25[6].body_index = (BODY_INDEX) (5);
	desc_25[6].offset = (BODY_INDEX) (-1);
	desc_25[6].type = (EIF_TYPE_INDEX) (225);
	desc_25[6].gen_type = NULL;
	desc_25[7].body_index = (BODY_INDEX) (6);
	desc_25[7].offset = (BODY_INDEX) (-1);
	desc_25[7].type = (EIF_TYPE_INDEX) (225);
	desc_25[7].gen_type = NULL;
	desc_25[8].body_index = (BODY_INDEX) (7);
	desc_25[8].offset = (BODY_INDEX) (-1);
	desc_25[8].type = (EIF_TYPE_INDEX) (225);
	desc_25[8].gen_type = NULL;
	desc_25[9].body_index = (BODY_INDEX) (8);
	desc_25[9].offset = (BODY_INDEX) (-1);
	desc_25[9].type = (EIF_TYPE_INDEX) (225);
	desc_25[9].gen_type = NULL;
	desc_25[10].body_index = (BODY_INDEX) (9);
	desc_25[10].offset = (BODY_INDEX) (-1);
	desc_25[10].type = (EIF_TYPE_INDEX) (225);
	desc_25[10].gen_type = NULL;
	desc_25[11].body_index = (BODY_INDEX) (10);
	desc_25[11].offset = (BODY_INDEX) (-1);
	desc_25[11].type = (EIF_TYPE_INDEX) (24);
	desc_25[11].gen_type =  gen_type2_25;
	desc_25[12].body_index = (BODY_INDEX) (11);
	desc_25[12].offset = (BODY_INDEX) (-1);
	desc_25[12].type = (EIF_TYPE_INDEX) (-1);
	desc_25[12].gen_type = NULL;
	desc_25[13].body_index = (BODY_INDEX) (12);
	desc_25[13].offset = (BODY_INDEX) (-1);
	desc_25[13].type = (EIF_TYPE_INDEX) (-1);
	desc_25[13].gen_type = NULL;
	desc_25[14].body_index = (BODY_INDEX) (13);
	desc_25[14].offset = (BODY_INDEX) (-1);
	desc_25[14].type = (EIF_TYPE_INDEX) (0);
	desc_25[14].gen_type =  gen_type3_25;
	desc_25[15].body_index = (BODY_INDEX) (14);
	desc_25[15].offset = (BODY_INDEX) (-1);
	desc_25[15].type = (EIF_TYPE_INDEX) (0);
	desc_25[15].gen_type =  gen_type4_25;
	desc_25[16].body_index = (BODY_INDEX) (15);
	desc_25[16].offset = (BODY_INDEX) (-1);
	desc_25[16].type = (EIF_TYPE_INDEX) (24);
	desc_25[16].gen_type =  gen_type5_25;
	desc_25[17].body_index = (BODY_INDEX) (16);
	desc_25[17].offset = (BODY_INDEX) (-1);
	desc_25[17].type = (EIF_TYPE_INDEX) (24);
	desc_25[17].gen_type =  gen_type6_25;
	desc_25[18].body_index = (BODY_INDEX) (17);
	desc_25[18].offset = (BODY_INDEX) (-1);
	desc_25[18].type = (EIF_TYPE_INDEX) (0);
	desc_25[18].gen_type =  gen_type7_25;
	desc_25[19].body_index = (BODY_INDEX) (18);
	desc_25[19].offset = (BODY_INDEX) (-1);
	desc_25[19].type = (EIF_TYPE_INDEX) (-1);
	desc_25[19].gen_type = NULL;
	desc_25[20].body_index = (BODY_INDEX) (19);
	desc_25[20].offset = (BODY_INDEX) (-1);
	desc_25[20].type = (EIF_TYPE_INDEX) (-1);
	desc_25[20].gen_type = NULL;
	desc_25[21].body_index = (BODY_INDEX) (20);
	desc_25[21].offset = (BODY_INDEX) (-1);
	desc_25[21].type = (EIF_TYPE_INDEX) (18);
	desc_25[21].gen_type =  gen_type8_25;
	desc_25[22].body_index = (BODY_INDEX) (21);
	desc_25[22].offset = (BODY_INDEX) (-1);
	desc_25[22].type = (EIF_TYPE_INDEX) (257);
	desc_25[22].gen_type =  gen_type9_25;
	desc_25[23].body_index = (BODY_INDEX) (22);
	desc_25[23].offset = (BODY_INDEX) (-1);
	desc_25[23].type = (EIF_TYPE_INDEX) (257);
	desc_25[23].gen_type =  gen_type10_25;
	desc_25[24].body_index = (BODY_INDEX) (23);
	desc_25[24].offset = (BODY_INDEX) (-1);
	desc_25[24].type = (EIF_TYPE_INDEX) (-1);
	desc_25[24].gen_type = NULL;
	desc_25[25].body_index = (BODY_INDEX) (24);
	desc_25[25].offset = (BODY_INDEX) (-1);
	desc_25[25].type = (EIF_TYPE_INDEX) (38);
	desc_25[25].gen_type =  gen_type11_25;
	desc_25[26].body_index = (BODY_INDEX) (25);
	desc_25[26].offset = (BODY_INDEX) (-1);
	desc_25[26].type = (EIF_TYPE_INDEX) (-1);
	desc_25[26].gen_type = NULL;
	desc_25[27].body_index = (BODY_INDEX) (26);
	desc_25[27].offset = (BODY_INDEX) (-1);
	desc_25[27].type = (EIF_TYPE_INDEX) (-1);
	desc_25[27].gen_type = NULL;
	desc_25[28].body_index = (BODY_INDEX) (27);
	desc_25[28].offset = (BODY_INDEX) (-1);
	desc_25[28].type = (EIF_TYPE_INDEX) (-1);
	desc_25[28].gen_type = NULL;
	desc_25[29].body_index = (BODY_INDEX) (28);
	desc_25[29].offset = (BODY_INDEX) (-1);
	desc_25[29].type = (EIF_TYPE_INDEX) (24);
	desc_25[29].gen_type = NULL;
	desc_25[30].body_index = (BODY_INDEX) (29);
	desc_25[30].offset = (BODY_INDEX) (-1);
	desc_25[30].type = (EIF_TYPE_INDEX) (252);
	desc_25[30].gen_type = NULL;
	desc_25[31].body_index = (BODY_INDEX) (30);
	desc_25[31].offset = (BODY_INDEX) (-1);
	desc_25[31].type = (EIF_TYPE_INDEX) (24);
	desc_25[31].gen_type =  gen_type12_25;
	desc_25[32].body_index = (BODY_INDEX) (400);
	desc_25[32].offset = (BODY_INDEX) (-1);
	desc_25[32].type = (EIF_TYPE_INDEX) (252);
	desc_25[32].gen_type = NULL;
	desc_25[33].body_index = (BODY_INDEX) (395);
	desc_25[33].offset = (BODY_INDEX) (-1);
	desc_25[33].type = (EIF_TYPE_INDEX) (246);
	desc_25[33].gen_type = NULL;
	desc_25[34].body_index = (BODY_INDEX) (396);
	desc_25[34].offset = (BODY_INDEX) (-1);
	desc_25[34].type = (EIF_TYPE_INDEX) (246);
	desc_25[34].gen_type = NULL;
	desc_25[35].body_index = (BODY_INDEX) (397);
	desc_25[35].offset = (BODY_INDEX) (-1);
	desc_25[35].type = (EIF_TYPE_INDEX) (246);
	desc_25[35].gen_type = NULL;
	desc_25[36].body_index = (BODY_INDEX) (398);
	desc_25[36].offset = (BODY_INDEX) (-1);
	desc_25[36].type = (EIF_TYPE_INDEX) (246);
	desc_25[36].gen_type = NULL;
	desc_25[37].body_index = (BODY_INDEX) (399);
	desc_25[37].offset = (BODY_INDEX) (-1);
	desc_25[37].type = (EIF_TYPE_INDEX) (246);
	desc_25[37].gen_type = NULL;
}

extern void Init25(void);
void Init25(void)
{
	if (desc_fill != 0)
		build_desc_25();
	IDSC(desc_25, 0, 24);
	IDSC(desc_25 + 1, 1, 24);
	IDSC(desc_25 + 32, 174, 24);
}


#ifdef __cplusplus
}
#endif
