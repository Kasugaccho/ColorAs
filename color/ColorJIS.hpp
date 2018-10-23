#pragma once
#include "ColorSystem.hpp"

namespace color_as {

	//JIS���p�F�f�[�^
	constexpr ColorData sakura_iro_(u8"���F", u8"�����炢��", { std_vp,true_p,std_R }, { 10,hvc_RP, 9,2.5 }, { 251,218,222 });
	constexpr ColorData kou_bai_iro_(u8"�g�~�F", u8"�����΂�����", { std_sf,false_false,std_R }, { 2.5,hvc_R, 6.5,7.5 }, { 223,130,138 });
	constexpr ColorData sango_iro_(u8"�X��F", u8"���񂲂���", { std_lt,false_false,std_R }, { 2.5,hvc_R, 7,11 }, { 255,127,143 });
	constexpr ColorData akane_iro_(u8"���F", u8"�����˂���", { std_dp,false_false,std_R }, { 4,hvc_R, 3.5,11 }, { 158,34,54 });
	constexpr ColorData si_xyu_iro_(u8"��F", u8"���ア��", { std_vv,true_y,std_R }, { 6,hvc_R, 5.5,14 }, { 239,69,74 });
	constexpr ColorData renga_iro_(u8"�����F", u8"��񂪂���", { std_dk,false_false,std_YR }, { 10,hvc_R, 4,7 }, { 145,76,53 });
	constexpr ColorData kuri_iro_(u8"�I�F", u8"���肢��", { std_dg,false_false,std_YR }, { 2,hvc_YR, 3.5,4 }, { 112,75,56 });
	constexpr ColorData yamabuki_iro_(u8"�R���F", u8"��܂Ԃ�����", { std_vv,true_r,std_Y }, { 10,hvc_YR, 7.5,13 }, { 248,169,0 });
	constexpr ColorData o_udo_iro_(u8"���y�F", u8"�����ǂ���", { std_dl,true_r,std_Y }, { 10,hvc_YR, 6,7.5 }, { 184,136,59 });
	constexpr ColorData karasi_iro_(u8"�H�q�F", u8"���炵����", { std_sf,false_false,std_Y }, { 3,hvc_Y, 7,6 }, { 200,166,93 });
	constexpr ColorData uguisu_iro_(u8"��F", u8"������������", { std_dl,false_false,std_YG }, { 1,hvc_GY, 4.5,3.5 }, { 106,95,55 });
	constexpr ColorData moegi_(u8"�G��", u8"������", { std_st,false_false,std_YG }, { 4,hvc_GY, 6.5,9 }, { 151,166,30 });
	constexpr ColorData waka_take_iro_(u8"��|�F", u8"�킩��������", { std_st,false_false,std_G }, { 6,hvc_G, 6,7.5 }, { 0,163,126 });
	constexpr ColorData seizi_iro_(u8"���F", u8"����������", { std_sf,true_b,std_G }, { 7.5,hvc_G, 6.5,4 }, { 109,168,149 });
	constexpr ColorData asagi_iro_(u8"��K�F", u8"����������", { std_vv,true_g,std_B }, { 2.5,hvc_B, 5,8 }, { 0,133,155 });
	constexpr ColorData sora_iro_(u8"��F", u8"���炢��", { std_lt,false_false,std_B }, { 9,hvc_B, 7.5,5.5 }, { 137,189,222 });
	constexpr ColorData ai_iro_(u8"���F", u8"��������", { std_dk,false_false,std_B }, { 2,hvc_PB, 3,5 }, { 43,75,101 });
	constexpr ColorData ruri_iro_(u8"�ڗ��F", u8"��肢��", { std_dp,true_p,std_B }, { 6,hvc_PB, 3.5,11 }, { 0,81,154 });
	constexpr ColorData gun_zi_xyo_u_iro_(u8"�Q�F", u8"���񂶂傤����", { std_dp,true_p,std_B }, { 7.5,hvc_PB, 3.5,11 }, { 56,77,152 });
	constexpr ColorData kikyou_iro_(u8"�j�[�F", u8"�����傤����", { std_dp,false_false,std_PB }, { 9,hvc_PB, 3.5,13 }, { 67,71,162 });
	constexpr ColorData na_suko_n_(u8"�֎q��", u8"�Ȃ�����", { std_vd,false_false,std_P }, { 7.5,hvc_P, 2.5,2.5 }, { 71,57,70 });
	constexpr ColorData ayame_iro_(u8"�Ҋ��F", u8"����߂���", { std_lt,true_r,std_P }, { 10,hvc_P, 6,10 }, { 197,115,178 });
	constexpr ColorData botan_iro_(u8"���O�F", u8"�ڂ��񂢂�", { std_vv,false_false,std_RP }, { 3,hvc_RP, 5,14 }, { 201,64,147 });
	constexpr ColorData kinari_iro_(u8"������F", u8"���Ȃ肢��", { std_v_false,false_r_y,std_Wt }, { 10,hvc_YR, 9,1 }, { 234,224,213 });
	constexpr ColorData wine_red(u8"���C�����b�h", u8"wine red", { std_dp,true_p,std_R }, { 10,hvc_RP, 3,9 }, { 128,39,63 });
	constexpr ColorData bordeaux(u8"�{���h�[", u8"bordeaux", { std_vd,false_false,std_R }, { 2.5,hvc_R, 2.5,3 }, { 83,54,56 });
	constexpr ColorData carmine(u8"�J�[�}�C��", u8"carmine", { std_vv,false_false,std_R }, { 4,hvc_R, 4,14 }, { 190,0,57 });
	constexpr ColorData vermilion(u8"�o�[�~���I��", u8"vermilion", { std_vv,true_y,std_R }, { 6,hvc_R, 5.5,14 }, { 239,69,74 });
	constexpr ColorData scarlet(u8"�X�J�[���b�g", u8"scarlet", { std_vv,true_y,std_R }, { 7,hvc_R, 5,14 }, { 222,56,56 });
	constexpr ColorData salmon_pink(u8"�T�[�����s���N", u8"salmon pink", { std_sf,true_y,std_R }, { 8,hvc_R, 7.5,7.5 }, { 255,158,140 });
	constexpr ColorData chocolate(u8"�`���R���[�g", u8"chocolate", { std_vd,false_false,std_YR }, { 10,hvc_R, 2.5,2.5 }, { 80,56,48 });
	constexpr ColorData piach(u8"�s�[�`", u8"piach", { std_lg,false_false,std_YR }, { 3,hvc_YR, 8,3.5 }, { 232,189,165 });
	constexpr ColorData marigold(u8"�}���[�S�[���h", u8"marigold", { std_vv,true_r,std_Y }, { 8,hvc_YR, 7.5,13 }, { 255,164,0 });
	constexpr ColorData beige(u8"�x�[�W��", u8"beige", { std_lg,true_r,std_Y }, { 10,hvc_YR, 7,2.5 }, { 188,167,141 });//r
	constexpr ColorData sepia(u8"�Z�s�A", u8"sepia", { std_vd,true_r,std_Y }, { 10,hvc_YR, 2.5,2 }, { 72,60,44 });
	constexpr ColorData khaki(u8"�J�[�L�[", u8"khaki", { std_dl,true_r,std_Y }, { 1,hvc_Y, 5,5.5 }, { 146,114,58 });
	constexpr ColorData blond(u8"�u�����h", u8"blond", { std_sf,false_false,std_Y }, { 2,hvc_Y, 7.5,7 }, { 246,165,125 });
	constexpr ColorData cream_yellow(u8"�N���[���C�G���[", u8"cream yellow", { std_vp,false_false,std_Y }, { 5,hvc_Y, 8.5,3.5 }, { 228,211,162 });
	constexpr ColorData canary(u8"�J�i����", u8"canary", { std_lt,true_g,std_Y }, { 7,hvc_Y, 8.5,10 }, { 237,214,52 });
	constexpr ColorData olive(u8"�I���[�u", u8"olive", { std_dk,true_g,std_Y }, { 7.5,hvc_Y, 3.5,4 }, { 92,84,36 });
	constexpr ColorData lemon_yellow(u8"�������C�G���[", u8"lemon yellow", { std_vv,true_g,std_Y }, { 8,hvc_Y, 8,12 }, { 217,202,0 });
	constexpr ColorData olive_green(u8"�I���[�u�O���[��", u8"olive green", { std_dg,false_false,std_YG }, { 2.5,hvc_GY, 3.5,3 }, { 87,85,49 });
	constexpr ColorData cobalt_green(u8"�R�o���g�O���[��", u8"cobalt green", { std_lt,false_false,std_G }, { 4,hvc_G, 7,9 }, { 9,194,137 });
	constexpr ColorData emerald_green(u8"�G�������h�O���[��", u8"emerald green", { std_st,false_false,std_G }, { 4,hvc_G, 6,8 }, { 0,164,116 });
	constexpr ColorData viridian(u8"�r���W�A��", u8"viridian", { std_dl,true_b,std_G }, { 8,hvc_G, 4,6 }, { 0,109,86 });
	constexpr ColorData turquoise_blue(u8"�^�[�R�C�Y�u���[", u8"turquoise blue", { std_lt,true_g,std_B }, { 5,hvc_B, 6,8 }, { 0,157,191 });
	constexpr ColorData marine_blue(u8"�}�����u���[", u8"marine blue", { std_dp,true_g,std_B }, { 5,hvc_B, 3,7 }, { 0,82,107 });
	constexpr ColorData cyan(u8"�V�A��", u8"cyan", { std_lt,false_false,std_B }, { 7.5,hvc_B, 6,10 }, { 0,156,209 });
	constexpr ColorData sky_blue(u8"�X�J�C�u���[", u8"sky blue", { std_lt,false_false,std_B }, { 9,hvc_B, 7.5,5.5 }, { 137,189,222 });
	constexpr ColorData baby_blue(u8"�x�r�[�u���[", u8"baby blue", { std_lg,false_false,std_B }, { 10,hvc_B, 7.5,3 }, { 163,186,205 });
	constexpr ColorData cobalt_blue(u8"�R�o���g�u���[", u8"cobalt blue", { std_vv,false_false,std_B }, { 3,hvc_PB, 4,10 }, { 0,98,160 });
	constexpr ColorData navy_blue(u8"�l�[�r�[�u���[", u8"navy blue", { std_dk,true_p,std_B }, { 6,hvc_PB, 2.5,4 }, { 52,61,85 });
	constexpr ColorData ultramarine_blue(u8"�E���g���}�����u���[", u8"ultramarine blue", { std_dp,true_p,std_B }, { 7.5,hvc_PB, 3.5,11 }, { 56,77,152 });
	constexpr ColorData violet(u8"�o�C�I���b�g", u8"violet", { std_vv,false_false,std_PB }, { 2.5,hvc_P, 4,11 }, { 113,76,153 });
	constexpr ColorData lavender(u8"���x���_�[", u8"lavender", { std_mg,true_b,std_P }, { 5,hvc_P, 6,3 }, { 154,138,159 });//b
	constexpr ColorData mauve(u8"���[�u", u8"mauve", { std_st,true_b,std_P }, { 5,hvc_P, 4.5,9 }, { 133,88,150 });
	constexpr ColorData purple(u8"�p�[�v��", u8"purple", { std_vv,false_false,std_P }, { 7.5,hvc_P, 5,12 }, { 167,87,168 });
	constexpr ColorData magenta(u8"�}�[���^", u8"magenta", { std_vv,false_false,std_RP }, { 5,hvc_RP, 5,14 }, { 209,58,132 });
	constexpr ColorData ivory(u8"�A�C�{���[", u8"ivory", { std_v_pl,true_y,std_Gy }, { 2.5,hvc_Y, 8.5,1.5 }, { 222,210,191 });
	constexpr ColorData silver_grey(u8"�V���o�[�O���C", u8"silver grey", { std_lt,false_false,std_Gy }, { 0,hvc_Gy,6.5,0 }, { 156,156,156 });
	constexpr ColorData charcoal_grey(u8"�`���R�[���O���C", u8"charcoal grey", { std_v_dk,true_p,std_Gy }, { 5,hvc_P, 3,1 }, { 75,71,77 });
	constexpr ColorData toki_iro(u8"���F", u8"�Ƃ�����", { std_lt,true_p,std_R }, { 7,hvc_RP, 7.5,8 }, { 250,156,184 });
	constexpr ColorData kara_kure_nai(u8"�؍g��", u8"���炭��Ȃ�", { std_vv,false_false,std_R }, { 1.5,hvc_R, 5.5,13 }, { 230,75,107 });
	constexpr ColorData suou(u8"�h�F", u8"������", { std_dl,false_false,std_R }, { 4,hvc_R, 4,7 }, { 148,71,75 });
	constexpr ColorData tobi_iro(u8"�ΐF", u8"�Ƃт���", { std_dk,true_y,std_R }, { 7.5,hvc_R, 3.5,5 }, { 122,69,61 });
	constexpr ColorData bengara_iro(u8"�ٕ��F", u8"�ׂ񂪂炢��", { std_dk,true_y,std_R }, { 8,hvc_R, 3.5,7 }, { 134,62,51 });
	constexpr ColorData ebi_tya(u8"�C�V��", u8"���т���", { std_dk,true_y,std_R }, { 8,hvc_R, 3,4.5 }, { 105,60,52 });
	constexpr ColorData ou_ni(u8"���O", u8"������", { std_st,false_false,std_YR }, { 10,hvc_R, 6,12 }, { 235,105,64 });
	constexpr ColorData hiwada_iro(u8"�O��F", u8"�Ђ킾����", { std_dg,false_false,std_YR }, { 1,hvc_YR, 4.3f,4 }, { 134,92,75 });
	constexpr ColorData tai_si_xya(u8"����", u8"��������", { std_dl,false_false,std_YR }, { 2.5,hvc_YR, 5,8.5 }, { 178,98,53 });
	constexpr ColorData kouzi_iro(u8"���q�F", u8"����������", { std_lt,false_false,std_YR }, { 5.5,hvc_YR, 7.5,9 }, { 250,165,92 });
	constexpr ColorData kohaku_iro(u8"���ߐF", u8"���͂�����", { std_dl,true_r,std_Y }, { 8,hvc_YR, 5.5,6.5 }, { 170,122,64 });
	constexpr ColorData kuti_ba_iro(u8"���t�F", u8"�����΂���", { std_mg,true_r,std_Y }, { 10,hvc_YR, 5,2 }, { 115,84,54 });//r
	constexpr ColorData ukon_iro(u8"�T���F", u8"�����񂢂�", { std_st,false_false,std_Y }, { 2,hvc_Y, 7.5,12 }, { 237,174,0 });
	constexpr ColorData kari_yasu_iro(u8"�����F", u8"����₷����", { std_pl,true_g,std_Y }, { 7,hvc_Y, 8.5,7 }, { 234,213,107 });
	constexpr ColorData kihada_iro(u8"���A�F", u8"���͂�����", { std_lt,false_false,std_YR }, { 9,hvc_Y, 8,8 }, { 247,255,77 });
	constexpr ColorData miru_iro(u8"�C���F", u8"�݂邢��", { std_dg,false_false,std_YG }, { 9.5,hvc_Y, 4.5,2.5 }, { 77,77,38 });
	constexpr ColorData hiwa_iro(u8"�S�F", u8"�Ђ킢��", { std_st,false_false,std_YG }, { 1,hvc_GY, 7.5,8 }, { 194,189,61 });
	constexpr ColorData toki_wairo(u8"��ՐF", u8"�Ƃ��킢��", { std_dp,false_false,std_G }, { 3,hvc_G, 4.5,7 }, { 0,123,80 });
	constexpr ColorData roku_syou_iro(u8"�ΐF", u8"�낭���傤����", { std_dl,false_false,std_G }, { 4,hvc_G, 5,4 }, { 77,129,105 });
	constexpr ColorData tetu_iro(u8"�S�F", u8"�Ă���", { std_vd,false_false,std_BG }, { 2.5,hvc_BG, 2.5,2.5 }, { 36,67,62 });
	constexpr ColorData sin_ba_si_iro(u8"�V���F", u8"����΂�����", { std_lt,true_g,std_B }, { 2.5,hvc_B, 6.5,5.5 }, { 83,168,183 });
	constexpr ColorData nando_iro(u8"�[�ːF", u8"�Ȃ�ǂ���", { std_st,true_g,std_B }, { 4,hvc_B, 4,6 }, { 0,104,124 });
	constexpr ColorData kame_nozoki(u8"�r�`", u8"���߂̂���", { std_sf,true_g,std_B }, { 4.5,hvc_B, 7,4 }, { 126,177,193 });
	constexpr ColorData hana_da_iro(u8"�|�F", u8"�͂Ȃ�����", { std_st,false_false,std_B }, { 3,hvc_PB, 4,7.5 }, { 43,97,143 });
	constexpr ColorData huzi_iro(u8"���F", u8"�ӂ�����", { std_lt,false_false,std_PB }, { 10,hvc_PB, 6.5,6.5 }, { 162,148,200 });
	constexpr ColorData edo_murasaki(u8"�]�ˎ�", u8"���ǂނ炳��", { std_dp,true_b,std_P }, { 3,hvc_P, 3.5,7 }, { 97,72,118 });
	constexpr ColorData ko_dai_murasaki(u8"�Ñ㎇", u8"�������ނ炳��", { std_dl,false_false,std_P }, { 7.5,hvc_P, 4,6 }, { 118,82,118 });
	constexpr ColorData gin_ne_zu(u8"��l", u8"����˂�", { std_lt,false_false,std_Gy }, { 0,hvc_Gy,6.5,0 }, { 156,156,156 });
	constexpr ColorData tya_nezumi(u8"���l", u8"����˂���", { std_v_false,false_yr,std_Gy }, { 5,hvc_YR, 6,1 }, { 153,141,134 });
	constexpr ColorData rikyuu_nezumi(u8"���x�l", u8"�肫�イ�˂���", { std_v_false,true_g,std_Gy }, { 2.5,hvc_G, 5,1 }, { 110,121,114 });
	constexpr ColorData susutake_iro(u8"���|�F", u8"������������", { std_v_dk,false_r_y,std_Gy }, { 9.5,hvc_YR, 3.5,1.5 }, { 93,82,69 });
	constexpr ColorData old_rose(u8"�I�[���h���[�Y", u8"old rose", { std_sf,false_false,std_R }, { 1,hvc_R, 6,6.5 }, { 198,122,133 });
	constexpr ColorData poppy_red(u8"�|�s�[���b�h", u8"poppy red", { std_vv,false_false,std_R }, { 4,hvc_R, 5,14 }, { 223,51,78 });
	constexpr ColorData maroon(u8"�}���[��", u8"maroon", { std_dk,false_false,std_R }, { 5,hvc_R, 2.5,6 }, { 102,43,44 });
	constexpr ColorData terracotta(u8"�e���R�b�^", u8"terracotta", { std_dl,true_y,std_R }, { 7.5,hvc_R, 4.5,8 }, { 169,80,69 });
	constexpr ColorData chinese_red(u8"�`���C�j�[�Y���b�h", u8"chinese red", { std_vv,false_false,std_YR }, { 10,hvc_R, 6,15 }, { 253,90,42 });
	constexpr ColorData burnt_sienna(u8"�o�[���g�V�F���i", u8"burnt sienna", { std_dl,false_false,std_YR }, { 10,hvc_R, 4.5,7.5 }, { 162,85,60 });
	constexpr ColorData raw_sienna(u8"���[�V�F���i", u8"raw sienna", { std_st,false_false,std_YR }, { 4,hvc_YR, 5,9 }, { 177,99,42 });
	constexpr ColorData tan(u8"�^��", u8"tan", { std_dl,false_false,std_YR }, { 6,hvc_YR, 5,6 }, { 158,108,63 });
	constexpr ColorData ecru_beige(u8"�G�N���x�C�W��", u8"ecru beige", { std_pl,true_r,std_Y }, { 7.5,hvc_YR, 8.5,4 }, { 245,205,166 });
	constexpr ColorData golden_yellow(u8"�S�[���f���C�G���[", u8"golden yellow", { std_st,true_r,std_Y }, { 7.5,hvc_YR, 7,10 }, { 232,154,60 });
	constexpr ColorData amber(u8"�A���o�[", u8"amber", { std_dl,true_r,std_Y }, { 8,hvc_YR, 5.5,6.5 }, { 170,122,64 });
	constexpr ColorData burnt_umber(u8"�o�[���g�A���o�[", u8"burnt umber", { std_vd,true_r,std_Y }, { 10,hvc_YR, 3,3 }, { 87,70,45 });
	constexpr ColorData Naples_yellow(u8"�l�[�v���X�C�G���[", u8"Naples yellow", { std_st,false_false,std_Y }, { 2.5,hvc_Y, 8,7.5 }, { 238,192,99 });
	constexpr ColorData raw_umber(u8"���[�A���o�[", u8"raw umber", { std_dk,false_false,std_Y }, { 2.5,hvc_Y, 4,6 }, { 118,91,27 });
	constexpr ColorData jaune_brillant(u8"�W�����u���A��", u8"jaune brillant", { std_vv,false_false,std_Y }, { 5,hvc_Y, 8.5,14 }, { 244,213,0 });
	constexpr ColorData chartreuse_green(u8"�V���g���[�Y�O���[��", u8"chartreuse green", { std_lt,false_false,std_YG }, { 4,hvc_GY, 8,10 }, { 192,209,54 });
	constexpr ColorData leaf_green(u8"���[�t�O���[��", u8"leaf green", { std_st,false_false,std_YG }, { 5,hvc_GY, 6,7 }, { 137,152,59 });
	constexpr ColorData grass_green(u8"�O���X�O���[��", u8"grass green", { std_dl,false_false,std_YG }, { 5,hvc_GY, 5,5 }, { 115,124,62 });
	constexpr ColorData apple_green(u8"�A�b�v���O���[��", u8"apple green", { std_sf,true_y,std_G }, { 10,hvc_GY, 8,5 }, { 162,210,158 });
	constexpr ColorData mint_green(u8"�~���g�O���[��", u8"mint green", { std_lt,false_false,std_G }, { 2.5,hvc_G, 7.5,8 }, { 88,206,145 });
	constexpr ColorData malachite_green(u8"�}���J�C�g�O���[��", u8"malachite green", { std_dp,false_false,std_G }, { 4,hvc_G, 4.5,9 }, { 0,126,78 });
	constexpr ColorData bottle_green(u8"�{�g���O���[��", u8"bottle green", { std_vd,false_false,std_G }, { 5,hvc_G, 2.5,3 }, { 32,69,55 });
	constexpr ColorData piacock_green(u8"�s�[�R�b�N�O���[��", u8"piacock green", { std_vv,false_false,std_BG }, { 7.5,hvc_BG, 4.5,9 }, { 0,125,127 });
	constexpr ColorData Nile_blue(u8"�i�C���u���[", u8"Nile blue", { std_dl,false_false,std_BG }, { 10,hvc_BG, 5.5,5 }, { 61,142,149 });
	constexpr ColorData cerulean_blue(u8"�Z�����A���u���[", u8"cerulean blue", { std_vv,false_false,std_B }, { 9,hvc_B, 4.5,9 }, { 0,115,162 });
	constexpr ColorData midnight_blue(u8"�~�b�h�i�C�g�u���[", u8"midnight blue", { std_vd,true_p,std_B }, { 5,hvc_PB, 1.5,2 }, { 37,42,53 });
	constexpr ColorData wistaria(u8"�E�C�X�^���A", u8"wistaria", { std_vv,false_false,std_PB }, { 10,hvc_PB, 5,12 }, { 121,103,195 });
	constexpr ColorData lilac(u8"���C���b�N", u8"lilac", { std_sf,false_false,std_P }, { 6,hvc_P, 7,6 }, { 194,157,200 });
	constexpr ColorData slate_grey(u8"�X���[�g�O���C", u8"slate grey", { std_dk,false_false,std_Gy }, { 2.5,hvc_PB, 3.5,0.5 }, { 81,83,86 });
	constexpr ColorData lamp_black(u8"�����v�u���b�N", u8"lamp black", { std_v_false,false_false,std_Bk }, { 0,hvc_Gy,1,0 }, { 33,33,33 });

