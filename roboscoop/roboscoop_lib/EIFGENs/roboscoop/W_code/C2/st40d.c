/*
 * Class STOP_SIGNALER
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_40(void);
static EIF_TYPE_INDEX gen_type0_40 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_40 [] = {0xFF11,274,0xFF12,39,0xFFFF};
static EIF_TYPE_INDEX gen_type2_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type3_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type6_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type7_40 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_40 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_40 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_40 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_40 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_40 [] = {0xFF11,39,0xFFFF};
static EIF_TYPE_INDEX gen_type13_40 [] = {0xFF11,300,0xFF11,39,0xFFFF};


static struct desc_info desc_40[47];

static void build_desc_40(void) {
	desc_40[0].body_index = (BODY_INDEX) (-1);
	desc_40[0].offset = (BODY_INDEX) (-1);
	desc_40[0].type = INVALID_DTYPE;
	desc_40[0].gen_type = NULL;
	desc_40[1].body_index = (BODY_INDEX) (0);
	desc_40[1].offset = (BODY_INDEX) (-1);
	desc_40[1].type = (EIF_TYPE_INDEX) (257);
	desc_40[1].gen_type =  gen_type0_40;
	desc_40[2].body_index = (BODY_INDEX) (1);
	desc_40[2].offset = (BODY_INDEX) (-1);
	desc_40[2].type = (EIF_TYPE_INDEX) (274);
	desc_40[2].gen_type =  gen_type1_40;
	desc_40[3].body_index = (BODY_INDEX) (2);
	desc_40[3].offset = (BODY_INDEX) (-1);
	desc_40[3].type = (EIF_TYPE_INDEX) (225);
	desc_40[3].gen_type = NULL;
	desc_40[4].body_index = (BODY_INDEX) (3);
	desc_40[4].offset = (BODY_INDEX) (-1);
	desc_40[4].type = (EIF_TYPE_INDEX) (225);
	desc_40[4].gen_type = NULL;
	desc_40[5].body_index = (BODY_INDEX) (4);
	desc_40[5].offset = (BODY_INDEX) (-1);
	desc_40[5].type = (EIF_TYPE_INDEX) (225);
	desc_40[5].gen_type = NULL;
	desc_40[6].body_index = (BODY_INDEX) (5);
	desc_40[6].offset = (BODY_INDEX) (-1);
	desc_40[6].type = (EIF_TYPE_INDEX) (225);
	desc_40[6].gen_type = NULL;
	desc_40[7].body_index = (BODY_INDEX) (6);
	desc_40[7].offset = (BODY_INDEX) (-1);
	desc_40[7].type = (EIF_TYPE_INDEX) (225);
	desc_40[7].gen_type = NULL;
	desc_40[8].body_index = (BODY_INDEX) (7);
	desc_40[8].offset = (BODY_INDEX) (-1);
	desc_40[8].type = (EIF_TYPE_INDEX) (225);
	desc_40[8].gen_type = NULL;
	desc_40[9].body_index = (BODY_INDEX) (8);
	desc_40[9].offset = (BODY_INDEX) (-1);
	desc_40[9].type = (EIF_TYPE_INDEX) (225);
	desc_40[9].gen_type = NULL;
	desc_40[10].body_index = (BODY_INDEX) (9);
	desc_40[10].offset = (BODY_INDEX) (-1);
	desc_40[10].type = (EIF_TYPE_INDEX) (225);
	desc_40[10].gen_type = NULL;
	desc_40[11].body_index = (BODY_INDEX) (10);
	desc_40[11].offset = (BODY_INDEX) (-1);
	desc_40[11].type = (EIF_TYPE_INDEX) (39);
	desc_40[11].gen_type =  gen_type2_40;
	desc_40[12].body_index = (BODY_INDEX) (11);
	desc_40[12].offset = (BODY_INDEX) (-1);
	desc_40[12].type = (EIF_TYPE_INDEX) (-1);
	desc_40[12].gen_type = NULL;
	desc_40[13].body_index = (BODY_INDEX) (12);
	desc_40[13].offset = (BODY_INDEX) (-1);
	desc_40[13].type = (EIF_TYPE_INDEX) (-1);
	desc_40[13].gen_type = NULL;
	desc_40[14].body_index = (BODY_INDEX) (13);
	desc_40[14].offset = (BODY_INDEX) (-1);
	desc_40[14].type = (EIF_TYPE_INDEX) (0);
	desc_40[14].gen_type =  gen_type3_40;
	desc_40[15].body_index = (BODY_INDEX) (14);
	desc_40[15].offset = (BODY_INDEX) (-1);
	desc_40[15].type = (EIF_TYPE_INDEX) (0);
	desc_40[15].gen_type =  gen_type4_40;
	desc_40[16].body_index = (BODY_INDEX) (15);
	desc_40[16].offset = (BODY_INDEX) (-1);
	desc_40[16].type = (EIF_TYPE_INDEX) (39);
	desc_40[16].gen_type =  gen_type5_40;
	desc_40[17].body_index = (BODY_INDEX) (16);
	desc_40[17].offset = (BODY_INDEX) (-1);
	desc_40[17].type = (EIF_TYPE_INDEX) (39);
	desc_40[17].gen_type =  gen_type6_40;
	desc_40[18].body_index = (BODY_INDEX) (17);
	desc_40[18].offset = (BODY_INDEX) (-1);
	desc_40[18].type = (EIF_TYPE_INDEX) (0);
	desc_40[18].gen_type =  gen_type7_40;
	desc_40[19].body_index = (BODY_INDEX) (18);
	desc_40[19].offset = (BODY_INDEX) (-1);
	desc_40[19].type = (EIF_TYPE_INDEX) (-1);
	desc_40[19].gen_type = NULL;
	desc_40[20].body_index = (BODY_INDEX) (19);
	desc_40[20].offset = (BODY_INDEX) (-1);
	desc_40[20].type = (EIF_TYPE_INDEX) (-1);
	desc_40[20].gen_type = NULL;
	desc_40[21].body_index = (BODY_INDEX) (20);
	desc_40[21].offset = (BODY_INDEX) (-1);
	desc_40[21].type = (EIF_TYPE_INDEX) (18);
	desc_40[21].gen_type =  gen_type8_40;
	desc_40[22].body_index = (BODY_INDEX) (21);
	desc_40[22].offset = (BODY_INDEX) (-1);
	desc_40[22].type = (EIF_TYPE_INDEX) (257);
	desc_40[22].gen_type =  gen_type9_40;
	desc_40[23].body_index = (BODY_INDEX) (22);
	desc_40[23].offset = (BODY_INDEX) (-1);
	desc_40[23].type = (EIF_TYPE_INDEX) (257);
	desc_40[23].gen_type =  gen_type10_40;
	desc_40[24].body_index = (BODY_INDEX) (23);
	desc_40[24].offset = (BODY_INDEX) (-1);
	desc_40[24].type = (EIF_TYPE_INDEX) (-1);
	desc_40[24].gen_type = NULL;
	desc_40[25].body_index = (BODY_INDEX) (24);
	desc_40[25].offset = (BODY_INDEX) (-1);
	desc_40[25].type = (EIF_TYPE_INDEX) (38);
	desc_40[25].gen_type =  gen_type11_40;
	desc_40[26].body_index = (BODY_INDEX) (25);
	desc_40[26].offset = (BODY_INDEX) (-1);
	desc_40[26].type = (EIF_TYPE_INDEX) (-1);
	desc_40[26].gen_type = NULL;
	desc_40[27].body_index = (BODY_INDEX) (26);
	desc_40[27].offset = (BODY_INDEX) (-1);
	desc_40[27].type = (EIF_TYPE_INDEX) (-1);
	desc_40[27].gen_type = NULL;
	desc_40[28].body_index = (BODY_INDEX) (27);
	desc_40[28].offset = (BODY_INDEX) (-1);
	desc_40[28].type = (EIF_TYPE_INDEX) (-1);
	desc_40[28].gen_type = NULL;
	desc_40[29].body_index = (BODY_INDEX) (28);
	desc_40[29].offset = (BODY_INDEX) (-1);
	desc_40[29].type = (EIF_TYPE_INDEX) (39);
	desc_40[29].gen_type = NULL;
	desc_40[30].body_index = (BODY_INDEX) (29);
	desc_40[30].offset = (BODY_INDEX) (-1);
	desc_40[30].type = (EIF_TYPE_INDEX) (252);
	desc_40[30].gen_type = NULL;
	desc_40[31].body_index = (BODY_INDEX) (30);
	desc_40[31].offset = (BODY_INDEX) (-1);
	desc_40[31].type = (EIF_TYPE_INDEX) (39);
	desc_40[31].gen_type =  gen_type12_40;
	desc_40[32].body_index = (BODY_INDEX) (713);
	desc_40[32].offset = (BODY_INDEX) (-1);
	desc_40[32].type = (EIF_TYPE_INDEX) (-1);
	desc_40[32].gen_type = NULL;
	desc_40[33].body_index = (BODY_INDEX) (714);
	desc_40[33].offset = (BODY_INDEX) (8);
	desc_40[33].type = (EIF_TYPE_INDEX) (225);
	desc_40[33].gen_type = NULL;
	desc_40[34].body_index = (BODY_INDEX) (715);
	desc_40[34].offset = (BODY_INDEX) (-1);
	desc_40[34].type = (EIF_TYPE_INDEX) (-1);
	desc_40[34].gen_type = NULL;
	desc_40[35].body_index = (BODY_INDEX) (716);
	desc_40[35].offset = (BODY_INDEX) (-1);
	desc_40[35].type = (EIF_TYPE_INDEX) (-1);
	desc_40[35].gen_type = NULL;
	desc_40[36].body_index = (BODY_INDEX) (717);
	desc_40[36].offset = (BODY_INDEX) (12);
	desc_40[36].type = (EIF_TYPE_INDEX) (246);
	desc_40[36].gen_type = NULL;
	desc_40[37].body_index = (BODY_INDEX) (718);
	desc_40[37].offset = (BODY_INDEX) (-1);
	desc_40[37].type = (EIF_TYPE_INDEX) (-1);
	desc_40[37].gen_type = NULL;
	desc_40[38].body_index = (BODY_INDEX) (719);
	desc_40[38].offset = (BODY_INDEX) (-1);
	desc_40[38].type = (EIF_TYPE_INDEX) (-1);
	desc_40[38].gen_type = NULL;
	desc_40[39].body_index = (BODY_INDEX) (720);
	desc_40[39].offset = (BODY_INDEX) (-1);
	desc_40[39].type = (EIF_TYPE_INDEX) (225);
	desc_40[39].gen_type = NULL;
	desc_40[40].body_index = (BODY_INDEX) (721);
	desc_40[40].offset = (BODY_INDEX) (-1);
	desc_40[40].type = (EIF_TYPE_INDEX) (-1);
	desc_40[40].gen_type = NULL;
	desc_40[41].body_index = (BODY_INDEX) (722);
	desc_40[41].offset = (BODY_INDEX) (-1);
	desc_40[41].type = (EIF_TYPE_INDEX) (-1);
	desc_40[41].gen_type = NULL;
	desc_40[42].body_index = (BODY_INDEX) (723);
	desc_40[42].offset = (BODY_INDEX) (-1);
	desc_40[42].type = (EIF_TYPE_INDEX) (225);
	desc_40[42].gen_type = NULL;
	desc_40[43].body_index = (BODY_INDEX) (724);
	desc_40[43].offset = (BODY_INDEX) (0);
	desc_40[43].type = (EIF_TYPE_INDEX) (300);
	desc_40[43].gen_type =  gen_type13_40;
	desc_40[44].body_index = (BODY_INDEX) (725);
	desc_40[44].offset = (BODY_INDEX) (-1);
	desc_40[44].type = (EIF_TYPE_INDEX) (-1);
	desc_40[44].gen_type = NULL;
	desc_40[45].body_index = (BODY_INDEX) (726);
	desc_40[45].offset = (BODY_INDEX) (-1);
	desc_40[45].type = (EIF_TYPE_INDEX) (-1);
	desc_40[45].gen_type = NULL;
	desc_40[46].body_index = (BODY_INDEX) (727);
	desc_40[46].offset = (BODY_INDEX) (-1);
	desc_40[46].type = (EIF_TYPE_INDEX) (225);
	desc_40[46].gen_type = NULL;
}

extern void Init40(void);
void Init40(void)
{
	if (desc_fill != 0)
		build_desc_40();
	IDSC(desc_40, 0, 39);
	IDSC(desc_40 + 1, 1, 39);
	IDSC(desc_40 + 32, 61, 39);
}


#ifdef __cplusplus
}
#endif
