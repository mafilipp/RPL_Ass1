/*
 * Class NUMERIC_INFORMATION
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_81(void);
static EIF_TYPE_INDEX gen_type0_81 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_81 [] = {0xFF11,274,0xFF12,80,0xFFFF};
static EIF_TYPE_INDEX gen_type2_81 [] = {0xFF11,80,0xFFFF};
static EIF_TYPE_INDEX gen_type3_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_81 [] = {0xFF11,80,0xFFFF};
static EIF_TYPE_INDEX gen_type6_81 [] = {0xFF11,80,0xFFFF};
static EIF_TYPE_INDEX gen_type7_81 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_81 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_81 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_81 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_81 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_81 [] = {0xFF11,80,0xFFFF};


static struct desc_info desc_81[55];

static void build_desc_81(void) {
	desc_81[0].body_index = (BODY_INDEX) (-1);
	desc_81[0].offset = (BODY_INDEX) (-1);
	desc_81[0].type = INVALID_DTYPE;
	desc_81[0].gen_type = NULL;
	desc_81[1].body_index = (BODY_INDEX) (0);
	desc_81[1].offset = (BODY_INDEX) (-1);
	desc_81[1].type = (EIF_TYPE_INDEX) (257);
	desc_81[1].gen_type =  gen_type0_81;
	desc_81[2].body_index = (BODY_INDEX) (1);
	desc_81[2].offset = (BODY_INDEX) (-1);
	desc_81[2].type = (EIF_TYPE_INDEX) (274);
	desc_81[2].gen_type =  gen_type1_81;
	desc_81[3].body_index = (BODY_INDEX) (2);
	desc_81[3].offset = (BODY_INDEX) (-1);
	desc_81[3].type = (EIF_TYPE_INDEX) (225);
	desc_81[3].gen_type = NULL;
	desc_81[4].body_index = (BODY_INDEX) (3);
	desc_81[4].offset = (BODY_INDEX) (-1);
	desc_81[4].type = (EIF_TYPE_INDEX) (225);
	desc_81[4].gen_type = NULL;
	desc_81[5].body_index = (BODY_INDEX) (4);
	desc_81[5].offset = (BODY_INDEX) (-1);
	desc_81[5].type = (EIF_TYPE_INDEX) (225);
	desc_81[5].gen_type = NULL;
	desc_81[6].body_index = (BODY_INDEX) (5);
	desc_81[6].offset = (BODY_INDEX) (-1);
	desc_81[6].type = (EIF_TYPE_INDEX) (225);
	desc_81[6].gen_type = NULL;
	desc_81[7].body_index = (BODY_INDEX) (6);
	desc_81[7].offset = (BODY_INDEX) (-1);
	desc_81[7].type = (EIF_TYPE_INDEX) (225);
	desc_81[7].gen_type = NULL;
	desc_81[8].body_index = (BODY_INDEX) (7);
	desc_81[8].offset = (BODY_INDEX) (-1);
	desc_81[8].type = (EIF_TYPE_INDEX) (225);
	desc_81[8].gen_type = NULL;
	desc_81[9].body_index = (BODY_INDEX) (8);
	desc_81[9].offset = (BODY_INDEX) (-1);
	desc_81[9].type = (EIF_TYPE_INDEX) (225);
	desc_81[9].gen_type = NULL;
	desc_81[10].body_index = (BODY_INDEX) (9);
	desc_81[10].offset = (BODY_INDEX) (-1);
	desc_81[10].type = (EIF_TYPE_INDEX) (225);
	desc_81[10].gen_type = NULL;
	desc_81[11].body_index = (BODY_INDEX) (10);
	desc_81[11].offset = (BODY_INDEX) (-1);
	desc_81[11].type = (EIF_TYPE_INDEX) (80);
	desc_81[11].gen_type =  gen_type2_81;
	desc_81[12].body_index = (BODY_INDEX) (11);
	desc_81[12].offset = (BODY_INDEX) (-1);
	desc_81[12].type = (EIF_TYPE_INDEX) (-1);
	desc_81[12].gen_type = NULL;
	desc_81[13].body_index = (BODY_INDEX) (12);
	desc_81[13].offset = (BODY_INDEX) (-1);
	desc_81[13].type = (EIF_TYPE_INDEX) (-1);
	desc_81[13].gen_type = NULL;
	desc_81[14].body_index = (BODY_INDEX) (13);
	desc_81[14].offset = (BODY_INDEX) (-1);
	desc_81[14].type = (EIF_TYPE_INDEX) (0);
	desc_81[14].gen_type =  gen_type3_81;
	desc_81[15].body_index = (BODY_INDEX) (14);
	desc_81[15].offset = (BODY_INDEX) (-1);
	desc_81[15].type = (EIF_TYPE_INDEX) (0);
	desc_81[15].gen_type =  gen_type4_81;
	desc_81[16].body_index = (BODY_INDEX) (15);
	desc_81[16].offset = (BODY_INDEX) (-1);
	desc_81[16].type = (EIF_TYPE_INDEX) (80);
	desc_81[16].gen_type =  gen_type5_81;
	desc_81[17].body_index = (BODY_INDEX) (16);
	desc_81[17].offset = (BODY_INDEX) (-1);
	desc_81[17].type = (EIF_TYPE_INDEX) (80);
	desc_81[17].gen_type =  gen_type6_81;
	desc_81[18].body_index = (BODY_INDEX) (17);
	desc_81[18].offset = (BODY_INDEX) (-1);
	desc_81[18].type = (EIF_TYPE_INDEX) (0);
	desc_81[18].gen_type =  gen_type7_81;
	desc_81[19].body_index = (BODY_INDEX) (18);
	desc_81[19].offset = (BODY_INDEX) (-1);
	desc_81[19].type = (EIF_TYPE_INDEX) (-1);
	desc_81[19].gen_type = NULL;
	desc_81[20].body_index = (BODY_INDEX) (19);
	desc_81[20].offset = (BODY_INDEX) (-1);
	desc_81[20].type = (EIF_TYPE_INDEX) (-1);
	desc_81[20].gen_type = NULL;
	desc_81[21].body_index = (BODY_INDEX) (20);
	desc_81[21].offset = (BODY_INDEX) (-1);
	desc_81[21].type = (EIF_TYPE_INDEX) (18);
	desc_81[21].gen_type =  gen_type8_81;
	desc_81[22].body_index = (BODY_INDEX) (21);
	desc_81[22].offset = (BODY_INDEX) (-1);
	desc_81[22].type = (EIF_TYPE_INDEX) (257);
	desc_81[22].gen_type =  gen_type9_81;
	desc_81[23].body_index = (BODY_INDEX) (22);
	desc_81[23].offset = (BODY_INDEX) (-1);
	desc_81[23].type = (EIF_TYPE_INDEX) (257);
	desc_81[23].gen_type =  gen_type10_81;
	desc_81[24].body_index = (BODY_INDEX) (23);
	desc_81[24].offset = (BODY_INDEX) (-1);
	desc_81[24].type = (EIF_TYPE_INDEX) (-1);
	desc_81[24].gen_type = NULL;
	desc_81[25].body_index = (BODY_INDEX) (24);
	desc_81[25].offset = (BODY_INDEX) (-1);
	desc_81[25].type = (EIF_TYPE_INDEX) (38);
	desc_81[25].gen_type =  gen_type11_81;
	desc_81[26].body_index = (BODY_INDEX) (25);
	desc_81[26].offset = (BODY_INDEX) (-1);
	desc_81[26].type = (EIF_TYPE_INDEX) (-1);
	desc_81[26].gen_type = NULL;
	desc_81[27].body_index = (BODY_INDEX) (26);
	desc_81[27].offset = (BODY_INDEX) (-1);
	desc_81[27].type = (EIF_TYPE_INDEX) (-1);
	desc_81[27].gen_type = NULL;
	desc_81[28].body_index = (BODY_INDEX) (27);
	desc_81[28].offset = (BODY_INDEX) (-1);
	desc_81[28].type = (EIF_TYPE_INDEX) (-1);
	desc_81[28].gen_type = NULL;
	desc_81[29].body_index = (BODY_INDEX) (28);
	desc_81[29].offset = (BODY_INDEX) (-1);
	desc_81[29].type = (EIF_TYPE_INDEX) (80);
	desc_81[29].gen_type = NULL;
	desc_81[30].body_index = (BODY_INDEX) (29);
	desc_81[30].offset = (BODY_INDEX) (-1);
	desc_81[30].type = (EIF_TYPE_INDEX) (252);
	desc_81[30].gen_type = NULL;
	desc_81[31].body_index = (BODY_INDEX) (30);
	desc_81[31].offset = (BODY_INDEX) (-1);
	desc_81[31].type = (EIF_TYPE_INDEX) (80);
	desc_81[31].gen_type =  gen_type12_81;
	desc_81[32].body_index = (BODY_INDEX) (1316);
	desc_81[32].offset = (BODY_INDEX) (8);
	desc_81[32].type = (EIF_TYPE_INDEX) (222);
	desc_81[32].gen_type = NULL;
	desc_81[33].body_index = (BODY_INDEX) (1317);
	desc_81[33].offset = (BODY_INDEX) (0);
	desc_81[33].type = (EIF_TYPE_INDEX) (249);
	desc_81[33].gen_type = NULL;
	desc_81[34].body_index = (BODY_INDEX) (1318);
	desc_81[34].offset = (BODY_INDEX) (-1);
	desc_81[34].type = (EIF_TYPE_INDEX) (246);
	desc_81[34].gen_type = NULL;
	desc_81[35].body_index = (BODY_INDEX) (1319);
	desc_81[35].offset = (BODY_INDEX) (-1);
	desc_81[35].type = (EIF_TYPE_INDEX) (246);
	desc_81[35].gen_type = NULL;
	desc_81[36].body_index = (BODY_INDEX) (1320);
	desc_81[36].offset = (BODY_INDEX) (-1);
	desc_81[36].type = (EIF_TYPE_INDEX) (246);
	desc_81[36].gen_type = NULL;
	desc_81[37].body_index = (BODY_INDEX) (1321);
	desc_81[37].offset = (BODY_INDEX) (-1);
	desc_81[37].type = (EIF_TYPE_INDEX) (246);
	desc_81[37].gen_type = NULL;
	desc_81[38].body_index = (BODY_INDEX) (1322);
	desc_81[38].offset = (BODY_INDEX) (-1);
	desc_81[38].type = (EIF_TYPE_INDEX) (246);
	desc_81[38].gen_type = NULL;
	desc_81[39].body_index = (BODY_INDEX) (1323);
	desc_81[39].offset = (BODY_INDEX) (-1);
	desc_81[39].type = (EIF_TYPE_INDEX) (246);
	desc_81[39].gen_type = NULL;
	desc_81[40].body_index = (BODY_INDEX) (1324);
	desc_81[40].offset = (BODY_INDEX) (-1);
	desc_81[40].type = (EIF_TYPE_INDEX) (246);
	desc_81[40].gen_type = NULL;
	desc_81[41].body_index = (BODY_INDEX) (1325);
	desc_81[41].offset = (BODY_INDEX) (-1);
	desc_81[41].type = (EIF_TYPE_INDEX) (246);
	desc_81[41].gen_type = NULL;
	desc_81[42].body_index = (BODY_INDEX) (1326);
	desc_81[42].offset = (BODY_INDEX) (-1);
	desc_81[42].type = (EIF_TYPE_INDEX) (246);
	desc_81[42].gen_type = NULL;
	desc_81[43].body_index = (BODY_INDEX) (1327);
	desc_81[43].offset = (BODY_INDEX) (-1);
	desc_81[43].type = (EIF_TYPE_INDEX) (246);
	desc_81[43].gen_type = NULL;
	desc_81[44].body_index = (BODY_INDEX) (1328);
	desc_81[44].offset = (BODY_INDEX) (-1);
	desc_81[44].type = (EIF_TYPE_INDEX) (246);
	desc_81[44].gen_type = NULL;
	desc_81[45].body_index = (BODY_INDEX) (1329);
	desc_81[45].offset = (BODY_INDEX) (-1);
	desc_81[45].type = (EIF_TYPE_INDEX) (246);
	desc_81[45].gen_type = NULL;
	desc_81[46].body_index = (BODY_INDEX) (1330);
	desc_81[46].offset = (BODY_INDEX) (-1);
	desc_81[46].type = (EIF_TYPE_INDEX) (246);
	desc_81[46].gen_type = NULL;
	desc_81[47].body_index = (BODY_INDEX) (1331);
	desc_81[47].offset = (BODY_INDEX) (-1);
	desc_81[47].type = (EIF_TYPE_INDEX) (246);
	desc_81[47].gen_type = NULL;
	desc_81[48].body_index = (BODY_INDEX) (1332);
	desc_81[48].offset = (BODY_INDEX) (-1);
	desc_81[48].type = (EIF_TYPE_INDEX) (246);
	desc_81[48].gen_type = NULL;
	desc_81[49].body_index = (BODY_INDEX) (1333);
	desc_81[49].offset = (BODY_INDEX) (-1);
	desc_81[49].type = (EIF_TYPE_INDEX) (225);
	desc_81[49].gen_type = NULL;
	desc_81[50].body_index = (BODY_INDEX) (1334);
	desc_81[50].offset = (BODY_INDEX) (-1);
	desc_81[50].type = (EIF_TYPE_INDEX) (225);
	desc_81[50].gen_type = NULL;
	desc_81[51].body_index = (BODY_INDEX) (1335);
	desc_81[51].offset = (BODY_INDEX) (-1);
	desc_81[51].type = (EIF_TYPE_INDEX) (225);
	desc_81[51].gen_type = NULL;
	desc_81[52].body_index = (BODY_INDEX) (1336);
	desc_81[52].offset = (BODY_INDEX) (-1);
	desc_81[52].type = (EIF_TYPE_INDEX) (225);
	desc_81[52].gen_type = NULL;
	desc_81[53].body_index = (BODY_INDEX) (1337);
	desc_81[53].offset = (BODY_INDEX) (-1);
	desc_81[53].type = (EIF_TYPE_INDEX) (225);
	desc_81[53].gen_type = NULL;
	desc_81[54].body_index = (BODY_INDEX) (1338);
	desc_81[54].offset = (BODY_INDEX) (-1);
	desc_81[54].type = (EIF_TYPE_INDEX) (225);
	desc_81[54].gen_type = NULL;
}

extern void Init81(void);
void Init81(void)
{
	if (desc_fill != 0)
		build_desc_81();
	IDSC(desc_81, 0, 80);
	IDSC(desc_81 + 1, 1, 80);
	IDSC(desc_81 + 32, 297, 80);
}


#ifdef __cplusplus
}
#endif