	constexpr size_t jis_color_all_num = 122;
	using ColorDataArray = std::array<const ColorData* const, jis_color_all_num>;

	//JIS���p�F�f�[�^�܂Ƃ�
	constexpr ColorDataArray color_data{
	&sakura_iro_,
	&kou_bai_iro_,
	&sango_iro_,
	&akane_iro_,
	&si_xyu_iro_,
	&renga_iro_,
	&kuri_iro_,
	&yamabuki_iro_,
	&o_udo_iro_,
	&karasi_iro_,
	&uguisu_iro_,
	&moegi_,
	&waka_take_iro_,
	&seizi_iro_,
	&asagi_iro_,
	&sora_iro_,
	&ai_iro_,
	&ruri_iro_,
	&gun_zi_xyo_u_iro_,
	&kikyou_iro_,
	&na_suko_n_,
	&ayame_iro_,
	&botan_iro_,
	&kinari_iro_,
	&wine_red,
	&bordeaux,
	&carmine,
	&vermilion,
	&scarlet,
	&salmon_pink,
	&chocolate,
	&piach,
	&marigold,
	&beige,
	&sepia,
	&khaki,
	&blond,
	&cream_yellow,
	&canary,
	&olive,
	&lemon_yellow,
	&olive_green,
	&cobalt_green,
	&emerald_green,
	&viridian,
	&turquoise_blue,
	&marine_blue,
	&cyan,
	&sky_blue,
	&baby_blue,
	&cobalt_blue,
	&navy_blue,
	&ultramarine_blue,
	&violet,
	&lavender,
	&mauve,
	&purple,
	&magenta,
	&ivory,
	&silver_grey,
	&charcoal_grey,
	&toki_iro,
	&kara_kure_nai,
	&suou,
	&tobi_iro,
	&bengara_iro,
	&ebi_tya,
	&ou_ni,
	&hiwada_iro,
	&tai_si_xya,
	&kouzi_iro,
	&kohaku_iro,
	&kuti_ba_iro,
	&ukon_iro,
	&kari_yasu_iro,
	&kihada_iro,
	&miru_iro,
	&hiwa_iro,
	&toki_wairo,
	&roku_syou_iro,
	&tetu_iro,
	&sin_ba_si_iro,
	&nando_iro,
	&kame_nozoki,
	&hana_da_iro,
	&huzi_iro,
	&edo_murasaki,
	&ko_dai_murasaki,
	&gin_ne_zu,
	&tya_nezumi,
	&rikyuu_nezumi,
	&susutake_iro,
	&old_rose,
	&poppy_red,
	&maroon,
	&terracotta,
	&chinese_red,
	&burnt_sienna,
	&raw_sienna,
	&tan,
	&ecru_beige,
	&golden_yellow,
	&amber,
	&burnt_umber,
	&Naples_yellow,
	&raw_umber,
	&jaune_brillant,
	&chartreuse_green,
	&leaf_green,
	&grass_green,
	&apple_green,
	&mint_green,
	&malachite_green,
	&bottle_green,
	&piacock_green,
	&Nile_blue,
	&cerulean_blue,
	&midnight_blue,
	&wistaria,
	&lilac,
	&slate_grey,
	&lamp_black
	};
}