/*
 * Class MEM_INFO
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_160(void);
static EIF_TYPE_INDEX gen_type0_160 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_160 [] = {0xFF11,274,0xFF12,159,0xFFFF};
static EIF_TYPE_INDEX gen_type2_160 [] = {0xFF11,159,0xFFFF};
static EIF_TYPE_INDEX gen_type3_160 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_160 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_160 [] = {0xFF11,159,0xFFFF};
static EIF_TYPE_INDEX gen_type6_160 [] = {0xFF11,159,0xFFFF};
static EIF_TYPE_INDEX gen_type7_160 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_160 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_160 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_160 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_160 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_160 [] = {0xFF11,159,0xFFFF};


static struct desc_info desc_160[63];

static void build_desc_160(void) {
	desc_160[0].body_index = (BODY_INDEX) (1977);
	desc_160[0].offset = (BODY_INDEX) (-1);
	desc_160[0].type = INVALID_DTYPE;
	desc_160[0].gen_type = NULL;
	desc_160[1].body_index = (BODY_INDEX) (0);
	desc_160[1].offset = (BODY_INDEX) (-1);
	desc_160[1].type = (EIF_TYPE_INDEX) (257);
	desc_160[1].gen_type =  gen_type0_160;
	desc_160[2].body_index = (BODY_INDEX) (1);
	desc_160[2].offset = (BODY_INDEX) (-1);
	desc_160[2].type = (EIF_TYPE_INDEX) (274);
	desc_160[2].gen_type =  gen_type1_160;
	desc_160[3].body_index = (BODY_INDEX) (2);
	desc_160[3].offset = (BODY_INDEX) (-1);
	desc_160[3].type = (EIF_TYPE_INDEX) (225);
	desc_160[3].gen_type = NULL;
	desc_160[4].body_index = (BODY_INDEX) (3);
	desc_160[4].offset = (BODY_INDEX) (-1);
	desc_160[4].type = (EIF_TYPE_INDEX) (225);
	desc_160[4].gen_type = NULL;
	desc_160[5].body_index = (BODY_INDEX) (4);
	desc_160[5].offset = (BODY_INDEX) (-1);
	desc_160[5].type = (EIF_TYPE_INDEX) (225);
	desc_160[5].gen_type = NULL;
	desc_160[6].body_index = (BODY_INDEX) (5);
	desc_160[6].offset = (BODY_INDEX) (-1);
	desc_160[6].type = (EIF_TYPE_INDEX) (225);
	desc_160[6].gen_type = NULL;
	desc_160[7].body_index = (BODY_INDEX) (6);
	desc_160[7].offset = (BODY_INDEX) (-1);
	desc_160[7].type = (EIF_TYPE_INDEX) (225);
	desc_160[7].gen_type = NULL;
	desc_160[8].body_index = (BODY_INDEX) (7);
	desc_160[8].offset = (BODY_INDEX) (-1);
	desc_160[8].type = (EIF_TYPE_INDEX) (225);
	desc_160[8].gen_type = NULL;
	desc_160[9].body_index = (BODY_INDEX) (8);
	desc_160[9].offset = (BODY_INDEX) (-1);
	desc_160[9].type = (EIF_TYPE_INDEX) (225);
	desc_160[9].gen_type = NULL;
	desc_160[10].body_index = (BODY_INDEX) (9);
	desc_160[10].offset = (BODY_INDEX) (-1);
	desc_160[10].type = (EIF_TYPE_INDEX) (225);
	desc_160[10].gen_type = NULL;
	desc_160[11].body_index = (BODY_INDEX) (10);
	desc_160[11].offset = (BODY_INDEX) (-1);
	desc_160[11].type = (EIF_TYPE_INDEX) (159);
	desc_160[11].gen_type =  gen_type2_160;
	desc_160[12].body_index = (BODY_INDEX) (11);
	desc_160[12].offset = (BODY_INDEX) (-1);
	desc_160[12].type = (EIF_TYPE_INDEX) (-1);
	desc_160[12].gen_type = NULL;
	desc_160[13].body_index = (BODY_INDEX) (12);
	desc_160[13].offset = (BODY_INDEX) (-1);
	desc_160[13].type = (EIF_TYPE_INDEX) (-1);
	desc_160[13].gen_type = NULL;
	desc_160[14].body_index = (BODY_INDEX) (13);
	desc_160[14].offset = (BODY_INDEX) (-1);
	desc_160[14].type = (EIF_TYPE_INDEX) (0);
	desc_160[14].gen_type =  gen_type3_160;
	desc_160[15].body_index = (BODY_INDEX) (14);
	desc_160[15].offset = (BODY_INDEX) (-1);
	desc_160[15].type = (EIF_TYPE_INDEX) (0);
	desc_160[15].gen_type =  gen_type4_160;
	desc_160[16].body_index = (BODY_INDEX) (15);
	desc_160[16].offset = (BODY_INDEX) (-1);
	desc_160[16].type = (EIF_TYPE_INDEX) (159);
	desc_160[16].gen_type =  gen_type5_160;
	desc_160[17].body_index = (BODY_INDEX) (16);
	desc_160[17].offset = (BODY_INDEX) (-1);
	desc_160[17].type = (EIF_TYPE_INDEX) (159);
	desc_160[17].gen_type =  gen_type6_160;
	desc_160[18].body_index = (BODY_INDEX) (17);
	desc_160[18].offset = (BODY_INDEX) (-1);
	desc_160[18].type = (EIF_TYPE_INDEX) (0);
	desc_160[18].gen_type =  gen_type7_160;
	desc_160[19].body_index = (BODY_INDEX) (18);
	desc_160[19].offset = (BODY_INDEX) (-1);
	desc_160[19].type = (EIF_TYPE_INDEX) (-1);
	desc_160[19].gen_type = NULL;
	desc_160[20].body_index = (BODY_INDEX) (19);
	desc_160[20].offset = (BODY_INDEX) (-1);
	desc_160[20].type = (EIF_TYPE_INDEX) (-1);
	desc_160[20].gen_type = NULL;
	desc_160[21].body_index = (BODY_INDEX) (20);
	desc_160[21].offset = (BODY_INDEX) (-1);
	desc_160[21].type = (EIF_TYPE_INDEX) (18);
	desc_160[21].gen_type =  gen_type8_160;
	desc_160[22].body_index = (BODY_INDEX) (21);
	desc_160[22].offset = (BODY_INDEX) (-1);
	desc_160[22].type = (EIF_TYPE_INDEX) (257);
	desc_160[22].gen_type =  gen_type9_160;
	desc_160[23].body_index = (BODY_INDEX) (22);
	desc_160[23].offset = (BODY_INDEX) (-1);
	desc_160[23].type = (EIF_TYPE_INDEX) (257);
	desc_160[23].gen_type =  gen_type10_160;
	desc_160[24].body_index = (BODY_INDEX) (23);
	desc_160[24].offset = (BODY_INDEX) (-1);
	desc_160[24].type = (EIF_TYPE_INDEX) (-1);
	desc_160[24].gen_type = NULL;
	desc_160[25].body_index = (BODY_INDEX) (24);
	desc_160[25].offset = (BODY_INDEX) (-1);
	desc_160[25].type = (EIF_TYPE_INDEX) (38);
	desc_160[25].gen_type =  gen_type11_160;
	desc_160[26].body_index = (BODY_INDEX) (25);
	desc_160[26].offset = (BODY_INDEX) (-1);
	desc_160[26].type = (EIF_TYPE_INDEX) (-1);
	desc_160[26].gen_type = NULL;
	desc_160[27].body_index = (BODY_INDEX) (26);
	desc_160[27].offset = (BODY_INDEX) (-1);
	desc_160[27].type = (EIF_TYPE_INDEX) (-1);
	desc_160[27].gen_type = NULL;
	desc_160[28].body_index = (BODY_INDEX) (27);
	desc_160[28].offset = (BODY_INDEX) (-1);
	desc_160[28].type = (EIF_TYPE_INDEX) (-1);
	desc_160[28].gen_type = NULL;
	desc_160[29].body_index = (BODY_INDEX) (28);
	desc_160[29].offset = (BODY_INDEX) (-1);
	desc_160[29].type = (EIF_TYPE_INDEX) (159);
	desc_160[29].gen_type = NULL;
	desc_160[30].body_index = (BODY_INDEX) (29);
	desc_160[30].offset = (BODY_INDEX) (-1);
	desc_160[30].type = (EIF_TYPE_INDEX) (252);
	desc_160[30].gen_type = NULL;
	desc_160[31].body_index = (BODY_INDEX) (30);
	desc_160[31].offset = (BODY_INDEX) (-1);
	desc_160[31].type = (EIF_TYPE_INDEX) (159);
	desc_160[31].gen_type =  gen_type12_160;
	desc_160[32].body_index = (BODY_INDEX) (1921);
	desc_160[32].offset = (BODY_INDEX) (-1);
	desc_160[32].type = (EIF_TYPE_INDEX) (-1);
	desc_160[32].gen_type = NULL;
	desc_160[33].body_index = (BODY_INDEX) (1922);
	desc_160[33].offset = (BODY_INDEX) (-1);
	desc_160[33].type = (EIF_TYPE_INDEX) (-1);
	desc_160[33].gen_type = NULL;
	desc_160[34].body_index = (BODY_INDEX) (1923);
	desc_160[34].offset = (BODY_INDEX) (8);
	desc_160[34].type = (EIF_TYPE_INDEX) (225);
	desc_160[34].gen_type = NULL;
	desc_160[35].body_index = (BODY_INDEX) (1916);
	desc_160[35].offset = (BODY_INDEX) (-1);
	desc_160[35].type = (EIF_TYPE_INDEX) (252);
	desc_160[35].gen_type = NULL;
	desc_160[36].body_index = (BODY_INDEX) (1917);
	desc_160[36].offset = (BODY_INDEX) (-1);
	desc_160[36].type = (EIF_TYPE_INDEX) (225);
	desc_160[36].gen_type = NULL;
	desc_160[37].body_index = (BODY_INDEX) (1971);
	desc_160[37].offset = (BODY_INDEX) (-1);
	desc_160[37].type = (EIF_TYPE_INDEX) (246);
	desc_160[37].gen_type = NULL;
	desc_160[38].body_index = (BODY_INDEX) (1918);
	desc_160[38].offset = (BODY_INDEX) (16);
	desc_160[38].type = (EIF_TYPE_INDEX) (252);
	desc_160[38].gen_type = NULL;
	desc_160[39].body_index = (BODY_INDEX) (1919);
	desc_160[39].offset = (BODY_INDEX) (0);
	desc_160[39].type = (EIF_TYPE_INDEX) (193);
	desc_160[39].gen_type = NULL;
	desc_160[40].body_index = (BODY_INDEX) (1961);
	desc_160[40].offset = (BODY_INDEX) (-1);
	desc_160[40].type = (EIF_TYPE_INDEX) (246);
	desc_160[40].gen_type = NULL;
	desc_160[41].body_index = (BODY_INDEX) (1962);
	desc_160[41].offset = (BODY_INDEX) (-1);
	desc_160[41].type = (EIF_TYPE_INDEX) (246);
	desc_160[41].gen_type = NULL;
	desc_160[42].body_index = (BODY_INDEX) (1963);
	desc_160[42].offset = (BODY_INDEX) (-1);
	desc_160[42].type = (EIF_TYPE_INDEX) (246);
	desc_160[42].gen_type = NULL;
	desc_160[43].body_index = (BODY_INDEX) (1964);
	desc_160[43].offset = (BODY_INDEX) (-1);
	desc_160[43].type = (EIF_TYPE_INDEX) (246);
	desc_160[43].gen_type = NULL;
	desc_160[44].body_index = (BODY_INDEX) (1965);
	desc_160[44].offset = (BODY_INDEX) (-1);
	desc_160[44].type = (EIF_TYPE_INDEX) (246);
	desc_160[44].gen_type = NULL;
	desc_160[45].body_index = (BODY_INDEX) (1978);
	desc_160[45].offset = (BODY_INDEX) (-1);
	desc_160[45].type = (EIF_TYPE_INDEX) (-1);
	desc_160[45].gen_type = NULL;
	desc_160[46].body_index = (BODY_INDEX) (1979);
	desc_160[46].offset = (BODY_INDEX) (-1);
	desc_160[46].type = (EIF_TYPE_INDEX) (-1);
	desc_160[46].gen_type = NULL;
	desc_160[47].body_index = (BODY_INDEX) (1980);
	desc_160[47].offset = (BODY_INDEX) (12);
	desc_160[47].type = (EIF_TYPE_INDEX) (246);
	desc_160[47].gen_type = NULL;
	desc_160[48].body_index = (BODY_INDEX) (1981);
	desc_160[48].offset = (BODY_INDEX) (-1);
	desc_160[48].type = (EIF_TYPE_INDEX) (246);
	desc_160[48].gen_type = NULL;
	desc_160[49].body_index = (BODY_INDEX) (1982);
	desc_160[49].offset = (BODY_INDEX) (-1);
	desc_160[49].type = (EIF_TYPE_INDEX) (246);
	desc_160[49].gen_type = NULL;
	desc_160[50].body_index = (BODY_INDEX) (1983);
	desc_160[50].offset = (BODY_INDEX) (-1);
	desc_160[50].type = (EIF_TYPE_INDEX) (246);
	desc_160[50].gen_type = NULL;
	desc_160[51].body_index = (BODY_INDEX) (1984);
	desc_160[51].offset = (BODY_INDEX) (-1);
	desc_160[51].type = (EIF_TYPE_INDEX) (246);
	desc_160[51].gen_type = NULL;
	desc_160[52].body_index = (BODY_INDEX) (1985);
	desc_160[52].offset = (BODY_INDEX) (-1);
	desc_160[52].type = (EIF_TYPE_INDEX) (246);
	desc_160[52].gen_type = NULL;
	desc_160[53].body_index = (BODY_INDEX) (1966);
	desc_160[53].offset = (BODY_INDEX) (-1);
	desc_160[53].type = (EIF_TYPE_INDEX) (249);
	desc_160[53].gen_type = NULL;
	desc_160[54].body_index = (BODY_INDEX) (1967);
	desc_160[54].offset = (BODY_INDEX) (-1);
	desc_160[54].type = (EIF_TYPE_INDEX) (249);
	desc_160[54].gen_type = NULL;
	desc_160[55].body_index = (BODY_INDEX) (1968);
	desc_160[55].offset = (BODY_INDEX) (-1);
	desc_160[55].type = (EIF_TYPE_INDEX) (249);
	desc_160[55].gen_type = NULL;
	desc_160[56].body_index = (BODY_INDEX) (1969);
	desc_160[56].offset = (BODY_INDEX) (-1);
	desc_160[56].type = (EIF_TYPE_INDEX) (249);
	desc_160[56].gen_type = NULL;
	desc_160[57].body_index = (BODY_INDEX) (1970);
	desc_160[57].offset = (BODY_INDEX) (-1);
	desc_160[57].type = (EIF_TYPE_INDEX) (-1);
	desc_160[57].gen_type = NULL;
	desc_160[58].body_index = (BODY_INDEX) (1972);
	desc_160[58].offset = (BODY_INDEX) (-1);
	desc_160[58].type = (EIF_TYPE_INDEX) (249);
	desc_160[58].gen_type = NULL;
	desc_160[59].body_index = (BODY_INDEX) (1973);
	desc_160[59].offset = (BODY_INDEX) (-1);
	desc_160[59].type = (EIF_TYPE_INDEX) (249);
	desc_160[59].gen_type = NULL;
	desc_160[60].body_index = (BODY_INDEX) (1974);
	desc_160[60].offset = (BODY_INDEX) (-1);
	desc_160[60].type = (EIF_TYPE_INDEX) (249);
	desc_160[60].gen_type = NULL;
	desc_160[61].body_index = (BODY_INDEX) (1975);
	desc_160[61].offset = (BODY_INDEX) (-1);
	desc_160[61].type = (EIF_TYPE_INDEX) (246);
	desc_160[61].gen_type = NULL;
	desc_160[62].body_index = (BODY_INDEX) (1976);
	desc_160[62].offset = (BODY_INDEX) (-1);
	desc_160[62].type = (EIF_TYPE_INDEX) (246);
	desc_160[62].gen_type = NULL;
}

extern void Init160(void);
void Init160(void)
{
	if (desc_fill != 0)
		build_desc_160();
	IDSC(desc_160, 0, 159);
	IDSC(desc_160 + 1, 1, 159);
	IDSC(desc_160 + 32, 347, 159);
	IDSC(desc_160 + 40, 167, 159);
	IDSC(desc_160 + 45, 363, 159);
}


#ifdef __cplusplus
}
#endif
