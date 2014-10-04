/*
 * Class SED_TYPE_MISMATCH
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_12(void);
static EIF_TYPE_INDEX gen_type0_12 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_12 [] = {0xFF11,274,0xFF12,11,0xFFFF};
static EIF_TYPE_INDEX gen_type2_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type3_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type6_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type7_12 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_12 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_12 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_12 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_12 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_12 [] = {0xFF11,11,0xFFFF};
static EIF_TYPE_INDEX gen_type13_12 [] = {0xFF11,391,0xFF11,0xFF11,0xFFF9,9,211,0xFF11,257,0xFF11,257,246,246,246,246,225,225,225,0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type14_12 [] = {0xFF11,387,0xFF11,0xFF11,0xFFF9,9,211,0xFF11,257,0xFF11,257,246,246,246,246,225,225,225,246,0xFFFF};
static EIF_TYPE_INDEX gen_type15_12 [] = {0xFF11,0xFFF9,9,211,0xFF11,257,0xFF11,257,246,246,246,246,225,225,225,0xFFFF};
static EIF_TYPE_INDEX gen_type16_12 [] = {0xFF11,168,0xFFFF};


static struct desc_info desc_12[51];

static void build_desc_12(void) {
	desc_12[0].body_index = (BODY_INDEX) (97);
	desc_12[0].offset = (BODY_INDEX) (-1);
	desc_12[0].type = INVALID_DTYPE;
	desc_12[0].gen_type = NULL;
	desc_12[1].body_index = (BODY_INDEX) (0);
	desc_12[1].offset = (BODY_INDEX) (-1);
	desc_12[1].type = (EIF_TYPE_INDEX) (257);
	desc_12[1].gen_type =  gen_type0_12;
	desc_12[2].body_index = (BODY_INDEX) (1);
	desc_12[2].offset = (BODY_INDEX) (-1);
	desc_12[2].type = (EIF_TYPE_INDEX) (274);
	desc_12[2].gen_type =  gen_type1_12;
	desc_12[3].body_index = (BODY_INDEX) (2);
	desc_12[3].offset = (BODY_INDEX) (-1);
	desc_12[3].type = (EIF_TYPE_INDEX) (225);
	desc_12[3].gen_type = NULL;
	desc_12[4].body_index = (BODY_INDEX) (3);
	desc_12[4].offset = (BODY_INDEX) (-1);
	desc_12[4].type = (EIF_TYPE_INDEX) (225);
	desc_12[4].gen_type = NULL;
	desc_12[5].body_index = (BODY_INDEX) (4);
	desc_12[5].offset = (BODY_INDEX) (-1);
	desc_12[5].type = (EIF_TYPE_INDEX) (225);
	desc_12[5].gen_type = NULL;
	desc_12[6].body_index = (BODY_INDEX) (5);
	desc_12[6].offset = (BODY_INDEX) (-1);
	desc_12[6].type = (EIF_TYPE_INDEX) (225);
	desc_12[6].gen_type = NULL;
	desc_12[7].body_index = (BODY_INDEX) (6);
	desc_12[7].offset = (BODY_INDEX) (-1);
	desc_12[7].type = (EIF_TYPE_INDEX) (225);
	desc_12[7].gen_type = NULL;
	desc_12[8].body_index = (BODY_INDEX) (7);
	desc_12[8].offset = (BODY_INDEX) (-1);
	desc_12[8].type = (EIF_TYPE_INDEX) (225);
	desc_12[8].gen_type = NULL;
	desc_12[9].body_index = (BODY_INDEX) (8);
	desc_12[9].offset = (BODY_INDEX) (-1);
	desc_12[9].type = (EIF_TYPE_INDEX) (225);
	desc_12[9].gen_type = NULL;
	desc_12[10].body_index = (BODY_INDEX) (9);
	desc_12[10].offset = (BODY_INDEX) (-1);
	desc_12[10].type = (EIF_TYPE_INDEX) (225);
	desc_12[10].gen_type = NULL;
	desc_12[11].body_index = (BODY_INDEX) (10);
	desc_12[11].offset = (BODY_INDEX) (-1);
	desc_12[11].type = (EIF_TYPE_INDEX) (11);
	desc_12[11].gen_type =  gen_type2_12;
	desc_12[12].body_index = (BODY_INDEX) (11);
	desc_12[12].offset = (BODY_INDEX) (-1);
	desc_12[12].type = (EIF_TYPE_INDEX) (-1);
	desc_12[12].gen_type = NULL;
	desc_12[13].body_index = (BODY_INDEX) (12);
	desc_12[13].offset = (BODY_INDEX) (-1);
	desc_12[13].type = (EIF_TYPE_INDEX) (-1);
	desc_12[13].gen_type = NULL;
	desc_12[14].body_index = (BODY_INDEX) (13);
	desc_12[14].offset = (BODY_INDEX) (-1);
	desc_12[14].type = (EIF_TYPE_INDEX) (0);
	desc_12[14].gen_type =  gen_type3_12;
	desc_12[15].body_index = (BODY_INDEX) (14);
	desc_12[15].offset = (BODY_INDEX) (-1);
	desc_12[15].type = (EIF_TYPE_INDEX) (0);
	desc_12[15].gen_type =  gen_type4_12;
	desc_12[16].body_index = (BODY_INDEX) (15);
	desc_12[16].offset = (BODY_INDEX) (-1);
	desc_12[16].type = (EIF_TYPE_INDEX) (11);
	desc_12[16].gen_type =  gen_type5_12;
	desc_12[17].body_index = (BODY_INDEX) (16);
	desc_12[17].offset = (BODY_INDEX) (-1);
	desc_12[17].type = (EIF_TYPE_INDEX) (11);
	desc_12[17].gen_type =  gen_type6_12;
	desc_12[18].body_index = (BODY_INDEX) (17);
	desc_12[18].offset = (BODY_INDEX) (-1);
	desc_12[18].type = (EIF_TYPE_INDEX) (0);
	desc_12[18].gen_type =  gen_type7_12;
	desc_12[19].body_index = (BODY_INDEX) (18);
	desc_12[19].offset = (BODY_INDEX) (-1);
	desc_12[19].type = (EIF_TYPE_INDEX) (-1);
	desc_12[19].gen_type = NULL;
	desc_12[20].body_index = (BODY_INDEX) (19);
	desc_12[20].offset = (BODY_INDEX) (-1);
	desc_12[20].type = (EIF_TYPE_INDEX) (-1);
	desc_12[20].gen_type = NULL;
	desc_12[21].body_index = (BODY_INDEX) (20);
	desc_12[21].offset = (BODY_INDEX) (-1);
	desc_12[21].type = (EIF_TYPE_INDEX) (18);
	desc_12[21].gen_type =  gen_type8_12;
	desc_12[22].body_index = (BODY_INDEX) (21);
	desc_12[22].offset = (BODY_INDEX) (-1);
	desc_12[22].type = (EIF_TYPE_INDEX) (257);
	desc_12[22].gen_type =  gen_type9_12;
	desc_12[23].body_index = (BODY_INDEX) (22);
	desc_12[23].offset = (BODY_INDEX) (-1);
	desc_12[23].type = (EIF_TYPE_INDEX) (257);
	desc_12[23].gen_type =  gen_type10_12;
	desc_12[24].body_index = (BODY_INDEX) (23);
	desc_12[24].offset = (BODY_INDEX) (-1);
	desc_12[24].type = (EIF_TYPE_INDEX) (-1);
	desc_12[24].gen_type = NULL;
	desc_12[25].body_index = (BODY_INDEX) (24);
	desc_12[25].offset = (BODY_INDEX) (-1);
	desc_12[25].type = (EIF_TYPE_INDEX) (38);
	desc_12[25].gen_type =  gen_type11_12;
	desc_12[26].body_index = (BODY_INDEX) (25);
	desc_12[26].offset = (BODY_INDEX) (-1);
	desc_12[26].type = (EIF_TYPE_INDEX) (-1);
	desc_12[26].gen_type = NULL;
	desc_12[27].body_index = (BODY_INDEX) (26);
	desc_12[27].offset = (BODY_INDEX) (-1);
	desc_12[27].type = (EIF_TYPE_INDEX) (-1);
	desc_12[27].gen_type = NULL;
	desc_12[28].body_index = (BODY_INDEX) (27);
	desc_12[28].offset = (BODY_INDEX) (-1);
	desc_12[28].type = (EIF_TYPE_INDEX) (-1);
	desc_12[28].gen_type = NULL;
	desc_12[29].body_index = (BODY_INDEX) (28);
	desc_12[29].offset = (BODY_INDEX) (-1);
	desc_12[29].type = (EIF_TYPE_INDEX) (11);
	desc_12[29].gen_type = NULL;
	desc_12[30].body_index = (BODY_INDEX) (29);
	desc_12[30].offset = (BODY_INDEX) (-1);
	desc_12[30].type = (EIF_TYPE_INDEX) (252);
	desc_12[30].gen_type = NULL;
	desc_12[31].body_index = (BODY_INDEX) (30);
	desc_12[31].offset = (BODY_INDEX) (-1);
	desc_12[31].type = (EIF_TYPE_INDEX) (11);
	desc_12[31].gen_type =  gen_type12_12;
	desc_12[32].body_index = (BODY_INDEX) (98);
	desc_12[32].offset = (BODY_INDEX) (-1);
	desc_12[32].type = (EIF_TYPE_INDEX) (-1);
	desc_12[32].gen_type = NULL;
	desc_12[33].body_index = (BODY_INDEX) (99);
	desc_12[33].offset = (BODY_INDEX) (-1);
	desc_12[33].type = (EIF_TYPE_INDEX) (-1);
	desc_12[33].gen_type = NULL;
	desc_12[34].body_index = (BODY_INDEX) (100);
	desc_12[34].offset = (BODY_INDEX) (-1);
	desc_12[34].type = (EIF_TYPE_INDEX) (-1);
	desc_12[34].gen_type = NULL;
	desc_12[35].body_index = (BODY_INDEX) (101);
	desc_12[35].offset = (BODY_INDEX) (-1);
	desc_12[35].type = (EIF_TYPE_INDEX) (-1);
	desc_12[35].gen_type = NULL;
	desc_12[36].body_index = (BODY_INDEX) (102);
	desc_12[36].offset = (BODY_INDEX) (-1);
	desc_12[36].type = (EIF_TYPE_INDEX) (-1);
	desc_12[36].gen_type = NULL;
	desc_12[37].body_index = (BODY_INDEX) (103);
	desc_12[37].offset = (BODY_INDEX) (-1);
	desc_12[37].type = (EIF_TYPE_INDEX) (-1);
	desc_12[37].gen_type = NULL;
	desc_12[38].body_index = (BODY_INDEX) (104);
	desc_12[38].offset = (BODY_INDEX) (-1);
	desc_12[38].type = (EIF_TYPE_INDEX) (-1);
	desc_12[38].gen_type = NULL;
	desc_12[39].body_index = (BODY_INDEX) (105);
	desc_12[39].offset = (BODY_INDEX) (32);
	desc_12[39].type = (EIF_TYPE_INDEX) (225);
	desc_12[39].gen_type = NULL;
	desc_12[40].body_index = (BODY_INDEX) (106);
	desc_12[40].offset = (BODY_INDEX) (33);
	desc_12[40].type = (EIF_TYPE_INDEX) (225);
	desc_12[40].gen_type = NULL;
	desc_12[41].body_index = (BODY_INDEX) (107);
	desc_12[41].offset = (BODY_INDEX) (34);
	desc_12[41].type = (EIF_TYPE_INDEX) (225);
	desc_12[41].gen_type = NULL;
	desc_12[42].body_index = (BODY_INDEX) (108);
	desc_12[42].offset = (BODY_INDEX) (36);
	desc_12[42].type = (EIF_TYPE_INDEX) (246);
	desc_12[42].gen_type = NULL;
	desc_12[43].body_index = (BODY_INDEX) (109);
	desc_12[43].offset = (BODY_INDEX) (40);
	desc_12[43].type = (EIF_TYPE_INDEX) (246);
	desc_12[43].gen_type = NULL;
	desc_12[44].body_index = (BODY_INDEX) (110);
	desc_12[44].offset = (BODY_INDEX) (44);
	desc_12[44].type = (EIF_TYPE_INDEX) (246);
	desc_12[44].gen_type = NULL;
	desc_12[45].body_index = (BODY_INDEX) (111);
	desc_12[45].offset = (BODY_INDEX) (0);
	desc_12[45].type = (EIF_TYPE_INDEX) (265);
	desc_12[45].gen_type = NULL;
	desc_12[46].body_index = (BODY_INDEX) (112);
	desc_12[46].offset = (BODY_INDEX) (8);
	desc_12[46].type = (EIF_TYPE_INDEX) (265);
	desc_12[46].gen_type = NULL;
	desc_12[47].body_index = (BODY_INDEX) (93);
	desc_12[47].offset = (BODY_INDEX) (16);
	desc_12[47].type = (EIF_TYPE_INDEX) (391);
	desc_12[47].gen_type =  gen_type13_12;
	desc_12[48].body_index = (BODY_INDEX) (94);
	desc_12[48].offset = (BODY_INDEX) (24);
	desc_12[48].type = (EIF_TYPE_INDEX) (387);
	desc_12[48].gen_type =  gen_type14_12;
	desc_12[49].body_index = (BODY_INDEX) (95);
	desc_12[49].offset = (BODY_INDEX) (-1);
	desc_12[49].type = (EIF_TYPE_INDEX) (211);
	desc_12[49].gen_type =  gen_type15_12;
	desc_12[50].body_index = (BODY_INDEX) (96);
	desc_12[50].offset = (BODY_INDEX) (-1);
	desc_12[50].type = (EIF_TYPE_INDEX) (168);
	desc_12[50].gen_type =  gen_type16_12;
}

extern void Init12(void);
void Init12(void)
{
	if (desc_fill != 0)
		build_desc_12();
	IDSC(desc_12, 0, 11);
	IDSC(desc_12 + 1, 1, 11);
	IDSC(desc_12 + 32, 277, 11);
}


#ifdef __cplusplus
}
#endif
