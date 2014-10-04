/*
 * Class FINITE [BOOLEAN]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_420(void);
static EIF_TYPE_INDEX gen_type0_420 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_420 [] = {0xFF11,274,0xFF12,419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type2_420 [] = {0xFF11,419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type3_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_420 [] = {0xFF11,419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type6_420 [] = {0xFF11,419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type7_420 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_420 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_420 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_420 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_420 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_420 [] = {419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type13_420 [] = {0xFF11,419,225,0xFFFF};
static EIF_TYPE_INDEX gen_type14_420 [] = {0xFF11,407,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_420 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_420[43];

static void build_desc_420(void) {
	desc_420[0].body_index = (BODY_INDEX) (2259);
	desc_420[0].offset = (BODY_INDEX) (-1);
	desc_420[0].type = INVALID_DTYPE;
	desc_420[0].gen_type = NULL;
	desc_420[1].body_index = (BODY_INDEX) (0);
	desc_420[1].offset = (BODY_INDEX) (-1);
	desc_420[1].type = (EIF_TYPE_INDEX) (257);
	desc_420[1].gen_type =  gen_type0_420;
	desc_420[2].body_index = (BODY_INDEX) (1);
	desc_420[2].offset = (BODY_INDEX) (-1);
	desc_420[2].type = (EIF_TYPE_INDEX) (274);
	desc_420[2].gen_type =  gen_type1_420;
	desc_420[3].body_index = (BODY_INDEX) (2);
	desc_420[3].offset = (BODY_INDEX) (-1);
	desc_420[3].type = (EIF_TYPE_INDEX) (225);
	desc_420[3].gen_type = NULL;
	desc_420[4].body_index = (BODY_INDEX) (3);
	desc_420[4].offset = (BODY_INDEX) (-1);
	desc_420[4].type = (EIF_TYPE_INDEX) (225);
	desc_420[4].gen_type = NULL;
	desc_420[5].body_index = (BODY_INDEX) (4);
	desc_420[5].offset = (BODY_INDEX) (-1);
	desc_420[5].type = (EIF_TYPE_INDEX) (225);
	desc_420[5].gen_type = NULL;
	desc_420[6].body_index = (BODY_INDEX) (5);
	desc_420[6].offset = (BODY_INDEX) (-1);
	desc_420[6].type = (EIF_TYPE_INDEX) (225);
	desc_420[6].gen_type = NULL;
	desc_420[7].body_index = (BODY_INDEX) (6);
	desc_420[7].offset = (BODY_INDEX) (-1);
	desc_420[7].type = (EIF_TYPE_INDEX) (225);
	desc_420[7].gen_type = NULL;
	desc_420[8].body_index = (BODY_INDEX) (7);
	desc_420[8].offset = (BODY_INDEX) (-1);
	desc_420[8].type = (EIF_TYPE_INDEX) (225);
	desc_420[8].gen_type = NULL;
	desc_420[9].body_index = (BODY_INDEX) (8);
	desc_420[9].offset = (BODY_INDEX) (-1);
	desc_420[9].type = (EIF_TYPE_INDEX) (225);
	desc_420[9].gen_type = NULL;
	desc_420[10].body_index = (BODY_INDEX) (9);
	desc_420[10].offset = (BODY_INDEX) (-1);
	desc_420[10].type = (EIF_TYPE_INDEX) (225);
	desc_420[10].gen_type = NULL;
	desc_420[11].body_index = (BODY_INDEX) (10);
	desc_420[11].offset = (BODY_INDEX) (-1);
	desc_420[11].type = (EIF_TYPE_INDEX) (419);
	desc_420[11].gen_type =  gen_type2_420;
	desc_420[12].body_index = (BODY_INDEX) (11);
	desc_420[12].offset = (BODY_INDEX) (-1);
	desc_420[12].type = (EIF_TYPE_INDEX) (-1);
	desc_420[12].gen_type = NULL;
	desc_420[13].body_index = (BODY_INDEX) (12);
	desc_420[13].offset = (BODY_INDEX) (-1);
	desc_420[13].type = (EIF_TYPE_INDEX) (-1);
	desc_420[13].gen_type = NULL;
	desc_420[14].body_index = (BODY_INDEX) (13);
	desc_420[14].offset = (BODY_INDEX) (-1);
	desc_420[14].type = (EIF_TYPE_INDEX) (0);
	desc_420[14].gen_type =  gen_type3_420;
	desc_420[15].body_index = (BODY_INDEX) (14);
	desc_420[15].offset = (BODY_INDEX) (-1);
	desc_420[15].type = (EIF_TYPE_INDEX) (0);
	desc_420[15].gen_type =  gen_type4_420;
	desc_420[16].body_index = (BODY_INDEX) (15);
	desc_420[16].offset = (BODY_INDEX) (-1);
	desc_420[16].type = (EIF_TYPE_INDEX) (419);
	desc_420[16].gen_type =  gen_type5_420;
	desc_420[17].body_index = (BODY_INDEX) (16);
	desc_420[17].offset = (BODY_INDEX) (-1);
	desc_420[17].type = (EIF_TYPE_INDEX) (419);
	desc_420[17].gen_type =  gen_type6_420;
	desc_420[18].body_index = (BODY_INDEX) (17);
	desc_420[18].offset = (BODY_INDEX) (-1);
	desc_420[18].type = (EIF_TYPE_INDEX) (0);
	desc_420[18].gen_type =  gen_type7_420;
	desc_420[19].body_index = (BODY_INDEX) (18);
	desc_420[19].offset = (BODY_INDEX) (-1);
	desc_420[19].type = (EIF_TYPE_INDEX) (-1);
	desc_420[19].gen_type = NULL;
	desc_420[20].body_index = (BODY_INDEX) (19);
	desc_420[20].offset = (BODY_INDEX) (-1);
	desc_420[20].type = (EIF_TYPE_INDEX) (-1);
	desc_420[20].gen_type = NULL;
	desc_420[21].body_index = (BODY_INDEX) (20);
	desc_420[21].offset = (BODY_INDEX) (-1);
	desc_420[21].type = (EIF_TYPE_INDEX) (18);
	desc_420[21].gen_type =  gen_type8_420;
	desc_420[22].body_index = (BODY_INDEX) (21);
	desc_420[22].offset = (BODY_INDEX) (-1);
	desc_420[22].type = (EIF_TYPE_INDEX) (257);
	desc_420[22].gen_type =  gen_type9_420;
	desc_420[23].body_index = (BODY_INDEX) (22);
	desc_420[23].offset = (BODY_INDEX) (-1);
	desc_420[23].type = (EIF_TYPE_INDEX) (257);
	desc_420[23].gen_type =  gen_type10_420;
	desc_420[24].body_index = (BODY_INDEX) (23);
	desc_420[24].offset = (BODY_INDEX) (-1);
	desc_420[24].type = (EIF_TYPE_INDEX) (-1);
	desc_420[24].gen_type = NULL;
	desc_420[25].body_index = (BODY_INDEX) (24);
	desc_420[25].offset = (BODY_INDEX) (-1);
	desc_420[25].type = (EIF_TYPE_INDEX) (38);
	desc_420[25].gen_type =  gen_type11_420;
	desc_420[26].body_index = (BODY_INDEX) (25);
	desc_420[26].offset = (BODY_INDEX) (-1);
	desc_420[26].type = (EIF_TYPE_INDEX) (-1);
	desc_420[26].gen_type = NULL;
	desc_420[27].body_index = (BODY_INDEX) (26);
	desc_420[27].offset = (BODY_INDEX) (-1);
	desc_420[27].type = (EIF_TYPE_INDEX) (-1);
	desc_420[27].gen_type = NULL;
	desc_420[28].body_index = (BODY_INDEX) (27);
	desc_420[28].offset = (BODY_INDEX) (-1);
	desc_420[28].type = (EIF_TYPE_INDEX) (-1);
	desc_420[28].gen_type = NULL;
	desc_420[29].body_index = (BODY_INDEX) (28);
	desc_420[29].offset = (BODY_INDEX) (-1);
	desc_420[29].type = (EIF_TYPE_INDEX) (419);
	desc_420[29].gen_type =  gen_type12_420;
	desc_420[30].body_index = (BODY_INDEX) (29);
	desc_420[30].offset = (BODY_INDEX) (-1);
	desc_420[30].type = (EIF_TYPE_INDEX) (252);
	desc_420[30].gen_type = NULL;
	desc_420[31].body_index = (BODY_INDEX) (30);
	desc_420[31].offset = (BODY_INDEX) (-1);
	desc_420[31].type = (EIF_TYPE_INDEX) (419);
	desc_420[31].gen_type =  gen_type13_420;
	desc_420[32].body_index = (BODY_INDEX) (-1);
	desc_420[32].offset = (BODY_INDEX) (-1);
	desc_420[32].type = (EIF_TYPE_INDEX) (225);
	desc_420[32].gen_type = NULL;
	desc_420[33].body_index = (BODY_INDEX) (2260);
	desc_420[33].offset = (BODY_INDEX) (-1);
	desc_420[33].type = (EIF_TYPE_INDEX) (225);
	desc_420[33].gen_type = NULL;
	desc_420[34].body_index = (BODY_INDEX) (2096);
	desc_420[34].offset = (BODY_INDEX) (-1);
	desc_420[34].type = (EIF_TYPE_INDEX) (225);
	desc_420[34].gen_type = NULL;
	desc_420[35].body_index = (BODY_INDEX) (2097);
	desc_420[35].offset = (BODY_INDEX) (0);
	desc_420[35].type = (EIF_TYPE_INDEX) (225);
	desc_420[35].gen_type = NULL;
	desc_420[36].body_index = (BODY_INDEX) (2098);
	desc_420[36].offset = (BODY_INDEX) (-1);
	desc_420[36].type = (EIF_TYPE_INDEX) (225);
	desc_420[36].gen_type = NULL;
	desc_420[37].body_index = (BODY_INDEX) (2099);
	desc_420[37].offset = (BODY_INDEX) (-1);
	desc_420[37].type = (EIF_TYPE_INDEX) (-1);
	desc_420[37].gen_type = NULL;
	desc_420[38].body_index = (BODY_INDEX) (2100);
	desc_420[38].offset = (BODY_INDEX) (-1);
	desc_420[38].type = (EIF_TYPE_INDEX) (-1);
	desc_420[38].gen_type = NULL;
	desc_420[39].body_index = (BODY_INDEX) (-1);
	desc_420[39].offset = (BODY_INDEX) (-1);
	desc_420[39].type = (EIF_TYPE_INDEX) (407);
	desc_420[39].gen_type =  gen_type14_420;
	desc_420[40].body_index = (BODY_INDEX) (-1);
	desc_420[40].offset = (BODY_INDEX) (-1);
	desc_420[40].type = (EIF_TYPE_INDEX) (-1);
	desc_420[40].gen_type =  gen_type15_420;
	desc_420[41].body_index = (BODY_INDEX) (-1);
	desc_420[41].offset = (BODY_INDEX) (-1);
	desc_420[41].type = (EIF_TYPE_INDEX) (246);
	desc_420[41].gen_type = NULL;
	desc_420[42].body_index = (BODY_INDEX) (-1);
	desc_420[42].offset = (BODY_INDEX) (-1);
	desc_420[42].type = (EIF_TYPE_INDEX) (225);
	desc_420[42].gen_type = NULL;
}

extern void Init420(void);
void Init420(void)
{
	if (desc_fill != 0)
		build_desc_420();
	IDSC(desc_420, 0, 419);
	IDSC(desc_420 + 1, 1, 419);
	IDSC(desc_420 + 32, 84, 419);
	IDSC(desc_420 + 41, 52, 419);
	IDSC(desc_420 + 42, 36, 419);
}


#ifdef __cplusplus
}
#endif
