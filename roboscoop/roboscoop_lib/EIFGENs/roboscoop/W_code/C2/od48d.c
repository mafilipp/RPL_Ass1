/*
 * Class ODOMETRY_MSG
 */

#include "eif_macros.h"
#include "eif_wbench.h"

#ifdef __cplusplus
extern "C" {
#endif


static void build_desc_48(void);
static EIF_TYPE_INDEX gen_type0_48 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type1_48 [] = {0xFF11,274,0xFF12,47,0xFFFF};
static EIF_TYPE_INDEX gen_type2_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type3_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type6_48 [] = {0xFF11,47,0xFFFF};
static EIF_TYPE_INDEX gen_type7_48 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_48 [] = {0xFF11,18,0xFFFF};
static EIF_TYPE_INDEX gen_type9_48 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type10_48 [] = {0xFF11,257,0xFFFF};
static EIF_TYPE_INDEX gen_type11_48 [] = {0xFF11,38,0xFFFF};
static EIF_TYPE_INDEX gen_type12_48 [] = {0xFF11,47,0xFFFF};


static struct desc_info desc_48[54];

static void build_desc_48(void) {
	desc_48[0].body_index = (BODY_INDEX) (-1);
	desc_48[0].offset = (BODY_INDEX) (-1);
	desc_48[0].type = INVALID_DTYPE;
	desc_48[0].gen_type = NULL;
	desc_48[1].body_index = (BODY_INDEX) (0);
	desc_48[1].offset = (BODY_INDEX) (-1);
	desc_48[1].type = (EIF_TYPE_INDEX) (257);
	desc_48[1].gen_type =  gen_type0_48;
	desc_48[2].body_index = (BODY_INDEX) (1);
	desc_48[2].offset = (BODY_INDEX) (-1);
	desc_48[2].type = (EIF_TYPE_INDEX) (274);
	desc_48[2].gen_type =  gen_type1_48;
	desc_48[3].body_index = (BODY_INDEX) (2);
	desc_48[3].offset = (BODY_INDEX) (-1);
	desc_48[3].type = (EIF_TYPE_INDEX) (225);
	desc_48[3].gen_type = NULL;
	desc_48[4].body_index = (BODY_INDEX) (3);
	desc_48[4].offset = (BODY_INDEX) (-1);
	desc_48[4].type = (EIF_TYPE_INDEX) (225);
	desc_48[4].gen_type = NULL;
	desc_48[5].body_index = (BODY_INDEX) (4);
	desc_48[5].offset = (BODY_INDEX) (-1);
	desc_48[5].type = (EIF_TYPE_INDEX) (225);
	desc_48[5].gen_type = NULL;
	desc_48[6].body_index = (BODY_INDEX) (5);
	desc_48[6].offset = (BODY_INDEX) (-1);
	desc_48[6].type = (EIF_TYPE_INDEX) (225);
	desc_48[6].gen_type = NULL;
	desc_48[7].body_index = (BODY_INDEX) (6);
	desc_48[7].offset = (BODY_INDEX) (-1);
	desc_48[7].type = (EIF_TYPE_INDEX) (225);
	desc_48[7].gen_type = NULL;
	desc_48[8].body_index = (BODY_INDEX) (7);
	desc_48[8].offset = (BODY_INDEX) (-1);
	desc_48[8].type = (EIF_TYPE_INDEX) (225);
	desc_48[8].gen_type = NULL;
	desc_48[9].body_index = (BODY_INDEX) (8);
	desc_48[9].offset = (BODY_INDEX) (-1);
	desc_48[9].type = (EIF_TYPE_INDEX) (225);
	desc_48[9].gen_type = NULL;
	desc_48[10].body_index = (BODY_INDEX) (9);
	desc_48[10].offset = (BODY_INDEX) (-1);
	desc_48[10].type = (EIF_TYPE_INDEX) (225);
	desc_48[10].gen_type = NULL;
	desc_48[11].body_index = (BODY_INDEX) (10);
	desc_48[11].offset = (BODY_INDEX) (-1);
	desc_48[11].type = (EIF_TYPE_INDEX) (47);
	desc_48[11].gen_type =  gen_type2_48;
	desc_48[12].body_index = (BODY_INDEX) (11);
	desc_48[12].offset = (BODY_INDEX) (-1);
	desc_48[12].type = (EIF_TYPE_INDEX) (-1);
	desc_48[12].gen_type = NULL;
	desc_48[13].body_index = (BODY_INDEX) (12);
	desc_48[13].offset = (BODY_INDEX) (-1);
	desc_48[13].type = (EIF_TYPE_INDEX) (-1);
	desc_48[13].gen_type = NULL;
	desc_48[14].body_index = (BODY_INDEX) (13);
	desc_48[14].offset = (BODY_INDEX) (-1);
	desc_48[14].type = (EIF_TYPE_INDEX) (0);
	desc_48[14].gen_type =  gen_type3_48;
	desc_48[15].body_index = (BODY_INDEX) (14);
	desc_48[15].offset = (BODY_INDEX) (-1);
	desc_48[15].type = (EIF_TYPE_INDEX) (0);
	desc_48[15].gen_type =  gen_type4_48;
	desc_48[16].body_index = (BODY_INDEX) (15);
	desc_48[16].offset = (BODY_INDEX) (-1);
	desc_48[16].type = (EIF_TYPE_INDEX) (47);
	desc_48[16].gen_type =  gen_type5_48;
	desc_48[17].body_index = (BODY_INDEX) (16);
	desc_48[17].offset = (BODY_INDEX) (-1);
	desc_48[17].type = (EIF_TYPE_INDEX) (47);
	desc_48[17].gen_type =  gen_type6_48;
	desc_48[18].body_index = (BODY_INDEX) (17);
	desc_48[18].offset = (BODY_INDEX) (-1);
	desc_48[18].type = (EIF_TYPE_INDEX) (0);
	desc_48[18].gen_type =  gen_type7_48;
	desc_48[19].body_index = (BODY_INDEX) (18);
	desc_48[19].offset = (BODY_INDEX) (-1);
	desc_48[19].type = (EIF_TYPE_INDEX) (-1);
	desc_48[19].gen_type = NULL;
	desc_48[20].body_index = (BODY_INDEX) (19);
	desc_48[20].offset = (BODY_INDEX) (-1);
	desc_48[20].type = (EIF_TYPE_INDEX) (-1);
	desc_48[20].gen_type = NULL;
	desc_48[21].body_index = (BODY_INDEX) (20);
	desc_48[21].offset = (BODY_INDEX) (-1);
	desc_48[21].type = (EIF_TYPE_INDEX) (18);
	desc_48[21].gen_type =  gen_type8_48;
	desc_48[22].body_index = (BODY_INDEX) (21);
	desc_48[22].offset = (BODY_INDEX) (-1);
	desc_48[22].type = (EIF_TYPE_INDEX) (257);
	desc_48[22].gen_type =  gen_type9_48;
	desc_48[23].body_index = (BODY_INDEX) (22);
	desc_48[23].offset = (BODY_INDEX) (-1);
	desc_48[23].type = (EIF_TYPE_INDEX) (257);
	desc_48[23].gen_type =  gen_type10_48;
	desc_48[24].body_index = (BODY_INDEX) (23);
	desc_48[24].offset = (BODY_INDEX) (-1);
	desc_48[24].type = (EIF_TYPE_INDEX) (-1);
	desc_48[24].gen_type = NULL;
	desc_48[25].body_index = (BODY_INDEX) (24);
	desc_48[25].offset = (BODY_INDEX) (-1);
	desc_48[25].type = (EIF_TYPE_INDEX) (38);
	desc_48[25].gen_type =  gen_type11_48;
	desc_48[26].body_index = (BODY_INDEX) (25);
	desc_48[26].offset = (BODY_INDEX) (-1);
	desc_48[26].type = (EIF_TYPE_INDEX) (-1);
	desc_48[26].gen_type = NULL;
	desc_48[27].body_index = (BODY_INDEX) (26);
	desc_48[27].offset = (BODY_INDEX) (-1);
	desc_48[27].type = (EIF_TYPE_INDEX) (-1);
	desc_48[27].gen_type = NULL;
	desc_48[28].body_index = (BODY_INDEX) (27);
	desc_48[28].offset = (BODY_INDEX) (-1);
	desc_48[28].type = (EIF_TYPE_INDEX) (-1);
	desc_48[28].gen_type = NULL;
	desc_48[29].body_index = (BODY_INDEX) (28);
	desc_48[29].offset = (BODY_INDEX) (-1);
	desc_48[29].type = (EIF_TYPE_INDEX) (47);
	desc_48[29].gen_type = NULL;
	desc_48[30].body_index = (BODY_INDEX) (29);
	desc_48[30].offset = (BODY_INDEX) (-1);
	desc_48[30].type = (EIF_TYPE_INDEX) (252);
	desc_48[30].gen_type = NULL;
	desc_48[31].body_index = (BODY_INDEX) (30);
	desc_48[31].offset = (BODY_INDEX) (-1);
	desc_48[31].type = (EIF_TYPE_INDEX) (47);
	desc_48[31].gen_type =  gen_type12_48;
	desc_48[32].body_index = (BODY_INDEX) (915);
	desc_48[32].offset = (BODY_INDEX) (-1);
	desc_48[32].type = (EIF_TYPE_INDEX) (-1);
	desc_48[32].gen_type = NULL;
	desc_48[33].body_index = (BODY_INDEX) (954);
	desc_48[33].offset = (BODY_INDEX) (-1);
	desc_48[33].type = (EIF_TYPE_INDEX) (-1);
	desc_48[33].gen_type = NULL;
	desc_48[34].body_index = (BODY_INDEX) (916);
	desc_48[34].offset = (BODY_INDEX) (-1);
	desc_48[34].type = (EIF_TYPE_INDEX) (-1);
	desc_48[34].gen_type = NULL;
	desc_48[35].body_index = (BODY_INDEX) (963);
	desc_48[35].offset = (BODY_INDEX) (-1);
	desc_48[35].type = (EIF_TYPE_INDEX) (-1);
	desc_48[35].gen_type = NULL;
	desc_48[36].body_index = (BODY_INDEX) (953);
	desc_48[36].offset = (BODY_INDEX) (-1);
	desc_48[36].type = (EIF_TYPE_INDEX) (-1);
	desc_48[36].gen_type = NULL;
	desc_48[37].body_index = (BODY_INDEX) (961);
	desc_48[37].offset = (BODY_INDEX) (-1);
	desc_48[37].type = (EIF_TYPE_INDEX) (-1);
	desc_48[37].gen_type = NULL;
	desc_48[38].body_index = (BODY_INDEX) (917);
	desc_48[38].offset = (BODY_INDEX) (-1);
	desc_48[38].type = (EIF_TYPE_INDEX) (228);
	desc_48[38].gen_type = NULL;
	desc_48[39].body_index = (BODY_INDEX) (964);
	desc_48[39].offset = (BODY_INDEX) (-1);
	desc_48[39].type = (EIF_TYPE_INDEX) (-1);
	desc_48[39].gen_type = NULL;
	desc_48[40].body_index = (BODY_INDEX) (965);
	desc_48[40].offset = (BODY_INDEX) (-1);
	desc_48[40].type = (EIF_TYPE_INDEX) (-1);
	desc_48[40].gen_type = NULL;
	desc_48[41].body_index = (BODY_INDEX) (947);
	desc_48[41].offset = (BODY_INDEX) (0);
	desc_48[41].type = (EIF_TYPE_INDEX) (228);
	desc_48[41].gen_type = NULL;
	desc_48[42].body_index = (BODY_INDEX) (948);
	desc_48[42].offset = (BODY_INDEX) (8);
	desc_48[42].type = (EIF_TYPE_INDEX) (228);
	desc_48[42].gen_type = NULL;
	desc_48[43].body_index = (BODY_INDEX) (949);
	desc_48[43].offset = (BODY_INDEX) (16);
	desc_48[43].type = (EIF_TYPE_INDEX) (228);
	desc_48[43].gen_type = NULL;
	desc_48[44].body_index = (BODY_INDEX) (950);
	desc_48[44].offset = (BODY_INDEX) (24);
	desc_48[44].type = (EIF_TYPE_INDEX) (228);
	desc_48[44].gen_type = NULL;
	desc_48[45].body_index = (BODY_INDEX) (951);
	desc_48[45].offset = (BODY_INDEX) (32);
	desc_48[45].type = (EIF_TYPE_INDEX) (228);
	desc_48[45].gen_type = NULL;
	desc_48[46].body_index = (BODY_INDEX) (952);
	desc_48[46].offset = (BODY_INDEX) (40);
	desc_48[46].type = (EIF_TYPE_INDEX) (228);
	desc_48[46].gen_type = NULL;
	desc_48[47].body_index = (BODY_INDEX) (955);
	desc_48[47].offset = (BODY_INDEX) (-1);
	desc_48[47].type = (EIF_TYPE_INDEX) (228);
	desc_48[47].gen_type = NULL;
	desc_48[48].body_index = (BODY_INDEX) (956);
	desc_48[48].offset = (BODY_INDEX) (-1);
	desc_48[48].type = (EIF_TYPE_INDEX) (228);
	desc_48[48].gen_type = NULL;
	desc_48[49].body_index = (BODY_INDEX) (957);
	desc_48[49].offset = (BODY_INDEX) (-1);
	desc_48[49].type = (EIF_TYPE_INDEX) (228);
	desc_48[49].gen_type = NULL;
	desc_48[50].body_index = (BODY_INDEX) (958);
	desc_48[50].offset = (BODY_INDEX) (-1);
	desc_48[50].type = (EIF_TYPE_INDEX) (228);
	desc_48[50].gen_type = NULL;
	desc_48[51].body_index = (BODY_INDEX) (959);
	desc_48[51].offset = (BODY_INDEX) (-1);
	desc_48[51].type = (EIF_TYPE_INDEX) (228);
	desc_48[51].gen_type = NULL;
	desc_48[52].body_index = (BODY_INDEX) (960);
	desc_48[52].offset = (BODY_INDEX) (-1);
	desc_48[52].type = (EIF_TYPE_INDEX) (228);
	desc_48[52].gen_type = NULL;
	desc_48[53].body_index = (BODY_INDEX) (962);
	desc_48[53].offset = (BODY_INDEX) (-1);
	desc_48[53].type = (EIF_TYPE_INDEX) (-1);
	desc_48[53].gen_type = NULL;
}

extern void Init48(void);
void Init48(void)
{
	if (desc_fill != 0)
		build_desc_48();
	IDSC(desc_48, 0, 47);
	IDSC(desc_48 + 1, 1, 47);
	IDSC(desc_48 + 32, 32, 47);
	IDSC(desc_48 + 39, 292, 47);
	IDSC(desc_48 + 40, 223, 47);
}


#ifdef __cplusplus
}
#endif
