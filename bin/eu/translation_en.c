// Android fix

#include "macros.h"

#include "game/ingame_menu.h"

#include "make_const_nonconst.h"

// Include text/define_text.inc.c, preprocessed with -I text/us/ to get the
// right translation strings, with symbols renamed as below.
#define seg2_course_name_table course_name_table_eu_en
#define seg2_course_name_table_original course_name_table_eu_en_original
#define seg2_act_name_table act_name_table_eu_en
#define seg2_act_name_table_original act_name_table_eu_en_original
#define seg2_dialog_table dialog_table_eu_en
#define seg2_dialog_original dialog_table_eu_en_original

#include "text/us/define_text.inc.c"
