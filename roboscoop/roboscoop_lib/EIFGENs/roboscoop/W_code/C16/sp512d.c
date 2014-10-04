/*
 * Class SPECIAL [POINTER]
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_512(void);
static EIF_TYPE_INDEX gen_type0_512 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_512 [] = {0xFF11,274,0xFF12,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type2_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type3_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type6_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type7_512 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_512 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_512 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_512 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_512 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_512 [] = {511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type13_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type14_512 [] = {0xFF11,512,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_512 [] = {0xFF11,529,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_512 [] = {0xFF11,517,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type20_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type21_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type22_512 [] = {0xFF11,511,252,0xFFFF};
static EIF_TYPE_INDEX gen_type23_512 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type24_512 [] = {0xFF11,180,0xFFFF};
static EIF_TYPE_INDEX gen_type25_512 [] = {0xFF11,257,0xFFFF};


static struct desc_info desc_512[84];

static void build_desc_512(void) {
	desc_512[0].body_index = (BODY_INDEX) (3907);
	desc_512[0].offset = (BODY_INDEX) (-1);
	desc_512[0].type = INVALID_DTYPE;
	desc_512[0].gen_type = NULL;
	desc_512[1].body_index = (BODY_INDEX) (0);
	desc_512[1].offset = (BODY_INDEX) (-1);
	desc_512[1].type = (EIF_TYPE_INDEX) (257);
	desc_512[1].gen_type =  gen_type0_512;
	desc_512[2].body_index = (BODY_INDEX) (1);
	desc_512[2].offset = (BODY_INDEX) (-1);
	desc_512[2].type = (EIF_TYPE_INDEX) (274);
	desc_512[2].gen_type =  gen_type1_512;
	desc_512[3].body_index = (BODY_INDEX) (2);
	desc_512[3].offset = (BODY_INDEX) (-1);
	desc_512[3].type = (EIF_TYPE_INDEX) (225);
	desc_512[3].gen_type = NULL;
	desc_512[4].body_index = (BODY_INDEX) (3);
	desc_512[4].offset = (BODY_INDEX) (-1);
	desc_512[4].type = (EIF_TYPE_INDEX) (225);
	desc_512[4].gen_type = NULL;
	desc_512[5].body_index = (BODY_INDEX) (4);
	desc_512[5].offset = (BODY_INDEX) (-1);
	desc_512[5].type = (EIF_TYPE_INDEX) (225);
	desc_512[5].gen_type = NULL;
	desc_512[6].body_index = (BODY_INDEX) (5);
	desc_512[6].offset = (BODY_INDEX) (-1);
	desc_512[6].type = (EIF_TYPE_INDEX) (225);
	desc_512[6].gen_type = NULL;
	desc_512[7].body_index = (BODY_INDEX) (6);
	desc_512[7].offset = (BODY_INDEX) (-1);
	desc_512[7].type = (EIF_TYPE_INDEX) (225);
	desc_512[7].gen_type = NULL;
	desc_512[8].body_index = (BODY_INDEX) (7);
	desc_512[8].offset = (BODY_INDEX) (-1);
	desc_512[8].type = (EIF_TYPE_INDEX) (225);
	desc_512[8].gen_type = NULL;
	desc_512[9].body_index = (BODY_INDEX) (8);
	desc_512[9].offset = (BODY_INDEX) (-1);
	desc_512[9].type = (EIF_TYPE_INDEX) (225);
	desc_512[9].gen_type = NULL;
	desc_512[10].body_index = (BODY_INDEX) (9);
	desc_512[10].offset = (BODY_INDEX) (-1);
	desc_512[10].type = (EIF_TYPE_INDEX) (225);
	desc_512[10].gen_type = NULL;
	desc_512[11].body_index = (BODY_INDEX) (10);
	desc_512[11].offset = (BODY_INDEX) (-1);
	desc_512[11].type = (EIF_TYPE_INDEX) (511);
	desc_512[11].gen_type =  gen_type2_512;
	desc_512[12].body_index = (BODY_INDEX) (11);
	desc_512[12].offset = (BODY_INDEX) (-1);
	desc_512[12].type = (EIF_TYPE_INDEX) (-1);
	desc_512[12].gen_type = NULL;
	desc_512[13].body_index = (BODY_INDEX) (12);
	desc_512[13].offset = (BODY_INDEX) (-1);
	desc_512[13].type = (EIF_TYPE_INDEX) (-1);
	desc_512[13].gen_type = NULL;
	desc_512[14].body_index = (BODY_INDEX) (13);
	desc_512[14].offset = (BODY_INDEX) (-1);
	desc_512[14].type = (EIF_TYPE_INDEX) (0);
	desc_512[14].gen_type =  gen_type3_512;
	desc_512[15].body_index = (BODY_INDEX) (14);
	desc_512[15].offset = (BODY_INDEX) (-1);
	desc_512[15].type = (EIF_TYPE_INDEX) (0);
	desc_512[15].gen_type =  gen_type4_512;
	desc_512[16].body_index = (BODY_INDEX) (15);
	desc_512[16].offset = (BODY_INDEX) (-1);
	desc_512[16].type = (EIF_TYPE_INDEX) (511);
	desc_512[16].gen_type =  gen_type5_512;
	desc_512[17].body_index = (BODY_INDEX) (16);
	desc_512[17].offset = (BODY_INDEX) (-1);
	desc_512[17].type = (EIF_TYPE_INDEX) (511);
	desc_512[17].gen_type =  gen_type6_512;
	desc_512[18].body_index = (BODY_INDEX) (17);
	desc_512[18].offset = (BODY_INDEX) (-1);
	desc_512[18].type = (EIF_TYPE_INDEX) (0);
	desc_512[18].gen_type =  gen_type7_512;
	desc_512[19].body_index = (BODY_INDEX) (18);
	desc_512[19].offset = (BODY_INDEX) (-1);
	desc_512[19].type = (EIF_TYPE_INDEX) (-1);
	desc_512[19].gen_type = NULL;
	desc_512[20].body_index = (BODY_INDEX) (19);
	desc_512[20].offset = (BODY_INDEX) (-1);
	desc_512[20].type = (EIF_TYPE_INDEX) (-1);
	desc_512[20].gen_type = NULL;
	desc_512[21].body_index = (BODY_INDEX) (20);
	desc_512[21].offset = (BODY_INDEX) (-1);
	desc_512[21].type = (EIF_TYPE_INDEX) (18);
	desc_512[21].gen_type =  gen_type8_512;
	desc_512[22].body_index = (BODY_INDEX) (21);
	desc_512[22].offset = (BODY_INDEX) (-1);
	desc_512[22].type = (EIF_TYPE_INDEX) (257);
	desc_512[22].gen_type =  gen_type9_512;
	desc_512[23].body_index = (BODY_INDEX) (22);
	desc_512[23].offset = (BODY_INDEX) (-1);
	desc_512[23].type = (EIF_TYPE_INDEX) (257);
	desc_512[23].gen_type =  gen_type10_512;
	desc_512[24].body_index = (BODY_INDEX) (23);
	desc_512[24].offset = (BODY_INDEX) (-1);
	desc_512[24].type = (EIF_TYPE_INDEX) (-1);
	desc_512[24].gen_type = NULL;
	desc_512[25].body_index = (BODY_INDEX) (24);
	desc_512[25].offset = (BODY_INDEX) (-1);
	desc_512[25].type = (EIF_TYPE_INDEX) (38);
	desc_512[25].gen_type =  gen_type11_512;
	desc_512[26].body_index = (BODY_INDEX) (25);
	desc_512[26].offset = (BODY_INDEX) (-1);
	desc_512[26].type = (EIF_TYPE_INDEX) (-1);
	desc_512[26].gen_type = NULL;
	desc_512[27].body_index = (BODY_INDEX) (26);
	desc_512[27].offset = (BODY_INDEX) (-1);
	desc_512[27].type = (EIF_TYPE_INDEX) (-1);
	desc_512[27].gen_type = NULL;
	desc_512[28].body_index = (BODY_INDEX) (27);
	desc_512[28].offset = (BODY_INDEX) (-1);
	desc_512[28].type = (EIF_TYPE_INDEX) (-1);
	desc_512[28].gen_type = NULL;
	desc_512[29].body_index = (BODY_INDEX) (28);
	desc_512[29].offset = (BODY_INDEX) (-1);
	desc_512[29].type = (EIF_TYPE_INDEX) (511);
	desc_512[29].gen_type =  gen_type12_512;
	desc_512[30].body_index = (BODY_INDEX) (29);
	desc_512[30].offset = (BODY_INDEX) (-1);
	desc_512[30].type = (EIF_TYPE_INDEX) (252);
	desc_512[30].gen_type = NULL;
	desc_512[31].body_index = (BODY_INDEX) (30);
	desc_512[31].offset = (BODY_INDEX) (-1);
	desc_512[31].type = (EIF_TYPE_INDEX) (511);
	desc_512[31].gen_type =  gen_type13_512;
	desc_512[32].body_index = (BODY_INDEX) (3586);
	desc_512[32].offset = (BODY_INDEX) (-1);
	desc_512[32].type = (EIF_TYPE_INDEX) (512);
	desc_512[32].gen_type =  gen_type14_512;
	desc_512[33].body_index = (BODY_INDEX) (-1);
	desc_512[33].offset = (BODY_INDEX) (-1);
	desc_512[33].type = (EIF_TYPE_INDEX) (-1);
	desc_512[33].gen_type =  gen_type15_512;
	desc_512[34].body_index = (BODY_INDEX) (3908);
	desc_512[34].offset = (BODY_INDEX) (-1);
	desc_512[34].type = (EIF_TYPE_INDEX) (-1);
	desc_512[34].gen_type = NULL;
	desc_512[35].body_index = (BODY_INDEX) (3909);
	desc_512[35].offset = (BODY_INDEX) (-1);
	desc_512[35].type = (EIF_TYPE_INDEX) (-1);
	desc_512[35].gen_type = NULL;
	desc_512[36].body_index = (BODY_INDEX) (3910);
	desc_512[36].offset = (BODY_INDEX) (-1);
	desc_512[36].type = (EIF_TYPE_INDEX) (-1);
	desc_512[36].gen_type = NULL;
	desc_512[37].body_index = (BODY_INDEX) (3912);
	desc_512[37].offset = (BODY_INDEX) (-1);
	desc_512[37].type = (EIF_TYPE_INDEX) (-1);
	desc_512[37].gen_type =  gen_type16_512;
	desc_512[38].body_index = (BODY_INDEX) (3913);
	desc_512[38].offset = (BODY_INDEX) (-1);
	desc_512[38].type = (EIF_TYPE_INDEX) (246);
	desc_512[38].gen_type = NULL;
	desc_512[39].body_index = (BODY_INDEX) (3914);
	desc_512[39].offset = (BODY_INDEX) (-1);
	desc_512[39].type = (EIF_TYPE_INDEX) (252);
	desc_512[39].gen_type = NULL;
	desc_512[40].body_index = (BODY_INDEX) (3915);
	desc_512[40].offset = (BODY_INDEX) (-1);
	desc_512[40].type = (EIF_TYPE_INDEX) (252);
	desc_512[40].gen_type = NULL;
	desc_512[41].body_index = (BODY_INDEX) (3916);
	desc_512[41].offset = (BODY_INDEX) (-1);
	desc_512[41].type = (EIF_TYPE_INDEX) (529);
	desc_512[41].gen_type =  gen_type17_512;
	desc_512[42].body_index = (BODY_INDEX) (3917);
	desc_512[42].offset = (BODY_INDEX) (-1);
	desc_512[42].type = (EIF_TYPE_INDEX) (517);
	desc_512[42].gen_type =  gen_type18_512;
	desc_512[43].body_index = (BODY_INDEX) (3919);
	desc_512[43].offset = (BODY_INDEX) (-1);
	desc_512[43].type = (EIF_TYPE_INDEX) (246);
	desc_512[43].gen_type = NULL;
	desc_512[44].body_index = (BODY_INDEX) (3920);
	desc_512[44].offset = (BODY_INDEX) (-1);
	desc_512[44].type = (EIF_TYPE_INDEX) (246);
	desc_512[44].gen_type = NULL;
	desc_512[45].body_index = (BODY_INDEX) (3923);
	desc_512[45].offset = (BODY_INDEX) (-1);
	desc_512[45].type = (EIF_TYPE_INDEX) (225);
	desc_512[45].gen_type = NULL;
	desc_512[46].body_index = (BODY_INDEX) (3924);
	desc_512[46].offset = (BODY_INDEX) (-1);
	desc_512[46].type = (EIF_TYPE_INDEX) (225);
	desc_512[46].gen_type = NULL;
	desc_512[47].body_index = (BODY_INDEX) (3926);
	desc_512[47].offset = (BODY_INDEX) (-1);
	desc_512[47].type = (EIF_TYPE_INDEX) (-1);
	desc_512[47].gen_type = NULL;
	desc_512[48].body_index = (BODY_INDEX) (3927);
	desc_512[48].offset = (BODY_INDEX) (-1);
	desc_512[48].type = (EIF_TYPE_INDEX) (-1);
	desc_512[48].gen_type = NULL;
	desc_512[49].body_index = (BODY_INDEX) (3928);
	desc_512[49].offset = (BODY_INDEX) (-1);
	desc_512[49].type = (EIF_TYPE_INDEX) (-1);
	desc_512[49].gen_type = NULL;
	desc_512[50].body_index = (BODY_INDEX) (3929);
	desc_512[50].offset = (BODY_INDEX) (-1);
	desc_512[50].type = (EIF_TYPE_INDEX) (-1);
	desc_512[50].gen_type = NULL;
	desc_512[51].body_index = (BODY_INDEX) (3930);
	desc_512[51].offset = (BODY_INDEX) (-1);
	desc_512[51].type = (EIF_TYPE_INDEX) (-1);
	desc_512[51].gen_type = NULL;
	desc_512[52].body_index = (BODY_INDEX) (3931);
	desc_512[52].offset = (BODY_INDEX) (-1);
	desc_512[52].type = (EIF_TYPE_INDEX) (-1);
	desc_512[52].gen_type = NULL;
	desc_512[53].body_index = (BODY_INDEX) (3932);
	desc_512[53].offset = (BODY_INDEX) (-1);
	desc_512[53].type = (EIF_TYPE_INDEX) (-1);
	desc_512[53].gen_type = NULL;
	desc_512[54].body_index = (BODY_INDEX) (3933);
	desc_512[54].offset = (BODY_INDEX) (-1);
	desc_512[54].type = (EIF_TYPE_INDEX) (-1);
	desc_512[54].gen_type = NULL;
	desc_512[55].body_index = (BODY_INDEX) (3934);
	desc_512[55].offset = (BODY_INDEX) (-1);
	desc_512[55].type = (EIF_TYPE_INDEX) (-1);
	desc_512[55].gen_type = NULL;
	desc_512[56].body_index = (BODY_INDEX) (3935);
	desc_512[56].offset = (BODY_INDEX) (-1);
	desc_512[56].type = (EIF_TYPE_INDEX) (-1);
	desc_512[56].gen_type = NULL;
	desc_512[57].body_index = (BODY_INDEX) (3936);
	desc_512[57].offset = (BODY_INDEX) (-1);
	desc_512[57].type = (EIF_TYPE_INDEX) (-1);
	desc_512[57].gen_type = NULL;
	desc_512[58].body_index = (BODY_INDEX) (3937);
	desc_512[58].offset = (BODY_INDEX) (-1);
	desc_512[58].type = (EIF_TYPE_INDEX) (-1);
	desc_512[58].gen_type = NULL;
	desc_512[59].body_index = (BODY_INDEX) (3938);
	desc_512[59].offset = (BODY_INDEX) (-1);
	desc_512[59].type = (EIF_TYPE_INDEX) (-1);
	desc_512[59].gen_type = NULL;
	desc_512[60].body_index = (BODY_INDEX) (3939);
	desc_512[60].offset = (BODY_INDEX) (-1);
	desc_512[60].type = (EIF_TYPE_INDEX) (-1);
	desc_512[60].gen_type = NULL;
	desc_512[61].body_index = (BODY_INDEX) (3940);
	desc_512[61].offset = (BODY_INDEX) (-1);
	desc_512[61].type = (EIF_TYPE_INDEX) (-1);
	desc_512[61].gen_type = NULL;
	desc_512[62].body_index = (BODY_INDEX) (3941);
	desc_512[62].offset = (BODY_INDEX) (-1);
	desc_512[62].type = (EIF_TYPE_INDEX) (511);
	desc_512[62].gen_type =  gen_type19_512;
	desc_512[63].body_index = (BODY_INDEX) (3942);
	desc_512[63].offset = (BODY_INDEX) (-1);
	desc_512[63].type = (EIF_TYPE_INDEX) (511);
	desc_512[63].gen_type =  gen_type20_512;
	desc_512[64].body_index = (BODY_INDEX) (3943);
	desc_512[64].offset = (BODY_INDEX) (-1);
	desc_512[64].type = (EIF_TYPE_INDEX) (511);
	desc_512[64].gen_type =  gen_type21_512;
	desc_512[65].body_index = (BODY_INDEX) (3944);
	desc_512[65].offset = (BODY_INDEX) (-1);
	desc_512[65].type = (EIF_TYPE_INDEX) (511);
	desc_512[65].gen_type =  gen_type22_512;
	desc_512[66].body_index = (BODY_INDEX) (3895);
	desc_512[66].offset = (BODY_INDEX) (-1);
	desc_512[66].type = (EIF_TYPE_INDEX) (-1);
	desc_512[66].gen_type = NULL;
	desc_512[67].body_index = (BODY_INDEX) (3896);
	desc_512[67].offset = (BODY_INDEX) (-1);
	desc_512[67].type = (EIF_TYPE_INDEX) (-1);
	desc_512[67].gen_type = NULL;
	desc_512[68].body_index = (BODY_INDEX) (3897);
	desc_512[68].offset = (BODY_INDEX) (-1);
	desc_512[68].type = (EIF_TYPE_INDEX) (-1);
	desc_512[68].gen_type = NULL;
	desc_512[69].body_index = (BODY_INDEX) (3898);
	desc_512[69].offset = (BODY_INDEX) (-1);
	desc_512[69].type = (EIF_TYPE_INDEX) (-1);
	desc_512[69].gen_type = NULL;
	desc_512[70].body_index = (BODY_INDEX) (3899);
	desc_512[70].offset = (BODY_INDEX) (-1);
	desc_512[70].type = (EIF_TYPE_INDEX) (-1);
	desc_512[70].gen_type = NULL;
	desc_512[71].body_index = (BODY_INDEX) (3900);
	desc_512[71].offset = (BODY_INDEX) (-1);
	desc_512[71].type = (EIF_TYPE_INDEX) (225);
	desc_512[71].gen_type = NULL;
	desc_512[72].body_index = (BODY_INDEX) (3901);
	desc_512[72].offset = (BODY_INDEX) (-1);
	desc_512[72].type = (EIF_TYPE_INDEX) (225);
	desc_512[72].gen_type = NULL;
	desc_512[73].body_index = (BODY_INDEX) (3902);
	desc_512[73].offset = (BODY_INDEX) (-1);
	desc_512[73].type = (EIF_TYPE_INDEX) (-1);
	desc_512[73].gen_type = NULL;
	desc_512[74].body_index = (BODY_INDEX) (3903);
	desc_512[74].offset = (BODY_INDEX) (-1);
	desc_512[74].type = (EIF_TYPE_INDEX) (-1);
	desc_512[74].gen_type = NULL;
	desc_512[75].body_index = (BODY_INDEX) (3905);
	desc_512[75].offset = (BODY_INDEX) (-1);
	desc_512[75].type = (EIF_TYPE_INDEX) (246);
	desc_512[75].gen_type = NULL;
	desc_512[76].body_index = (BODY_INDEX) (3906);
	desc_512[76].offset = (BODY_INDEX) (-1);
	desc_512[76].type = (EIF_TYPE_INDEX) (-1);
	desc_512[76].gen_type = NULL;
	desc_512[77].body_index = (BODY_INDEX) (3911);
	desc_512[77].offset = (BODY_INDEX) (-1);
	desc_512[77].type = (EIF_TYPE_INDEX) (-1);
	desc_512[77].gen_type =  gen_type23_512;
	desc_512[78].body_index = (BODY_INDEX) (3918);
	desc_512[78].offset = (BODY_INDEX) (-1);
	desc_512[78].type = (EIF_TYPE_INDEX) (180);
	desc_512[78].gen_type =  gen_type24_512;
	desc_512[79].body_index = (BODY_INDEX) (3925);
	desc_512[79].offset = (BODY_INDEX) (-1);
	desc_512[79].type = (EIF_TYPE_INDEX) (225);
	desc_512[79].gen_type = NULL;
	desc_512[80].body_index = (BODY_INDEX) (3921);
	desc_512[80].offset = (BODY_INDEX) (-1);
	desc_512[80].type = (EIF_TYPE_INDEX) (246);
	desc_512[80].gen_type = NULL;
	desc_512[81].body_index = (BODY_INDEX) (3922);
	desc_512[81].offset = (BODY_INDEX) (-1);
	desc_512[81].type = (EIF_TYPE_INDEX) (246);
	desc_512[81].gen_type = NULL;
	desc_512[82].body_index = (BODY_INDEX) (3925);
	desc_512[82].offset = (BODY_INDEX) (-1);
	desc_512[82].type = (EIF_TYPE_INDEX) (225);
	desc_512[82].gen_type = NULL;
	desc_512[83].body_index = (BODY_INDEX) (3904);
	desc_512[83].offset = (BODY_INDEX) (-1);
	desc_512[83].type = (EIF_TYPE_INDEX) (257);
	desc_512[83].gen_type =  gen_type25_512;
}

extern void Init512(void);
void Init512(void)
{
	if (desc_fill != 0)
		build_desc_512();
	IDSC(desc_512, 0, 511);
	IDSC(desc_512 + 1, 1, 511);
	IDSC(desc_512 + 32, 135, 511);
	IDSC(desc_512 + 34, 2, 511);
	IDSC(desc_512 + 77, 288, 511);
	IDSC(desc_512 + 80, 118, 511);
	IDSC(desc_512 + 83, 374, 511);
}


#ifdef __cplusplus
}
#endif