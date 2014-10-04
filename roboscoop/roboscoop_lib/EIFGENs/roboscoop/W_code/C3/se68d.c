/*
 * Class SED_BINARY_READER_WRITER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_68(void);
static EIF_TYPE_INDEX gen_type0_68 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_68 [] = {0xFF11,274,0xFF12,67,0xFFFF};
static EIF_TYPE_INDEX gen_type2_68 [] = {0xFF11,67,0xFFFF};
static EIF_TYPE_INDEX gen_type3_68 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_68 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_68 [] = {0xFF11,67,0xFFFF};
static EIF_TYPE_INDEX gen_type6_68 [] = {0xFF11,67,0xFFFF};
static EIF_TYPE_INDEX gen_type7_68 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_68 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_68 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_68 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_68 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_68 [] = {0xFF11,67,0xFFFF};
static EIF_TYPE_INDEX gen_type13_68 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type14_68 [] = {0xFF11,265,0xFFFF};
static EIF_TYPE_INDEX gen_type15_68 [] = {0xFF11,263,0xFFFF};
static EIF_TYPE_INDEX gen_type16_68 [] = {0xFF11,266,0xFFFF};
static EIF_TYPE_INDEX gen_type17_68 [] = {0xFF11,193,0xFFFF};


static struct desc_info desc_68[91];

static void build_desc_68(void) {
	desc_68[0].body_index = (BODY_INDEX) (1203);
	desc_68[0].offset = (BODY_INDEX) (-1);
	desc_68[0].type = INVALID_DTYPE;
	desc_68[0].gen_type = NULL;
	desc_68[1].body_index = (BODY_INDEX) (0);
	desc_68[1].offset = (BODY_INDEX) (-1);
	desc_68[1].type = (EIF_TYPE_INDEX) (257);
	desc_68[1].gen_type =  gen_type0_68;
	desc_68[2].body_index = (BODY_INDEX) (1);
	desc_68[2].offset = (BODY_INDEX) (-1);
	desc_68[2].type = (EIF_TYPE_INDEX) (274);
	desc_68[2].gen_type =  gen_type1_68;
	desc_68[3].body_index = (BODY_INDEX) (2);
	desc_68[3].offset = (BODY_INDEX) (-1);
	desc_68[3].type = (EIF_TYPE_INDEX) (225);
	desc_68[3].gen_type = NULL;
	desc_68[4].body_index = (BODY_INDEX) (3);
	desc_68[4].offset = (BODY_INDEX) (-1);
	desc_68[4].type = (EIF_TYPE_INDEX) (225);
	desc_68[4].gen_type = NULL;
	desc_68[5].body_index = (BODY_INDEX) (4);
	desc_68[5].offset = (BODY_INDEX) (-1);
	desc_68[5].type = (EIF_TYPE_INDEX) (225);
	desc_68[5].gen_type = NULL;
	desc_68[6].body_index = (BODY_INDEX) (5);
	desc_68[6].offset = (BODY_INDEX) (-1);
	desc_68[6].type = (EIF_TYPE_INDEX) (225);
	desc_68[6].gen_type = NULL;
	desc_68[7].body_index = (BODY_INDEX) (6);
	desc_68[7].offset = (BODY_INDEX) (-1);
	desc_68[7].type = (EIF_TYPE_INDEX) (225);
	desc_68[7].gen_type = NULL;
	desc_68[8].body_index = (BODY_INDEX) (7);
	desc_68[8].offset = (BODY_INDEX) (-1);
	desc_68[8].type = (EIF_TYPE_INDEX) (225);
	desc_68[8].gen_type = NULL;
	desc_68[9].body_index = (BODY_INDEX) (8);
	desc_68[9].offset = (BODY_INDEX) (-1);
	desc_68[9].type = (EIF_TYPE_INDEX) (225);
	desc_68[9].gen_type = NULL;
	desc_68[10].body_index = (BODY_INDEX) (9);
	desc_68[10].offset = (BODY_INDEX) (-1);
	desc_68[10].type = (EIF_TYPE_INDEX) (225);
	desc_68[10].gen_type = NULL;
	desc_68[11].body_index = (BODY_INDEX) (10);
	desc_68[11].offset = (BODY_INDEX) (-1);
	desc_68[11].type = (EIF_TYPE_INDEX) (67);
	desc_68[11].gen_type =  gen_type2_68;
	desc_68[12].body_index = (BODY_INDEX) (11);
	desc_68[12].offset = (BODY_INDEX) (-1);
	desc_68[12].type = (EIF_TYPE_INDEX) (-1);
	desc_68[12].gen_type = NULL;
	desc_68[13].body_index = (BODY_INDEX) (12);
	desc_68[13].offset = (BODY_INDEX) (-1);
	desc_68[13].type = (EIF_TYPE_INDEX) (-1);
	desc_68[13].gen_type = NULL;
	desc_68[14].body_index = (BODY_INDEX) (13);
	desc_68[14].offset = (BODY_INDEX) (-1);
	desc_68[14].type = (EIF_TYPE_INDEX) (0);
	desc_68[14].gen_type =  gen_type3_68;
	desc_68[15].body_index = (BODY_INDEX) (14);
	desc_68[15].offset = (BODY_INDEX) (-1);
	desc_68[15].type = (EIF_TYPE_INDEX) (0);
	desc_68[15].gen_type =  gen_type4_68;
	desc_68[16].body_index = (BODY_INDEX) (15);
	desc_68[16].offset = (BODY_INDEX) (-1);
	desc_68[16].type = (EIF_TYPE_INDEX) (67);
	desc_68[16].gen_type =  gen_type5_68;
	desc_68[17].body_index = (BODY_INDEX) (16);
	desc_68[17].offset = (BODY_INDEX) (-1);
	desc_68[17].type = (EIF_TYPE_INDEX) (67);
	desc_68[17].gen_type =  gen_type6_68;
	desc_68[18].body_index = (BODY_INDEX) (17);
	desc_68[18].offset = (BODY_INDEX) (-1);
	desc_68[18].type = (EIF_TYPE_INDEX) (0);
	desc_68[18].gen_type =  gen_type7_68;
	desc_68[19].body_index = (BODY_INDEX) (18);
	desc_68[19].offset = (BODY_INDEX) (-1);
	desc_68[19].type = (EIF_TYPE_INDEX) (-1);
	desc_68[19].gen_type = NULL;
	desc_68[20].body_index = (BODY_INDEX) (19);
	desc_68[20].offset = (BODY_INDEX) (-1);
	desc_68[20].type = (EIF_TYPE_INDEX) (-1);
	desc_68[20].gen_type = NULL;
	desc_68[21].body_index = (BODY_INDEX) (20);
	desc_68[21].offset = (BODY_INDEX) (-1);
	desc_68[21].type = (EIF_TYPE_INDEX) (18);
	desc_68[21].gen_type =  gen_type8_68;
	desc_68[22].body_index = (BODY_INDEX) (21);
	desc_68[22].offset = (BODY_INDEX) (-1);
	desc_68[22].type = (EIF_TYPE_INDEX) (257);
	desc_68[22].gen_type =  gen_type9_68;
	desc_68[23].body_index = (BODY_INDEX) (22);
	desc_68[23].offset = (BODY_INDEX) (-1);
	desc_68[23].type = (EIF_TYPE_INDEX) (257);
	desc_68[23].gen_type =  gen_type10_68;
	desc_68[24].body_index = (BODY_INDEX) (23);
	desc_68[24].offset = (BODY_INDEX) (-1);
	desc_68[24].type = (EIF_TYPE_INDEX) (-1);
	desc_68[24].gen_type = NULL;
	desc_68[25].body_index = (BODY_INDEX) (24);
	desc_68[25].offset = (BODY_INDEX) (-1);
	desc_68[25].type = (EIF_TYPE_INDEX) (38);
	desc_68[25].gen_type =  gen_type11_68;
	desc_68[26].body_index = (BODY_INDEX) (25);
	desc_68[26].offset = (BODY_INDEX) (-1);
	desc_68[26].type = (EIF_TYPE_INDEX) (-1);
	desc_68[26].gen_type = NULL;
	desc_68[27].body_index = (BODY_INDEX) (26);
	desc_68[27].offset = (BODY_INDEX) (-1);
	desc_68[27].type = (EIF_TYPE_INDEX) (-1);
	desc_68[27].gen_type = NULL;
	desc_68[28].body_index = (BODY_INDEX) (27);
	desc_68[28].offset = (BODY_INDEX) (-1);
	desc_68[28].type = (EIF_TYPE_INDEX) (-1);
	desc_68[28].gen_type = NULL;
	desc_68[29].body_index = (BODY_INDEX) (28);
	desc_68[29].offset = (BODY_INDEX) (-1);
	desc_68[29].type = (EIF_TYPE_INDEX) (67);
	desc_68[29].gen_type = NULL;
	desc_68[30].body_index = (BODY_INDEX) (29);
	desc_68[30].offset = (BODY_INDEX) (-1);
	desc_68[30].type = (EIF_TYPE_INDEX) (252);
	desc_68[30].gen_type = NULL;
	desc_68[31].body_index = (BODY_INDEX) (30);
	desc_68[31].offset = (BODY_INDEX) (-1);
	desc_68[31].type = (EIF_TYPE_INDEX) (67);
	desc_68[31].gen_type =  gen_type12_68;
	desc_68[32].body_index = (BODY_INDEX) (1180);
	desc_68[32].offset = (BODY_INDEX) (-1);
	desc_68[32].type = (EIF_TYPE_INDEX) (-1);
	desc_68[32].gen_type = NULL;
	desc_68[33].body_index = (BODY_INDEX) (1181);
	desc_68[33].offset = (BODY_INDEX) (-1);
	desc_68[33].type = (EIF_TYPE_INDEX) (-1);
	desc_68[33].gen_type = NULL;
	desc_68[34].body_index = (BODY_INDEX) (1182);
	desc_68[34].offset = (BODY_INDEX) (-1);
	desc_68[34].type = (EIF_TYPE_INDEX) (-1);
	desc_68[34].gen_type = NULL;
	desc_68[35].body_index = (BODY_INDEX) (1183);
	desc_68[35].offset = (BODY_INDEX) (-1);
	desc_68[35].type = (EIF_TYPE_INDEX) (-1);
	desc_68[35].gen_type = NULL;
	desc_68[36].body_index = (BODY_INDEX) (1204);
	desc_68[36].offset = (BODY_INDEX) (-1);
	desc_68[36].type = (EIF_TYPE_INDEX) (225);
	desc_68[36].gen_type = NULL;
	desc_68[37].body_index = (BODY_INDEX) (1205);
	desc_68[37].offset = (BODY_INDEX) (-1);
	desc_68[37].type = (EIF_TYPE_INDEX) (225);
	desc_68[37].gen_type = NULL;
	desc_68[38].body_index = (BODY_INDEX) (1169);
	desc_68[38].offset = (BODY_INDEX) (16);
	desc_68[38].type = (EIF_TYPE_INDEX) (225);
	desc_68[38].gen_type = NULL;
	desc_68[39].body_index = (BODY_INDEX) (1170);
	desc_68[39].offset = (BODY_INDEX) (-1);
	desc_68[39].type = (EIF_TYPE_INDEX) (-1);
	desc_68[39].gen_type = NULL;
	desc_68[40].body_index = (BODY_INDEX) (1171);
	desc_68[40].offset = (BODY_INDEX) (-1);
	desc_68[40].type = (EIF_TYPE_INDEX) (219);
	desc_68[40].gen_type = NULL;
	desc_68[41].body_index = (BODY_INDEX) (1172);
	desc_68[41].offset = (BODY_INDEX) (-1);
	desc_68[41].type = (EIF_TYPE_INDEX) (216);
	desc_68[41].gen_type = NULL;
	desc_68[42].body_index = (BODY_INDEX) (1173);
	desc_68[42].offset = (BODY_INDEX) (-1);
	desc_68[42].type = (EIF_TYPE_INDEX) (257);
	desc_68[42].gen_type =  gen_type13_68;
	desc_68[43].body_index = (BODY_INDEX) (1174);
	desc_68[43].offset = (BODY_INDEX) (-1);
	desc_68[43].type = (EIF_TYPE_INDEX) (265);
	desc_68[43].gen_type =  gen_type14_68;
	desc_68[44].body_index = (BODY_INDEX) (1175);
	desc_68[44].offset = (BODY_INDEX) (-1);
	desc_68[44].type = (EIF_TYPE_INDEX) (263);
	desc_68[44].gen_type =  gen_type15_68;
	desc_68[45].body_index = (BODY_INDEX) (1176);
	desc_68[45].offset = (BODY_INDEX) (-1);
	desc_68[45].type = (EIF_TYPE_INDEX) (266);
	desc_68[45].gen_type =  gen_type16_68;
	desc_68[46].body_index = (BODY_INDEX) (1177);
	desc_68[46].offset = (BODY_INDEX) (-1);
	desc_68[46].type = (EIF_TYPE_INDEX) (225);
	desc_68[46].gen_type = NULL;
	desc_68[47].body_index = (BODY_INDEX) (1209);
	desc_68[47].offset = (BODY_INDEX) (-1);
	desc_68[47].type = (EIF_TYPE_INDEX) (231);
	desc_68[47].gen_type = NULL;
	desc_68[48].body_index = (BODY_INDEX) (1210);
	desc_68[48].offset = (BODY_INDEX) (-1);
	desc_68[48].type = (EIF_TYPE_INDEX) (243);
	desc_68[48].gen_type = NULL;
	desc_68[49].body_index = (BODY_INDEX) (1211);
	desc_68[49].offset = (BODY_INDEX) (-1);
	desc_68[49].type = (EIF_TYPE_INDEX) (240);
	desc_68[49].gen_type = NULL;
	desc_68[50].body_index = (BODY_INDEX) (1212);
	desc_68[50].offset = (BODY_INDEX) (-1);
	desc_68[50].type = (EIF_TYPE_INDEX) (249);
	desc_68[50].gen_type = NULL;
	desc_68[51].body_index = (BODY_INDEX) (1213);
	desc_68[51].offset = (BODY_INDEX) (-1);
	desc_68[51].type = (EIF_TYPE_INDEX) (213);
	desc_68[51].gen_type = NULL;
	desc_68[52].body_index = (BODY_INDEX) (1214);
	desc_68[52].offset = (BODY_INDEX) (-1);
	desc_68[52].type = (EIF_TYPE_INDEX) (237);
	desc_68[52].gen_type = NULL;
	desc_68[53].body_index = (BODY_INDEX) (1215);
	desc_68[53].offset = (BODY_INDEX) (-1);
	desc_68[53].type = (EIF_TYPE_INDEX) (246);
	desc_68[53].gen_type = NULL;
	desc_68[54].body_index = (BODY_INDEX) (1216);
	desc_68[54].offset = (BODY_INDEX) (-1);
	desc_68[54].type = (EIF_TYPE_INDEX) (222);
	desc_68[54].gen_type = NULL;
	desc_68[55].body_index = (BODY_INDEX) (1217);
	desc_68[55].offset = (BODY_INDEX) (-1);
	desc_68[55].type = (EIF_TYPE_INDEX) (234);
	desc_68[55].gen_type = NULL;
	desc_68[56].body_index = (BODY_INDEX) (1218);
	desc_68[56].offset = (BODY_INDEX) (-1);
	desc_68[56].type = (EIF_TYPE_INDEX) (228);
	desc_68[56].gen_type = NULL;
	desc_68[57].body_index = (BODY_INDEX) (1184);
	desc_68[57].offset = (BODY_INDEX) (-1);
	desc_68[57].type = (EIF_TYPE_INDEX) (252);
	desc_68[57].gen_type = NULL;
	desc_68[58].body_index = (BODY_INDEX) (1160);
	desc_68[58].offset = (BODY_INDEX) (-1);
	desc_68[58].type = (EIF_TYPE_INDEX) (246);
	desc_68[58].gen_type = NULL;
	desc_68[59].body_index = (BODY_INDEX) (1161);
	desc_68[59].offset = (BODY_INDEX) (-1);
	desc_68[59].type = (EIF_TYPE_INDEX) (240);
	desc_68[59].gen_type = NULL;
	desc_68[60].body_index = (BODY_INDEX) (1162);
	desc_68[60].offset = (BODY_INDEX) (-1);
	desc_68[60].type = (EIF_TYPE_INDEX) (-1);
	desc_68[60].gen_type = NULL;
	desc_68[61].body_index = (BODY_INDEX) (1163);
	desc_68[61].offset = (BODY_INDEX) (-1);
	desc_68[61].type = (EIF_TYPE_INDEX) (-1);
	desc_68[61].gen_type = NULL;
	desc_68[62].body_index = (BODY_INDEX) (1164);
	desc_68[62].offset = (BODY_INDEX) (-1);
	desc_68[62].type = (EIF_TYPE_INDEX) (-1);
	desc_68[62].gen_type = NULL;
	desc_68[63].body_index = (BODY_INDEX) (1165);
	desc_68[63].offset = (BODY_INDEX) (-1);
	desc_68[63].type = (EIF_TYPE_INDEX) (-1);
	desc_68[63].gen_type = NULL;
	desc_68[64].body_index = (BODY_INDEX) (1166);
	desc_68[64].offset = (BODY_INDEX) (-1);
	desc_68[64].type = (EIF_TYPE_INDEX) (-1);
	desc_68[64].gen_type = NULL;
	desc_68[65].body_index = (BODY_INDEX) (1167);
	desc_68[65].offset = (BODY_INDEX) (-1);
	desc_68[65].type = (EIF_TYPE_INDEX) (-1);
	desc_68[65].gen_type = NULL;
	desc_68[66].body_index = (BODY_INDEX) (1168);
	desc_68[66].offset = (BODY_INDEX) (-1);
	desc_68[66].type = (EIF_TYPE_INDEX) (-1);
	desc_68[66].gen_type = NULL;
	desc_68[67].body_index = (BODY_INDEX) (1185);
	desc_68[67].offset = (BODY_INDEX) (-1);
	desc_68[67].type = (EIF_TYPE_INDEX) (-1);
	desc_68[67].gen_type = NULL;
	desc_68[68].body_index = (BODY_INDEX) (1186);
	desc_68[68].offset = (BODY_INDEX) (-1);
	desc_68[68].type = (EIF_TYPE_INDEX) (-1);
	desc_68[68].gen_type = NULL;
	desc_68[69].body_index = (BODY_INDEX) (1187);
	desc_68[69].offset = (BODY_INDEX) (-1);
	desc_68[69].type = (EIF_TYPE_INDEX) (-1);
	desc_68[69].gen_type = NULL;
	desc_68[70].body_index = (BODY_INDEX) (1188);
	desc_68[70].offset = (BODY_INDEX) (-1);
	desc_68[70].type = (EIF_TYPE_INDEX) (-1);
	desc_68[70].gen_type = NULL;
	desc_68[71].body_index = (BODY_INDEX) (1189);
	desc_68[71].offset = (BODY_INDEX) (-1);
	desc_68[71].type = (EIF_TYPE_INDEX) (-1);
	desc_68[71].gen_type = NULL;
	desc_68[72].body_index = (BODY_INDEX) (1190);
	desc_68[72].offset = (BODY_INDEX) (-1);
	desc_68[72].type = (EIF_TYPE_INDEX) (-1);
	desc_68[72].gen_type = NULL;
	desc_68[73].body_index = (BODY_INDEX) (1191);
	desc_68[73].offset = (BODY_INDEX) (-1);
	desc_68[73].type = (EIF_TYPE_INDEX) (-1);
	desc_68[73].gen_type = NULL;
	desc_68[74].body_index = (BODY_INDEX) (1192);
	desc_68[74].offset = (BODY_INDEX) (-1);
	desc_68[74].type = (EIF_TYPE_INDEX) (-1);
	desc_68[74].gen_type = NULL;
	desc_68[75].body_index = (BODY_INDEX) (1193);
	desc_68[75].offset = (BODY_INDEX) (-1);
	desc_68[75].type = (EIF_TYPE_INDEX) (-1);
	desc_68[75].gen_type = NULL;
	desc_68[76].body_index = (BODY_INDEX) (1194);
	desc_68[76].offset = (BODY_INDEX) (-1);
	desc_68[76].type = (EIF_TYPE_INDEX) (-1);
	desc_68[76].gen_type = NULL;
	desc_68[77].body_index = (BODY_INDEX) (1195);
	desc_68[77].offset = (BODY_INDEX) (-1);
	desc_68[77].type = (EIF_TYPE_INDEX) (-1);
	desc_68[77].gen_type = NULL;
	desc_68[78].body_index = (BODY_INDEX) (1178);
	desc_68[78].offset = (BODY_INDEX) (-1);
	desc_68[78].type = (EIF_TYPE_INDEX) (-1);
	desc_68[78].gen_type = NULL;
	desc_68[79].body_index = (BODY_INDEX) (1179);
	desc_68[79].offset = (BODY_INDEX) (-1);
	desc_68[79].type = (EIF_TYPE_INDEX) (-1);
	desc_68[79].gen_type = NULL;
	desc_68[80].body_index = (BODY_INDEX) (1206);
	desc_68[80].offset = (BODY_INDEX) (17);
	desc_68[80].type = (EIF_TYPE_INDEX) (225);
	desc_68[80].gen_type = NULL;
	desc_68[81].body_index = (BODY_INDEX) (1207);
	desc_68[81].offset = (BODY_INDEX) (-1);
	desc_68[81].type = (EIF_TYPE_INDEX) (-1);
	desc_68[81].gen_type = NULL;
	desc_68[82].body_index = (BODY_INDEX) (1208);
	desc_68[82].offset = (BODY_INDEX) (-1);
	desc_68[82].type = (EIF_TYPE_INDEX) (-1);
	desc_68[82].gen_type = NULL;
	desc_68[83].body_index = (BODY_INDEX) (1196);
	desc_68[83].offset = (BODY_INDEX) (0);
	desc_68[83].type = (EIF_TYPE_INDEX) (193);
	desc_68[83].gen_type =  gen_type17_68;
	desc_68[84].body_index = (BODY_INDEX) (1197);
	desc_68[84].offset = (BODY_INDEX) (8);
	desc_68[84].type = (EIF_TYPE_INDEX) (0);
	desc_68[84].gen_type = NULL;
	desc_68[85].body_index = (BODY_INDEX) (1198);
	desc_68[85].offset = (BODY_INDEX) (20);
	desc_68[85].type = (EIF_TYPE_INDEX) (246);
	desc_68[85].gen_type = NULL;
	desc_68[86].body_index = (BODY_INDEX) (1199);
	desc_68[86].offset = (BODY_INDEX) (24);
	desc_68[86].type = (EIF_TYPE_INDEX) (246);
	desc_68[86].gen_type = NULL;
	desc_68[87].body_index = (BODY_INDEX) (1200);
	desc_68[87].offset = (BODY_INDEX) (-1);
	desc_68[87].type = (EIF_TYPE_INDEX) (246);
	desc_68[87].gen_type = NULL;
	desc_68[88].body_index = (BODY_INDEX) (1201);
	desc_68[88].offset = (BODY_INDEX) (18);
	desc_68[88].type = (EIF_TYPE_INDEX) (225);
	desc_68[88].gen_type = NULL;
	desc_68[89].body_index = (BODY_INDEX) (1202);
	desc_68[89].offset = (BODY_INDEX) (28);
	desc_68[89].type = (EIF_TYPE_INDEX) (246);
	desc_68[89].gen_type = NULL;
	desc_68[90].body_index = (BODY_INDEX) (-1);
	desc_68[90].offset = (BODY_INDEX) (-1);
	desc_68[90].type = (EIF_TYPE_INDEX) (-1);
	desc_68[90].gen_type = NULL;
}

extern void Init68(void);
void Init68(void)
{
	if (desc_fill != 0)
		build_desc_68();
	IDSC(desc_68, 0, 67);
	IDSC(desc_68 + 1, 1, 67);
	IDSC(desc_68 + 32, 70, 67);
	IDSC(desc_68 + 80, 302, 67);
}


#ifdef __cplusplus
}
#endif