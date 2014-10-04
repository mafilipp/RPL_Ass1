/*
 * Class LIST [REAL_64]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_384(void);
static EIF_TYPE_INDEX gen_type0_384 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_384 [] = {0xFF11,274,0xFF12,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type2_384 [] = {0xFF11,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type3_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_384 [] = {0xFF11,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type6_384 [] = {0xFF11,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type7_384 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_384 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_384 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_384 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_384 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_384 [] = {383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type13_384 [] = {0xFF11,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type14_384 [] = {0xFF11,362,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_384 [] = {0xFF11,180,0xFFFF};
static EIF_TYPE_INDEX gen_type20_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type21_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type22_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type23_384 [] = {0xFF11,356,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type24_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type25_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type26_384 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type27_384 [] = {0xFF11,383,228,0xFFFF};
static EIF_TYPE_INDEX gen_type28_384 [] = {0xFF11,182,0xFFFF};


static struct desc_info desc_384[109];

static void build_desc_384(void) {
	desc_384[0].body_index = (BODY_INDEX) (4852);
	desc_384[0].offset = (BODY_INDEX) (-1);
	desc_384[0].type = INVALID_DTYPE;
	desc_384[0].gen_type = NULL;
	desc_384[1].body_index = (BODY_INDEX) (0);
	desc_384[1].offset = (BODY_INDEX) (-1);
	desc_384[1].type = (EIF_TYPE_INDEX) (257);
	desc_384[1].gen_type =  gen_type0_384;
	desc_384[2].body_index = (BODY_INDEX) (1);
	desc_384[2].offset = (BODY_INDEX) (-1);
	desc_384[2].type = (EIF_TYPE_INDEX) (274);
	desc_384[2].gen_type =  gen_type1_384;
	desc_384[3].body_index = (BODY_INDEX) (2);
	desc_384[3].offset = (BODY_INDEX) (-1);
	desc_384[3].type = (EIF_TYPE_INDEX) (225);
	desc_384[3].gen_type = NULL;
	desc_384[4].body_index = (BODY_INDEX) (3);
	desc_384[4].offset = (BODY_INDEX) (-1);
	desc_384[4].type = (EIF_TYPE_INDEX) (225);
	desc_384[4].gen_type = NULL;
	desc_384[5].body_index = (BODY_INDEX) (4853);
	desc_384[5].offset = (BODY_INDEX) (-1);
	desc_384[5].type = (EIF_TYPE_INDEX) (225);
	desc_384[5].gen_type = NULL;
	desc_384[6].body_index = (BODY_INDEX) (5);
	desc_384[6].offset = (BODY_INDEX) (-1);
	desc_384[6].type = (EIF_TYPE_INDEX) (225);
	desc_384[6].gen_type = NULL;
	desc_384[7].body_index = (BODY_INDEX) (6);
	desc_384[7].offset = (BODY_INDEX) (-1);
	desc_384[7].type = (EIF_TYPE_INDEX) (225);
	desc_384[7].gen_type = NULL;
	desc_384[8].body_index = (BODY_INDEX) (7);
	desc_384[8].offset = (BODY_INDEX) (-1);
	desc_384[8].type = (EIF_TYPE_INDEX) (225);
	desc_384[8].gen_type = NULL;
	desc_384[9].body_index = (BODY_INDEX) (8);
	desc_384[9].offset = (BODY_INDEX) (-1);
	desc_384[9].type = (EIF_TYPE_INDEX) (225);
	desc_384[9].gen_type = NULL;
	desc_384[10].body_index = (BODY_INDEX) (9);
	desc_384[10].offset = (BODY_INDEX) (-1);
	desc_384[10].type = (EIF_TYPE_INDEX) (225);
	desc_384[10].gen_type = NULL;
	desc_384[11].body_index = (BODY_INDEX) (10);
	desc_384[11].offset = (BODY_INDEX) (-1);
	desc_384[11].type = (EIF_TYPE_INDEX) (383);
	desc_384[11].gen_type =  gen_type2_384;
	desc_384[12].body_index = (BODY_INDEX) (11);
	desc_384[12].offset = (BODY_INDEX) (-1);
	desc_384[12].type = (EIF_TYPE_INDEX) (-1);
	desc_384[12].gen_type = NULL;
	desc_384[13].body_index = (BODY_INDEX) (12);
	desc_384[13].offset = (BODY_INDEX) (-1);
	desc_384[13].type = (EIF_TYPE_INDEX) (-1);
	desc_384[13].gen_type = NULL;
	desc_384[14].body_index = (BODY_INDEX) (13);
	desc_384[14].offset = (BODY_INDEX) (-1);
	desc_384[14].type = (EIF_TYPE_INDEX) (0);
	desc_384[14].gen_type =  gen_type3_384;
	desc_384[15].body_index = (BODY_INDEX) (14);
	desc_384[15].offset = (BODY_INDEX) (-1);
	desc_384[15].type = (EIF_TYPE_INDEX) (0);
	desc_384[15].gen_type =  gen_type4_384;
	desc_384[16].body_index = (BODY_INDEX) (15);
	desc_384[16].offset = (BODY_INDEX) (-1);
	desc_384[16].type = (EIF_TYPE_INDEX) (383);
	desc_384[16].gen_type =  gen_type5_384;
	desc_384[17].body_index = (BODY_INDEX) (16);
	desc_384[17].offset = (BODY_INDEX) (-1);
	desc_384[17].type = (EIF_TYPE_INDEX) (383);
	desc_384[17].gen_type =  gen_type6_384;
	desc_384[18].body_index = (BODY_INDEX) (17);
	desc_384[18].offset = (BODY_INDEX) (-1);
	desc_384[18].type = (EIF_TYPE_INDEX) (0);
	desc_384[18].gen_type =  gen_type7_384;
	desc_384[19].body_index = (BODY_INDEX) (18);
	desc_384[19].offset = (BODY_INDEX) (-1);
	desc_384[19].type = (EIF_TYPE_INDEX) (-1);
	desc_384[19].gen_type = NULL;
	desc_384[20].body_index = (BODY_INDEX) (19);
	desc_384[20].offset = (BODY_INDEX) (-1);
	desc_384[20].type = (EIF_TYPE_INDEX) (-1);
	desc_384[20].gen_type = NULL;
	desc_384[21].body_index = (BODY_INDEX) (20);
	desc_384[21].offset = (BODY_INDEX) (-1);
	desc_384[21].type = (EIF_TYPE_INDEX) (18);
	desc_384[21].gen_type =  gen_type8_384;
	desc_384[22].body_index = (BODY_INDEX) (21);
	desc_384[22].offset = (BODY_INDEX) (-1);
	desc_384[22].type = (EIF_TYPE_INDEX) (257);
	desc_384[22].gen_type =  gen_type9_384;
	desc_384[23].body_index = (BODY_INDEX) (22);
	desc_384[23].offset = (BODY_INDEX) (-1);
	desc_384[23].type = (EIF_TYPE_INDEX) (257);
	desc_384[23].gen_type =  gen_type10_384;
	desc_384[24].body_index = (BODY_INDEX) (23);
	desc_384[24].offset = (BODY_INDEX) (-1);
	desc_384[24].type = (EIF_TYPE_INDEX) (-1);
	desc_384[24].gen_type = NULL;
	desc_384[25].body_index = (BODY_INDEX) (24);
	desc_384[25].offset = (BODY_INDEX) (-1);
	desc_384[25].type = (EIF_TYPE_INDEX) (38);
	desc_384[25].gen_type =  gen_type11_384;
	desc_384[26].body_index = (BODY_INDEX) (25);
	desc_384[26].offset = (BODY_INDEX) (-1);
	desc_384[26].type = (EIF_TYPE_INDEX) (-1);
	desc_384[26].gen_type = NULL;
	desc_384[27].body_index = (BODY_INDEX) (26);
	desc_384[27].offset = (BODY_INDEX) (-1);
	desc_384[27].type = (EIF_TYPE_INDEX) (-1);
	desc_384[27].gen_type = NULL;
	desc_384[28].body_index = (BODY_INDEX) (27);
	desc_384[28].offset = (BODY_INDEX) (-1);
	desc_384[28].type = (EIF_TYPE_INDEX) (-1);
	desc_384[28].gen_type = NULL;
	desc_384[29].body_index = (BODY_INDEX) (28);
	desc_384[29].offset = (BODY_INDEX) (-1);
	desc_384[29].type = (EIF_TYPE_INDEX) (383);
	desc_384[29].gen_type =  gen_type12_384;
	desc_384[30].body_index = (BODY_INDEX) (29);
	desc_384[30].offset = (BODY_INDEX) (-1);
	desc_384[30].type = (EIF_TYPE_INDEX) (252);
	desc_384[30].gen_type = NULL;
	desc_384[31].body_index = (BODY_INDEX) (30);
	desc_384[31].offset = (BODY_INDEX) (-1);
	desc_384[31].type = (EIF_TYPE_INDEX) (383);
	desc_384[31].gen_type =  gen_type13_384;
	desc_384[32].body_index = (BODY_INDEX) (4445);
	desc_384[32].offset = (BODY_INDEX) (-1);
	desc_384[32].type = (EIF_TYPE_INDEX) (225);
	desc_384[32].gen_type = NULL;
	desc_384[33].body_index = (BODY_INDEX) (2258);
	desc_384[33].offset = (BODY_INDEX) (-1);
	desc_384[33].type = (EIF_TYPE_INDEX) (225);
	desc_384[33].gen_type = NULL;
	desc_384[34].body_index = (BODY_INDEX) (2091);
	desc_384[34].offset = (BODY_INDEX) (-1);
	desc_384[34].type = (EIF_TYPE_INDEX) (225);
	desc_384[34].gen_type = NULL;
	desc_384[35].body_index = (BODY_INDEX) (2092);
	desc_384[35].offset = (BODY_INDEX) (0);
	desc_384[35].type = (EIF_TYPE_INDEX) (225);
	desc_384[35].gen_type = NULL;
	desc_384[36].body_index = (BODY_INDEX) (2093);
	desc_384[36].offset = (BODY_INDEX) (-1);
	desc_384[36].type = (EIF_TYPE_INDEX) (225);
	desc_384[36].gen_type = NULL;
	desc_384[37].body_index = (BODY_INDEX) (2094);
	desc_384[37].offset = (BODY_INDEX) (-1);
	desc_384[37].type = (EIF_TYPE_INDEX) (-1);
	desc_384[37].gen_type = NULL;
	desc_384[38].body_index = (BODY_INDEX) (2095);
	desc_384[38].offset = (BODY_INDEX) (-1);
	desc_384[38].type = (EIF_TYPE_INDEX) (-1);
	desc_384[38].gen_type = NULL;
	desc_384[39].body_index = (BODY_INDEX) (2527);
	desc_384[39].offset = (BODY_INDEX) (-1);
	desc_384[39].type = (EIF_TYPE_INDEX) (362);
	desc_384[39].gen_type =  gen_type14_384;
	desc_384[40].body_index = (BODY_INDEX) (-1);
	desc_384[40].offset = (BODY_INDEX) (-1);
	desc_384[40].type = (EIF_TYPE_INDEX) (-1);
	desc_384[40].gen_type =  gen_type15_384;
	desc_384[41].body_index = (BODY_INDEX) (-1);
	desc_384[41].offset = (BODY_INDEX) (-1);
	desc_384[41].type = (EIF_TYPE_INDEX) (-1);
	desc_384[41].gen_type =  gen_type16_384;
	desc_384[42].body_index = (BODY_INDEX) (2750);
	desc_384[42].offset = (BODY_INDEX) (-1);
	desc_384[42].type = (EIF_TYPE_INDEX) (225);
	desc_384[42].gen_type = NULL;
	desc_384[43].body_index = (BODY_INDEX) (2751);
	desc_384[43].offset = (BODY_INDEX) (-1);
	desc_384[43].type = (EIF_TYPE_INDEX) (225);
	desc_384[43].gen_type = NULL;
	desc_384[44].body_index = (BODY_INDEX) (2224);
	desc_384[44].offset = (BODY_INDEX) (-1);
	desc_384[44].type = (EIF_TYPE_INDEX) (225);
	desc_384[44].gen_type = NULL;
	desc_384[45].body_index = (BODY_INDEX) (-1);
	desc_384[45].offset = (BODY_INDEX) (-1);
	desc_384[45].type = (EIF_TYPE_INDEX) (-1);
	desc_384[45].gen_type = NULL;
	desc_384[46].body_index = (BODY_INDEX) (4442);
	desc_384[46].offset = (BODY_INDEX) (-1);
	desc_384[46].type = (EIF_TYPE_INDEX) (-1);
	desc_384[46].gen_type = NULL;
	desc_384[47].body_index = (BODY_INDEX) (4446);
	desc_384[47].offset = (BODY_INDEX) (-1);
	desc_384[47].type = (EIF_TYPE_INDEX) (246);
	desc_384[47].gen_type = NULL;
	desc_384[48].body_index = (BODY_INDEX) (2698);
	desc_384[48].offset = (BODY_INDEX) (-1);
	desc_384[48].type = (EIF_TYPE_INDEX) (-1);
	desc_384[48].gen_type = NULL;
	desc_384[49].body_index = (BODY_INDEX) (-1);
	desc_384[49].offset = (BODY_INDEX) (-1);
	desc_384[49].type = (EIF_TYPE_INDEX) (246);
	desc_384[49].gen_type = NULL;
	desc_384[50].body_index = (BODY_INDEX) (4449);
	desc_384[50].offset = (BODY_INDEX) (-1);
	desc_384[50].type = (EIF_TYPE_INDEX) (246);
	desc_384[50].gen_type = NULL;
	desc_384[51].body_index = (BODY_INDEX) (2533);
	desc_384[51].offset = (BODY_INDEX) (-1);
	desc_384[51].type = (EIF_TYPE_INDEX) (-1);
	desc_384[51].gen_type =  gen_type17_384;
	desc_384[52].body_index = (BODY_INDEX) (2534);
	desc_384[52].offset = (BODY_INDEX) (-1);
	desc_384[52].type = (EIF_TYPE_INDEX) (225);
	desc_384[52].gen_type = NULL;
	desc_384[53].body_index = (BODY_INDEX) (4854);
	desc_384[53].offset = (BODY_INDEX) (-1);
	desc_384[53].type = (EIF_TYPE_INDEX) (225);
	desc_384[53].gen_type = NULL;
	desc_384[54].body_index = (BODY_INDEX) (4452);
	desc_384[54].offset = (BODY_INDEX) (-1);
	desc_384[54].type = (EIF_TYPE_INDEX) (-1);
	desc_384[54].gen_type = NULL;
	desc_384[55].body_index = (BODY_INDEX) (-1);
	desc_384[55].offset = (BODY_INDEX) (-1);
	desc_384[55].type = (EIF_TYPE_INDEX) (-1);
	desc_384[55].gen_type = NULL;
	desc_384[56].body_index = (BODY_INDEX) (4447);
	desc_384[56].offset = (BODY_INDEX) (-1);
	desc_384[56].type = (EIF_TYPE_INDEX) (-1);
	desc_384[56].gen_type =  gen_type18_384;
	desc_384[57].body_index = (BODY_INDEX) (4450);
	desc_384[57].offset = (BODY_INDEX) (-1);
	desc_384[57].type = (EIF_TYPE_INDEX) (180);
	desc_384[57].gen_type =  gen_type19_384;
	desc_384[58].body_index = (BODY_INDEX) (4455);
	desc_384[58].offset = (BODY_INDEX) (-1);
	desc_384[58].type = (EIF_TYPE_INDEX) (225);
	desc_384[58].gen_type = NULL;
	desc_384[59].body_index = (BODY_INDEX) (-1);
	desc_384[59].offset = (BODY_INDEX) (-1);
	desc_384[59].type = (EIF_TYPE_INDEX) (-1);
	desc_384[59].gen_type =  gen_type20_384;
	desc_384[60].body_index = (BODY_INDEX) (4458);
	desc_384[60].offset = (BODY_INDEX) (-1);
	desc_384[60].type = (EIF_TYPE_INDEX) (225);
	desc_384[60].gen_type = NULL;
	desc_384[61].body_index = (BODY_INDEX) (4451);
	desc_384[61].offset = (BODY_INDEX) (-1);
	desc_384[61].type = (EIF_TYPE_INDEX) (-1);
	desc_384[61].gen_type = NULL;
	desc_384[62].body_index = (BODY_INDEX) (2523);
	desc_384[62].offset = (BODY_INDEX) (-1);
	desc_384[62].type = (EIF_TYPE_INDEX) (-1);
	desc_384[62].gen_type = NULL;
	desc_384[63].body_index = (BODY_INDEX) (2524);
	desc_384[63].offset = (BODY_INDEX) (-1);
	desc_384[63].type = (EIF_TYPE_INDEX) (-1);
	desc_384[63].gen_type = NULL;
	desc_384[64].body_index = (BODY_INDEX) (2525);
	desc_384[64].offset = (BODY_INDEX) (-1);
	desc_384[64].type = (EIF_TYPE_INDEX) (225);
	desc_384[64].gen_type = NULL;
	desc_384[65].body_index = (BODY_INDEX) (2526);
	desc_384[65].offset = (BODY_INDEX) (-1);
	desc_384[65].type = (EIF_TYPE_INDEX) (225);
	desc_384[65].gen_type = NULL;
	desc_384[66].body_index = (BODY_INDEX) (4447);
	desc_384[66].offset = (BODY_INDEX) (-1);
	desc_384[66].type = (EIF_TYPE_INDEX) (-1);
	desc_384[66].gen_type =  gen_type21_384;
	desc_384[67].body_index = (BODY_INDEX) (4448);
	desc_384[67].offset = (BODY_INDEX) (-1);
	desc_384[67].type = (EIF_TYPE_INDEX) (-1);
	desc_384[67].gen_type =  gen_type22_384;
	desc_384[68].body_index = (BODY_INDEX) (4455);
	desc_384[68].offset = (BODY_INDEX) (-1);
	desc_384[68].type = (EIF_TYPE_INDEX) (225);
	desc_384[68].gen_type = NULL;
	desc_384[69].body_index = (BODY_INDEX) (4461);
	desc_384[69].offset = (BODY_INDEX) (-1);
	desc_384[69].type = (EIF_TYPE_INDEX) (-1);
	desc_384[69].gen_type = NULL;
	desc_384[70].body_index = (BODY_INDEX) (4461);
	desc_384[70].offset = (BODY_INDEX) (-1);
	desc_384[70].type = (EIF_TYPE_INDEX) (-1);
	desc_384[70].gen_type = NULL;
	desc_384[71].body_index = (BODY_INDEX) (-1);
	desc_384[71].offset = (BODY_INDEX) (-1);
	desc_384[71].type = (EIF_TYPE_INDEX) (246);
	desc_384[71].gen_type = NULL;
	desc_384[72].body_index = (BODY_INDEX) (-1);
	desc_384[72].offset = (BODY_INDEX) (-1);
	desc_384[72].type = (EIF_TYPE_INDEX) (225);
	desc_384[72].gen_type = NULL;
	desc_384[73].body_index = (BODY_INDEX) (-1);
	desc_384[73].offset = (BODY_INDEX) (-1);
	desc_384[73].type = (EIF_TYPE_INDEX) (225);
	desc_384[73].gen_type = NULL;
	desc_384[74].body_index = (BODY_INDEX) (2162);
	desc_384[74].offset = (BODY_INDEX) (-1);
	desc_384[74].type = (EIF_TYPE_INDEX) (225);
	desc_384[74].gen_type = NULL;
	desc_384[75].body_index = (BODY_INDEX) (2754);
	desc_384[75].offset = (BODY_INDEX) (-1);
	desc_384[75].type = (EIF_TYPE_INDEX) (-1);
	desc_384[75].gen_type = NULL;
	desc_384[76].body_index = (BODY_INDEX) (-1);
	desc_384[76].offset = (BODY_INDEX) (-1);
	desc_384[76].type = (EIF_TYPE_INDEX) (-1);
	desc_384[76].gen_type = NULL;
	desc_384[77].body_index = (BODY_INDEX) (4463);
	desc_384[77].offset = (BODY_INDEX) (-1);
	desc_384[77].type = (EIF_TYPE_INDEX) (-1);
	desc_384[77].gen_type = NULL;
	desc_384[78].body_index = (BODY_INDEX) (2755);
	desc_384[78].offset = (BODY_INDEX) (-1);
	desc_384[78].type = (EIF_TYPE_INDEX) (-1);
	desc_384[78].gen_type = NULL;
	desc_384[79].body_index = (BODY_INDEX) (2756);
	desc_384[79].offset = (BODY_INDEX) (-1);
	desc_384[79].type = (EIF_TYPE_INDEX) (-1);
	desc_384[79].gen_type = NULL;
	desc_384[80].body_index = (BODY_INDEX) (-1);
	desc_384[80].offset = (BODY_INDEX) (-1);
	desc_384[80].type = (EIF_TYPE_INDEX) (-1);
	desc_384[80].gen_type = NULL;
	desc_384[81].body_index = (BODY_INDEX) (3582);
	desc_384[81].offset = (BODY_INDEX) (-1);
	desc_384[81].type = (EIF_TYPE_INDEX) (356);
	desc_384[81].gen_type =  gen_type23_384;
	desc_384[82].body_index = (BODY_INDEX) (-1);
	desc_384[82].offset = (BODY_INDEX) (-1);
	desc_384[82].type = (EIF_TYPE_INDEX) (-1);
	desc_384[82].gen_type =  gen_type24_384;
	desc_384[83].body_index = (BODY_INDEX) (4855);
	desc_384[83].offset = (BODY_INDEX) (-1);
	desc_384[83].type = (EIF_TYPE_INDEX) (225);
	desc_384[83].gen_type = NULL;
	desc_384[84].body_index = (BODY_INDEX) (-1);
	desc_384[84].offset = (BODY_INDEX) (-1);
	desc_384[84].type = (EIF_TYPE_INDEX) (-1);
	desc_384[84].gen_type = NULL;
	desc_384[85].body_index = (BODY_INDEX) (2531);
	desc_384[85].offset = (BODY_INDEX) (-1);
	desc_384[85].type = (EIF_TYPE_INDEX) (-1);
	desc_384[85].gen_type = NULL;
	desc_384[86].body_index = (BODY_INDEX) (2752);
	desc_384[86].offset = (BODY_INDEX) (-1);
	desc_384[86].type = (EIF_TYPE_INDEX) (-1);
	desc_384[86].gen_type = NULL;
	desc_384[87].body_index = (BODY_INDEX) (4462);
	desc_384[87].offset = (BODY_INDEX) (-1);
	desc_384[87].type = (EIF_TYPE_INDEX) (-1);
	desc_384[87].gen_type = NULL;
	desc_384[88].body_index = (BODY_INDEX) (4443);
	desc_384[88].offset = (BODY_INDEX) (-1);
	desc_384[88].type = (EIF_TYPE_INDEX) (-1);
	desc_384[88].gen_type =  gen_type25_384;
	desc_384[89].body_index = (BODY_INDEX) (4444);
	desc_384[89].offset = (BODY_INDEX) (-1);
	desc_384[89].type = (EIF_TYPE_INDEX) (-1);
	desc_384[89].gen_type =  gen_type26_384;
	desc_384[90].body_index = (BODY_INDEX) (4453);
	desc_384[90].offset = (BODY_INDEX) (-1);
	desc_384[90].type = (EIF_TYPE_INDEX) (-1);
	desc_384[90].gen_type = NULL;
	desc_384[91].body_index = (BODY_INDEX) (4454);
	desc_384[91].offset = (BODY_INDEX) (-1);
	desc_384[91].type = (EIF_TYPE_INDEX) (-1);
	desc_384[91].gen_type = NULL;
	desc_384[92].body_index = (BODY_INDEX) (4456);
	desc_384[92].offset = (BODY_INDEX) (-1);
	desc_384[92].type = (EIF_TYPE_INDEX) (225);
	desc_384[92].gen_type = NULL;
	desc_384[93].body_index = (BODY_INDEX) (4457);
	desc_384[93].offset = (BODY_INDEX) (-1);
	desc_384[93].type = (EIF_TYPE_INDEX) (225);
	desc_384[93].gen_type = NULL;
	desc_384[94].body_index = (BODY_INDEX) (4459);
	desc_384[94].offset = (BODY_INDEX) (-1);
	desc_384[94].type = (EIF_TYPE_INDEX) (225);
	desc_384[94].gen_type = NULL;
	desc_384[95].body_index = (BODY_INDEX) (4460);
	desc_384[95].offset = (BODY_INDEX) (-1);
	desc_384[95].type = (EIF_TYPE_INDEX) (-1);
	desc_384[95].gen_type = NULL;
	desc_384[96].body_index = (BODY_INDEX) (4464);
	desc_384[96].offset = (BODY_INDEX) (-1);
	desc_384[96].type = (EIF_TYPE_INDEX) (-1);
	desc_384[96].gen_type = NULL;
	desc_384[97].body_index = (BODY_INDEX) (-1);
	desc_384[97].offset = (BODY_INDEX) (-1);
	desc_384[97].type = (EIF_TYPE_INDEX) (383);
	desc_384[97].gen_type =  gen_type27_384;
	desc_384[98].body_index = (BODY_INDEX) (2530);
	desc_384[98].offset = (BODY_INDEX) (-1);
	desc_384[98].type = (EIF_TYPE_INDEX) (246);
	desc_384[98].gen_type = NULL;
	desc_384[99].body_index = (BODY_INDEX) (2529);
	desc_384[99].offset = (BODY_INDEX) (-1);
	desc_384[99].type = (EIF_TYPE_INDEX) (225);
	desc_384[99].gen_type = NULL;
	desc_384[100].body_index = (BODY_INDEX) (2532);
	desc_384[100].offset = (BODY_INDEX) (-1);
	desc_384[100].type = (EIF_TYPE_INDEX) (246);
	desc_384[100].gen_type = NULL;
	desc_384[101].body_index = (BODY_INDEX) (2532);
	desc_384[101].offset = (BODY_INDEX) (-1);
	desc_384[101].type = (EIF_TYPE_INDEX) (246);
	desc_384[101].gen_type = NULL;
	desc_384[102].body_index = (BODY_INDEX) (4449);
	desc_384[102].offset = (BODY_INDEX) (-1);
	desc_384[102].type = (EIF_TYPE_INDEX) (246);
	desc_384[102].gen_type = NULL;
	desc_384[103].body_index = (BODY_INDEX) (-1);
	desc_384[103].offset = (BODY_INDEX) (-1);
	desc_384[103].type = (EIF_TYPE_INDEX) (182);
	desc_384[103].gen_type =  gen_type28_384;
	desc_384[104].body_index = (BODY_INDEX) (-1);
	desc_384[104].offset = (BODY_INDEX) (-1);
	desc_384[104].type = (EIF_TYPE_INDEX) (225);
	desc_384[104].gen_type = NULL;
	desc_384[105].body_index = (BODY_INDEX) (-1);
	desc_384[105].offset = (BODY_INDEX) (-1);
	desc_384[105].type = (EIF_TYPE_INDEX) (-1);
	desc_384[105].gen_type = NULL;
	desc_384[106].body_index = (BODY_INDEX) (-1);
	desc_384[106].offset = (BODY_INDEX) (-1);
	desc_384[106].type = (EIF_TYPE_INDEX) (246);
	desc_384[106].gen_type = NULL;
	desc_384[107].body_index = (BODY_INDEX) (-1);
	desc_384[107].offset = (BODY_INDEX) (-1);
	desc_384[107].type = (EIF_TYPE_INDEX) (225);
	desc_384[107].gen_type = NULL;
	desc_384[108].body_index = (BODY_INDEX) (-1);
	desc_384[108].offset = (BODY_INDEX) (-1);
	desc_384[108].type = (EIF_TYPE_INDEX) (246);
	desc_384[108].gen_type = NULL;
}

extern void Init384(void);
void Init384(void)
{
	if (desc_fill != 0)
		build_desc_384();
	IDSC(desc_384, 0, 383);
	IDSC(desc_384 + 1, 1, 383);
	IDSC(desc_384 + 32, 84, 383);
	IDSC(desc_384 + 41, 139, 383);
	IDSC(desc_384 + 47, 176, 383);
	IDSC(desc_384 + 56, 288, 383);
	IDSC(desc_384 + 59, 31, 383);
	IDSC(desc_384 + 66, 211, 383);
	IDSC(desc_384 + 72, 317, 383);
	IDSC(desc_384 + 81, 135, 383);
	IDSC(desc_384 + 83, 328, 383);
	IDSC(desc_384 + 86, 272, 383);
	IDSC(desc_384 + 88, 365, 383);
	IDSC(desc_384 + 102, 262, 383);
	IDSC(desc_384 + 103, 373, 383);
	IDSC(desc_384 + 106, 52, 383);
	IDSC(desc_384 + 107, 36, 383);
	IDSC(desc_384 + 108, 197, 383);
}


#ifdef __cplusplus
}
#endif
