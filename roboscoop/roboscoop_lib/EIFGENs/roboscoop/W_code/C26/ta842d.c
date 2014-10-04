/*
 * Class TABLE [CHARACTER_32, INTEGER_32]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_842(void);
static EIF_TYPE_INDEX gen_type0_842 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_842 [] = {0xFF11,274,0xFF12,841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type2_842 [] = {0xFF11,841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type3_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_842 [] = {0xFF11,841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type6_842 [] = {0xFF11,841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type7_842 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_842 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_842 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_842 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_842 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_842 [] = {841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type13_842 [] = {0xFF11,841,216,246,0xFFFF};
static EIF_TYPE_INDEX gen_type14_842 [] = {0xFF11,824,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_842 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_842 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_842 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_842 [] = {0xFFF8,2,0xFFFF};


static struct desc_info desc_842[57];

static void build_desc_842(void) {
	desc_842[0].body_index = (BODY_INDEX) (-1);
	desc_842[0].offset = (BODY_INDEX) (-1);
	desc_842[0].type = INVALID_DTYPE;
	desc_842[0].gen_type = NULL;
	desc_842[1].body_index = (BODY_INDEX) (0);
	desc_842[1].offset = (BODY_INDEX) (-1);
	desc_842[1].type = (EIF_TYPE_INDEX) (257);
	desc_842[1].gen_type =  gen_type0_842;
	desc_842[2].body_index = (BODY_INDEX) (1);
	desc_842[2].offset = (BODY_INDEX) (-1);
	desc_842[2].type = (EIF_TYPE_INDEX) (274);
	desc_842[2].gen_type =  gen_type1_842;
	desc_842[3].body_index = (BODY_INDEX) (2);
	desc_842[3].offset = (BODY_INDEX) (-1);
	desc_842[3].type = (EIF_TYPE_INDEX) (225);
	desc_842[3].gen_type = NULL;
	desc_842[4].body_index = (BODY_INDEX) (3);
	desc_842[4].offset = (BODY_INDEX) (-1);
	desc_842[4].type = (EIF_TYPE_INDEX) (225);
	desc_842[4].gen_type = NULL;
	desc_842[5].body_index = (BODY_INDEX) (4);
	desc_842[5].offset = (BODY_INDEX) (-1);
	desc_842[5].type = (EIF_TYPE_INDEX) (225);
	desc_842[5].gen_type = NULL;
	desc_842[6].body_index = (BODY_INDEX) (5);
	desc_842[6].offset = (BODY_INDEX) (-1);
	desc_842[6].type = (EIF_TYPE_INDEX) (225);
	desc_842[6].gen_type = NULL;
	desc_842[7].body_index = (BODY_INDEX) (6);
	desc_842[7].offset = (BODY_INDEX) (-1);
	desc_842[7].type = (EIF_TYPE_INDEX) (225);
	desc_842[7].gen_type = NULL;
	desc_842[8].body_index = (BODY_INDEX) (7);
	desc_842[8].offset = (BODY_INDEX) (-1);
	desc_842[8].type = (EIF_TYPE_INDEX) (225);
	desc_842[8].gen_type = NULL;
	desc_842[9].body_index = (BODY_INDEX) (8);
	desc_842[9].offset = (BODY_INDEX) (-1);
	desc_842[9].type = (EIF_TYPE_INDEX) (225);
	desc_842[9].gen_type = NULL;
	desc_842[10].body_index = (BODY_INDEX) (9);
	desc_842[10].offset = (BODY_INDEX) (-1);
	desc_842[10].type = (EIF_TYPE_INDEX) (225);
	desc_842[10].gen_type = NULL;
	desc_842[11].body_index = (BODY_INDEX) (10);
	desc_842[11].offset = (BODY_INDEX) (-1);
	desc_842[11].type = (EIF_TYPE_INDEX) (841);
	desc_842[11].gen_type =  gen_type2_842;
	desc_842[12].body_index = (BODY_INDEX) (11);
	desc_842[12].offset = (BODY_INDEX) (-1);
	desc_842[12].type = (EIF_TYPE_INDEX) (-1);
	desc_842[12].gen_type = NULL;
	desc_842[13].body_index = (BODY_INDEX) (12);
	desc_842[13].offset = (BODY_INDEX) (-1);
	desc_842[13].type = (EIF_TYPE_INDEX) (-1);
	desc_842[13].gen_type = NULL;
	desc_842[14].body_index = (BODY_INDEX) (13);
	desc_842[14].offset = (BODY_INDEX) (-1);
	desc_842[14].type = (EIF_TYPE_INDEX) (0);
	desc_842[14].gen_type =  gen_type3_842;
	desc_842[15].body_index = (BODY_INDEX) (14);
	desc_842[15].offset = (BODY_INDEX) (-1);
	desc_842[15].type = (EIF_TYPE_INDEX) (0);
	desc_842[15].gen_type =  gen_type4_842;
	desc_842[16].body_index = (BODY_INDEX) (15);
	desc_842[16].offset = (BODY_INDEX) (-1);
	desc_842[16].type = (EIF_TYPE_INDEX) (841);
	desc_842[16].gen_type =  gen_type5_842;
	desc_842[17].body_index = (BODY_INDEX) (16);
	desc_842[17].offset = (BODY_INDEX) (-1);
	desc_842[17].type = (EIF_TYPE_INDEX) (841);
	desc_842[17].gen_type =  gen_type6_842;
	desc_842[18].body_index = (BODY_INDEX) (17);
	desc_842[18].offset = (BODY_INDEX) (-1);
	desc_842[18].type = (EIF_TYPE_INDEX) (0);
	desc_842[18].gen_type =  gen_type7_842;
	desc_842[19].body_index = (BODY_INDEX) (18);
	desc_842[19].offset = (BODY_INDEX) (-1);
	desc_842[19].type = (EIF_TYPE_INDEX) (-1);
	desc_842[19].gen_type = NULL;
	desc_842[20].body_index = (BODY_INDEX) (19);
	desc_842[20].offset = (BODY_INDEX) (-1);
	desc_842[20].type = (EIF_TYPE_INDEX) (-1);
	desc_842[20].gen_type = NULL;
	desc_842[21].body_index = (BODY_INDEX) (20);
	desc_842[21].offset = (BODY_INDEX) (-1);
	desc_842[21].type = (EIF_TYPE_INDEX) (18);
	desc_842[21].gen_type =  gen_type8_842;
	desc_842[22].body_index = (BODY_INDEX) (21);
	desc_842[22].offset = (BODY_INDEX) (-1);
	desc_842[22].type = (EIF_TYPE_INDEX) (257);
	desc_842[22].gen_type =  gen_type9_842;
	desc_842[23].body_index = (BODY_INDEX) (22);
	desc_842[23].offset = (BODY_INDEX) (-1);
	desc_842[23].type = (EIF_TYPE_INDEX) (257);
	desc_842[23].gen_type =  gen_type10_842;
	desc_842[24].body_index = (BODY_INDEX) (23);
	desc_842[24].offset = (BODY_INDEX) (-1);
	desc_842[24].type = (EIF_TYPE_INDEX) (-1);
	desc_842[24].gen_type = NULL;
	desc_842[25].body_index = (BODY_INDEX) (24);
	desc_842[25].offset = (BODY_INDEX) (-1);
	desc_842[25].type = (EIF_TYPE_INDEX) (38);
	desc_842[25].gen_type =  gen_type11_842;
	desc_842[26].body_index = (BODY_INDEX) (25);
	desc_842[26].offset = (BODY_INDEX) (-1);
	desc_842[26].type = (EIF_TYPE_INDEX) (-1);
	desc_842[26].gen_type = NULL;
	desc_842[27].body_index = (BODY_INDEX) (26);
	desc_842[27].offset = (BODY_INDEX) (-1);
	desc_842[27].type = (EIF_TYPE_INDEX) (-1);
	desc_842[27].gen_type = NULL;
	desc_842[28].body_index = (BODY_INDEX) (27);
	desc_842[28].offset = (BODY_INDEX) (-1);
	desc_842[28].type = (EIF_TYPE_INDEX) (-1);
	desc_842[28].gen_type = NULL;
	desc_842[29].body_index = (BODY_INDEX) (28);
	desc_842[29].offset = (BODY_INDEX) (-1);
	desc_842[29].type = (EIF_TYPE_INDEX) (841);
	desc_842[29].gen_type =  gen_type12_842;
	desc_842[30].body_index = (BODY_INDEX) (29);
	desc_842[30].offset = (BODY_INDEX) (-1);
	desc_842[30].type = (EIF_TYPE_INDEX) (252);
	desc_842[30].gen_type = NULL;
	desc_842[31].body_index = (BODY_INDEX) (30);
	desc_842[31].offset = (BODY_INDEX) (-1);
	desc_842[31].type = (EIF_TYPE_INDEX) (841);
	desc_842[31].gen_type =  gen_type13_842;
	desc_842[32].body_index = (BODY_INDEX) (-1);
	desc_842[32].offset = (BODY_INDEX) (-1);
	desc_842[32].type = (EIF_TYPE_INDEX) (225);
	desc_842[32].gen_type = NULL;
	desc_842[33].body_index = (BODY_INDEX) (-1);
	desc_842[33].offset = (BODY_INDEX) (-1);
	desc_842[33].type = (EIF_TYPE_INDEX) (225);
	desc_842[33].gen_type = NULL;
	desc_842[34].body_index = (BODY_INDEX) (2151);
	desc_842[34].offset = (BODY_INDEX) (-1);
	desc_842[34].type = (EIF_TYPE_INDEX) (225);
	desc_842[34].gen_type = NULL;
	desc_842[35].body_index = (BODY_INDEX) (2152);
	desc_842[35].offset = (BODY_INDEX) (0);
	desc_842[35].type = (EIF_TYPE_INDEX) (225);
	desc_842[35].gen_type = NULL;
	desc_842[36].body_index = (BODY_INDEX) (2153);
	desc_842[36].offset = (BODY_INDEX) (-1);
	desc_842[36].type = (EIF_TYPE_INDEX) (225);
	desc_842[36].gen_type = NULL;
	desc_842[37].body_index = (BODY_INDEX) (2154);
	desc_842[37].offset = (BODY_INDEX) (-1);
	desc_842[37].type = (EIF_TYPE_INDEX) (-1);
	desc_842[37].gen_type = NULL;
	desc_842[38].body_index = (BODY_INDEX) (2155);
	desc_842[38].offset = (BODY_INDEX) (-1);
	desc_842[38].type = (EIF_TYPE_INDEX) (-1);
	desc_842[38].gen_type = NULL;
	desc_842[39].body_index = (BODY_INDEX) (-1);
	desc_842[39].offset = (BODY_INDEX) (-1);
	desc_842[39].type = (EIF_TYPE_INDEX) (824);
	desc_842[39].gen_type =  gen_type14_842;
	desc_842[40].body_index = (BODY_INDEX) (-1);
	desc_842[40].offset = (BODY_INDEX) (-1);
	desc_842[40].type = (EIF_TYPE_INDEX) (-1);
	desc_842[40].gen_type =  gen_type15_842;
	desc_842[41].body_index = (BODY_INDEX) (-1);
	desc_842[41].offset = (BODY_INDEX) (-1);
	desc_842[41].type = (EIF_TYPE_INDEX) (225);
	desc_842[41].gen_type = NULL;
	desc_842[42].body_index = (BODY_INDEX) (-1);
	desc_842[42].offset = (BODY_INDEX) (-1);
	desc_842[42].type = (EIF_TYPE_INDEX) (225);
	desc_842[42].gen_type = NULL;
	desc_842[43].body_index = (BODY_INDEX) (2198);
	desc_842[43].offset = (BODY_INDEX) (-1);
	desc_842[43].type = (EIF_TYPE_INDEX) (225);
	desc_842[43].gen_type = NULL;
	desc_842[44].body_index = (BODY_INDEX) (2218);
	desc_842[44].offset = (BODY_INDEX) (-1);
	desc_842[44].type = (EIF_TYPE_INDEX) (-1);
	desc_842[44].gen_type = NULL;
	desc_842[45].body_index = (BODY_INDEX) (-1);
	desc_842[45].offset = (BODY_INDEX) (-1);
	desc_842[45].type = (EIF_TYPE_INDEX) (-1);
	desc_842[45].gen_type = NULL;
	desc_842[46].body_index = (BODY_INDEX) (2199);
	desc_842[46].offset = (BODY_INDEX) (-1);
	desc_842[46].type = (EIF_TYPE_INDEX) (-1);
	desc_842[46].gen_type = NULL;
	desc_842[47].body_index = (BODY_INDEX) (-1);
	desc_842[47].offset = (BODY_INDEX) (-1);
	desc_842[47].type = (EIF_TYPE_INDEX) (-1);
	desc_842[47].gen_type = NULL;
	desc_842[48].body_index = (BODY_INDEX) (2200);
	desc_842[48].offset = (BODY_INDEX) (-1);
	desc_842[48].type = (EIF_TYPE_INDEX) (-1);
	desc_842[48].gen_type = NULL;
	desc_842[49].body_index = (BODY_INDEX) (-1);
	desc_842[49].offset = (BODY_INDEX) (-1);
	desc_842[49].type = (EIF_TYPE_INDEX) (-1);
	desc_842[49].gen_type = NULL;
	desc_842[50].body_index = (BODY_INDEX) (-1);
	desc_842[50].offset = (BODY_INDEX) (-1);
	desc_842[50].type = (EIF_TYPE_INDEX) (-1);
	desc_842[50].gen_type =  gen_type16_842;
	desc_842[51].body_index = (BODY_INDEX) (-1);
	desc_842[51].offset = (BODY_INDEX) (-1);
	desc_842[51].type = (EIF_TYPE_INDEX) (-1);
	desc_842[51].gen_type =  gen_type17_842;
	desc_842[52].body_index = (BODY_INDEX) (-1);
	desc_842[52].offset = (BODY_INDEX) (-1);
	desc_842[52].type = (EIF_TYPE_INDEX) (225);
	desc_842[52].gen_type = NULL;
	desc_842[53].body_index = (BODY_INDEX) (-1);
	desc_842[53].offset = (BODY_INDEX) (-1);
	desc_842[53].type = (EIF_TYPE_INDEX) (-1);
	desc_842[53].gen_type = NULL;
	desc_842[54].body_index = (BODY_INDEX) (-1);
	desc_842[54].offset = (BODY_INDEX) (-1);
	desc_842[54].type = (EIF_TYPE_INDEX) (-1);
	desc_842[54].gen_type = NULL;
	desc_842[55].body_index = (BODY_INDEX) (-1);
	desc_842[55].offset = (BODY_INDEX) (-1);
	desc_842[55].type = (EIF_TYPE_INDEX) (-1);
	desc_842[55].gen_type =  gen_type18_842;
	desc_842[56].body_index = (BODY_INDEX) (-1);
	desc_842[56].offset = (BODY_INDEX) (-1);
	desc_842[56].type = (EIF_TYPE_INDEX) (246);
	desc_842[56].gen_type = NULL;
}

extern void Init842(void);
void Init842(void)
{
	if (desc_fill != 0)
		build_desc_842();
	IDSC(desc_842, 0, 841);
	IDSC(desc_842 + 1, 1, 841);
	IDSC(desc_842 + 32, 84, 841);
	IDSC(desc_842 + 41, 317, 841);
	IDSC(desc_842 + 50, 211, 841);
	IDSC(desc_842 + 56, 262, 841);
}


#ifdef __cplusplus
}
#endif
