#pragma once
#include "ColorSystem.hpp"

namespace color_as {

	//JIS慣用色データ
	constexpr ColorData sakura_iro_(u8"桜色", u8"さくらいろ", { std_vp,true_p,std_R }, { 10,hvc_RP, 9,2.5 }, { 251,218,222 });
	constexpr ColorData kou_bai_iro_(u8"紅梅色", u8"こうばいいろ", { std_sf,false_false,std_R }, { 2.5,hvc_R, 6.5,7.5 }, { 223,130,138 });
	constexpr ColorData sango_iro_(u8"珊瑚色", u8"さんごいろ", { std_lt,false_false,std_R }, { 2.5,hvc_R, 7,11 }, { 255,127,143 });
	constexpr ColorData akane_iro_(u8"茜色", u8"あかねいろ", { std_dp,false_false,std_R }, { 4,hvc_R, 3.5,11 }, { 158,34,54 });
	constexpr ColorData si_xyu_iro_(u8"朱色", u8"しゅいろ", { std_vv,true_y,std_R }, { 6,hvc_R, 5.5,14 }, { 239,69,74 });
	constexpr ColorData renga_iro_(u8"煉瓦色", u8"れんがいろ", { std_dk,false_false,std_YR }, { 10,hvc_R, 4,7 }, { 145,76,53 });
	constexpr ColorData kuri_iro_(u8"栗色", u8"くりいろ", { std_dg,false_false,std_YR }, { 2,hvc_YR, 3.5,4 }, { 112,75,56 });
	constexpr ColorData yamabuki_iro_(u8"山吹色", u8"やまぶきいろ", { std_vv,true_r,std_Y }, { 10,hvc_YR, 7.5,13 }, { 248,169,0 });
	constexpr ColorData o_udo_iro_(u8"黄土色", u8"おうどいろ", { std_dl,true_r,std_Y }, { 10,hvc_YR, 6,7.5 }, { 184,136,59 });
	constexpr ColorData karasi_iro_(u8"芥子色", u8"からしいろ", { std_sf,false_false,std_Y }, { 3,hvc_Y, 7,6 }, { 200,166,93 });
	constexpr ColorData uguisu_iro_(u8"鶯色", u8"うぐいすいろ", { std_dl,false_false,std_YG }, { 1,hvc_GY, 4.5,3.5 }, { 106,95,55 });
	constexpr ColorData moegi_(u8"萌黄", u8"もえぎ", { std_st,false_false,std_YG }, { 4,hvc_GY, 6.5,9 }, { 151,166,30 });
	constexpr ColorData waka_take_iro_(u8"若竹色", u8"わかたけいろ", { std_st,false_false,std_G }, { 6,hvc_G, 6,7.5 }, { 0,163,126 });
	constexpr ColorData seizi_iro_(u8"青磁色", u8"せいじいろ", { std_sf,true_b,std_G }, { 7.5,hvc_G, 6.5,4 }, { 109,168,149 });
	constexpr ColorData asagi_iro_(u8"浅葱色", u8"あさぎいろ", { std_vv,true_g,std_B }, { 2.5,hvc_B, 5,8 }, { 0,133,155 });
	constexpr ColorData sora_iro_(u8"空色", u8"そらいろ", { std_lt,false_false,std_B }, { 9,hvc_B, 7.5,5.5 }, { 137,189,222 });
	constexpr ColorData ai_iro_(u8"藍色", u8"あいいろ", { std_dk,false_false,std_B }, { 2,hvc_PB, 3,5 }, { 43,75,101 });
	constexpr ColorData ruri_iro_(u8"瑠璃色", u8"るりいろ", { std_dp,true_p,std_B }, { 6,hvc_PB, 3.5,11 }, { 0,81,154 });
	constexpr ColorData gun_zi_xyo_u_iro_(u8"群青色", u8"ぐんじょういろ", { std_dp,true_p,std_B }, { 7.5,hvc_PB, 3.5,11 }, { 56,77,152 });
	constexpr ColorData kikyou_iro_(u8"桔梗色", u8"ききょういろ", { std_dp,false_false,std_PB }, { 9,hvc_PB, 3.5,13 }, { 67,71,162 });
	constexpr ColorData na_suko_n_(u8"茄子紺", u8"なすこん", { std_vd,false_false,std_P }, { 7.5,hvc_P, 2.5,2.5 }, { 71,57,70 });
	constexpr ColorData ayame_iro_(u8"菖蒲色", u8"あやめいろ", { std_lt,true_r,std_P }, { 10,hvc_P, 6,10 }, { 197,115,178 });
	constexpr ColorData botan_iro_(u8"牡丹色", u8"ぼたんいろ", { std_vv,false_false,std_RP }, { 3,hvc_RP, 5,14 }, { 201,64,147 });
	constexpr ColorData kinari_iro_(u8"生成り色", u8"きなりいろ", { std_v_false,false_r_y,std_Wt }, { 10,hvc_YR, 9,1 }, { 234,224,213 });
	constexpr ColorData wine_red(u8"ワインレッド", u8"wine red", { std_dp,true_p,std_R }, { 10,hvc_RP, 3,9 }, { 128,39,63 });
	constexpr ColorData bordeaux(u8"ボルドー", u8"bordeaux", { std_vd,false_false,std_R }, { 2.5,hvc_R, 2.5,3 }, { 83,54,56 });
	constexpr ColorData carmine(u8"カーマイン", u8"carmine", { std_vv,false_false,std_R }, { 4,hvc_R, 4,14 }, { 190,0,57 });
	constexpr ColorData vermilion(u8"バーミリオン", u8"vermilion", { std_vv,true_y,std_R }, { 6,hvc_R, 5.5,14 }, { 239,69,74 });
	constexpr ColorData scarlet(u8"スカーレット", u8"scarlet", { std_vv,true_y,std_R }, { 7,hvc_R, 5,14 }, { 222,56,56 });
	constexpr ColorData salmon_pink(u8"サーモンピンク", u8"salmon pink", { std_sf,true_y,std_R }, { 8,hvc_R, 7.5,7.5 }, { 255,158,140 });
	constexpr ColorData chocolate(u8"チョコレート", u8"chocolate", { std_vd,false_false,std_YR }, { 10,hvc_R, 2.5,2.5 }, { 80,56,48 });
	constexpr ColorData piach(u8"ピーチ", u8"piach", { std_lg,false_false,std_YR }, { 3,hvc_YR, 8,3.5 }, { 232,189,165 });
	constexpr ColorData marigold(u8"マリーゴールド", u8"marigold", { std_vv,true_r,std_Y }, { 8,hvc_YR, 7.5,13 }, { 255,164,0 });
	constexpr ColorData beige(u8"ベージュ", u8"beige", { std_lg,true_r,std_Y }, { 10,hvc_YR, 7,2.5 }, { 188,167,141 });//r
	constexpr ColorData sepia(u8"セピア", u8"sepia", { std_vd,true_r,std_Y }, { 10,hvc_YR, 2.5,2 }, { 72,60,44 });
	constexpr ColorData khaki(u8"カーキー", u8"khaki", { std_dl,true_r,std_Y }, { 1,hvc_Y, 5,5.5 }, { 146,114,58 });
	constexpr ColorData blond(u8"ブロンド", u8"blond", { std_sf,false_false,std_Y }, { 2,hvc_Y, 7.5,7 }, { 246,165,125 });
	constexpr ColorData cream_yellow(u8"クリームイエロー", u8"cream yellow", { std_vp,false_false,std_Y }, { 5,hvc_Y, 8.5,3.5 }, { 228,211,162 });
	constexpr ColorData canary(u8"カナリヤ", u8"canary", { std_lt,true_g,std_Y }, { 7,hvc_Y, 8.5,10 }, { 237,214,52 });
	constexpr ColorData olive(u8"オリーブ", u8"olive", { std_dk,true_g,std_Y }, { 7.5,hvc_Y, 3.5,4 }, { 92,84,36 });
	constexpr ColorData lemon_yellow(u8"レモンイエロー", u8"lemon yellow", { std_vv,true_g,std_Y }, { 8,hvc_Y, 8,12 }, { 217,202,0 });
	constexpr ColorData olive_green(u8"オリーブグリーン", u8"olive green", { std_dg,false_false,std_YG }, { 2.5,hvc_GY, 3.5,3 }, { 87,85,49 });
	constexpr ColorData cobalt_green(u8"コバルトグリーン", u8"cobalt green", { std_lt,false_false,std_G }, { 4,hvc_G, 7,9 }, { 9,194,137 });
	constexpr ColorData emerald_green(u8"エメラルドグリーン", u8"emerald green", { std_st,false_false,std_G }, { 4,hvc_G, 6,8 }, { 0,164,116 });
	constexpr ColorData viridian(u8"ビリジアン", u8"viridian", { std_dl,true_b,std_G }, { 8,hvc_G, 4,6 }, { 0,109,86 });
	constexpr ColorData turquoise_blue(u8"ターコイズブルー", u8"turquoise blue", { std_lt,true_g,std_B }, { 5,hvc_B, 6,8 }, { 0,157,191 });
	constexpr ColorData marine_blue(u8"マリンブルー", u8"marine blue", { std_dp,true_g,std_B }, { 5,hvc_B, 3,7 }, { 0,82,107 });
	constexpr ColorData cyan(u8"シアン", u8"cyan", { std_lt,false_false,std_B }, { 7.5,hvc_B, 6,10 }, { 0,156,209 });
	constexpr ColorData sky_blue(u8"スカイブルー", u8"sky blue", { std_lt,false_false,std_B }, { 9,hvc_B, 7.5,5.5 }, { 137,189,222 });
	constexpr ColorData baby_blue(u8"ベビーブルー", u8"baby blue", { std_lg,false_false,std_B }, { 10,hvc_B, 7.5,3 }, { 163,186,205 });
	constexpr ColorData cobalt_blue(u8"コバルトブルー", u8"cobalt blue", { std_vv,false_false,std_B }, { 3,hvc_PB, 4,10 }, { 0,98,160 });
	constexpr ColorData navy_blue(u8"ネービーブルー", u8"navy blue", { std_dk,true_p,std_B }, { 6,hvc_PB, 2.5,4 }, { 52,61,85 });
	constexpr ColorData ultramarine_blue(u8"ウルトラマリンブルー", u8"ultramarine blue", { std_dp,true_p,std_B }, { 7.5,hvc_PB, 3.5,11 }, { 56,77,152 });
	constexpr ColorData violet(u8"バイオレット", u8"violet", { std_vv,false_false,std_PB }, { 2.5,hvc_P, 4,11 }, { 113,76,153 });
	constexpr ColorData lavender(u8"ラベンダー", u8"lavender", { std_mg,true_b,std_P }, { 5,hvc_P, 6,3 }, { 154,138,159 });//b
	constexpr ColorData mauve(u8"モーブ", u8"mauve", { std_st,true_b,std_P }, { 5,hvc_P, 4.5,9 }, { 133,88,150 });
	constexpr ColorData purple(u8"パープル", u8"purple", { std_vv,false_false,std_P }, { 7.5,hvc_P, 5,12 }, { 167,87,168 });
	constexpr ColorData magenta(u8"マゼンタ", u8"magenta", { std_vv,false_false,std_RP }, { 5,hvc_RP, 5,14 }, { 209,58,132 });
	constexpr ColorData ivory(u8"アイボリー", u8"ivory", { std_v_pl,true_y,std_Gy }, { 2.5,hvc_Y, 8.5,1.5 }, { 222,210,191 });
	constexpr ColorData silver_grey(u8"シルバーグレイ", u8"silver grey", { std_lt,false_false,std_Gy }, { 0,hvc_Gy,6.5,0 }, { 156,156,156 });
	constexpr ColorData charcoal_grey(u8"チャコールグレイ", u8"charcoal grey", { std_v_dk,true_p,std_Gy }, { 5,hvc_P, 3,1 }, { 75,71,77 });
	constexpr ColorData toki_iro(u8"鴇色", u8"ときいろ", { std_lt,true_p,std_R }, { 7,hvc_RP, 7.5,8 }, { 250,156,184 });
	constexpr ColorData kara_kure_nai(u8"韓紅花", u8"からくれない", { std_vv,false_false,std_R }, { 1.5,hvc_R, 5.5,13 }, { 230,75,107 });
	constexpr ColorData suou(u8"蘇芳", u8"すおう", { std_dl,false_false,std_R }, { 4,hvc_R, 4,7 }, { 148,71,75 });
	constexpr ColorData tobi_iro(u8"鳶色", u8"とびいろ", { std_dk,true_y,std_R }, { 7.5,hvc_R, 3.5,5 }, { 122,69,61 });
	constexpr ColorData bengara_iro(u8"弁柄色", u8"べんがらいろ", { std_dk,true_y,std_R }, { 8,hvc_R, 3.5,7 }, { 134,62,51 });
	constexpr ColorData ebi_tya(u8"海老茶", u8"えびちゃ", { std_dk,true_y,std_R }, { 8,hvc_R, 3,4.5 }, { 105,60,52 });
	constexpr ColorData ou_ni(u8"黄丹", u8"おうに", { std_st,false_false,std_YR }, { 10,hvc_R, 6,12 }, { 235,105,64 });
	constexpr ColorData hiwada_iro(u8"桧皮色", u8"ひわだいろ", { std_dg,false_false,std_YR }, { 1,hvc_YR, 4.3f,4 }, { 134,92,75 });
	constexpr ColorData tai_si_xya(u8"代赭", u8"たいしゃ", { std_dl,false_false,std_YR }, { 2.5,hvc_YR, 5,8.5 }, { 178,98,53 });
	constexpr ColorData kouzi_iro(u8"柑子色", u8"こうじいろ", { std_lt,false_false,std_YR }, { 5.5,hvc_YR, 7.5,9 }, { 250,165,92 });
	constexpr ColorData kohaku_iro(u8"琥珀色", u8"こはくいろ", { std_dl,true_r,std_Y }, { 8,hvc_YR, 5.5,6.5 }, { 170,122,64 });
	constexpr ColorData kuti_ba_iro(u8"朽葉色", u8"くちばいろ", { std_mg,true_r,std_Y }, { 10,hvc_YR, 5,2 }, { 115,84,54 });//r
	constexpr ColorData ukon_iro(u8"鬱金色", u8"うこんいろ", { std_st,false_false,std_Y }, { 2,hvc_Y, 7.5,12 }, { 237,174,0 });
	constexpr ColorData kari_yasu_iro(u8"刈安色", u8"かりやすいろ", { std_pl,true_g,std_Y }, { 7,hvc_Y, 8.5,7 }, { 234,213,107 });
	constexpr ColorData kihada_iro(u8"黄蘗色", u8"きはだいろ", { std_lt,false_false,std_YR }, { 9,hvc_Y, 8,8 }, { 247,255,77 });
	constexpr ColorData miru_iro(u8"海松色", u8"みるいろ", { std_dg,false_false,std_YG }, { 9.5,hvc_Y, 4.5,2.5 }, { 77,77,38 });
	constexpr ColorData hiwa_iro(u8"鶸色", u8"ひわいろ", { std_st,false_false,std_YG }, { 1,hvc_GY, 7.5,8 }, { 194,189,61 });
	constexpr ColorData toki_wairo(u8"常盤色", u8"ときわいろ", { std_dp,false_false,std_G }, { 3,hvc_G, 4.5,7 }, { 0,123,80 });
	constexpr ColorData roku_syou_iro(u8"緑青色", u8"ろくしょういろ", { std_dl,false_false,std_G }, { 4,hvc_G, 5,4 }, { 77,129,105 });
	constexpr ColorData tetu_iro(u8"鉄色", u8"てついろ", { std_vd,false_false,std_BG }, { 2.5,hvc_BG, 2.5,2.5 }, { 36,67,62 });
	constexpr ColorData sin_ba_si_iro(u8"新橋色", u8"しんばしいろ", { std_lt,true_g,std_B }, { 2.5,hvc_B, 6.5,5.5 }, { 83,168,183 });
	constexpr ColorData nando_iro(u8"納戸色", u8"なんどいろ", { std_st,true_g,std_B }, { 4,hvc_B, 4,6 }, { 0,104,124 });
	constexpr ColorData kame_nozoki(u8"瓶覗", u8"かめのぞき", { std_sf,true_g,std_B }, { 4.5,hvc_B, 7,4 }, { 126,177,193 });
	constexpr ColorData hana_da_iro(u8"縹色", u8"はなだいろ", { std_st,false_false,std_B }, { 3,hvc_PB, 4,7.5 }, { 43,97,143 });
	constexpr ColorData huzi_iro(u8"藤色", u8"ふじいろ", { std_lt,false_false,std_PB }, { 10,hvc_PB, 6.5,6.5 }, { 162,148,200 });
	constexpr ColorData edo_murasaki(u8"江戸紫", u8"えどむらさき", { std_dp,true_b,std_P }, { 3,hvc_P, 3.5,7 }, { 97,72,118 });
	constexpr ColorData ko_dai_murasaki(u8"古代紫", u8"こだいむらさき", { std_dl,false_false,std_P }, { 7.5,hvc_P, 4,6 }, { 118,82,118 });
	constexpr ColorData gin_ne_zu(u8"銀鼠", u8"ぎんねず", { std_lt,false_false,std_Gy }, { 0,hvc_Gy,6.5,0 }, { 156,156,156 });
	constexpr ColorData tya_nezumi(u8"茶鼠", u8"ちゃねずみ", { std_v_false,false_yr,std_Gy }, { 5,hvc_YR, 6,1 }, { 153,141,134 });
	constexpr ColorData rikyuu_nezumi(u8"利休鼠", u8"りきゅうねずみ", { std_v_false,true_g,std_Gy }, { 2.5,hvc_G, 5,1 }, { 110,121,114 });
	constexpr ColorData susutake_iro(u8"煤竹色", u8"すすたけいろ", { std_v_dk,false_r_y,std_Gy }, { 9.5,hvc_YR, 3.5,1.5 }, { 93,82,69 });
	constexpr ColorData old_rose(u8"オールドローズ", u8"old rose", { std_sf,false_false,std_R }, { 1,hvc_R, 6,6.5 }, { 198,122,133 });
	constexpr ColorData poppy_red(u8"ポピーレッド", u8"poppy red", { std_vv,false_false,std_R }, { 4,hvc_R, 5,14 }, { 223,51,78 });
	constexpr ColorData maroon(u8"マルーン", u8"maroon", { std_dk,false_false,std_R }, { 5,hvc_R, 2.5,6 }, { 102,43,44 });
	constexpr ColorData terracotta(u8"テラコッタ", u8"terracotta", { std_dl,true_y,std_R }, { 7.5,hvc_R, 4.5,8 }, { 169,80,69 });
	constexpr ColorData chinese_red(u8"チャイニーズレッド", u8"chinese red", { std_vv,false_false,std_YR }, { 10,hvc_R, 6,15 }, { 253,90,42 });
	constexpr ColorData burnt_sienna(u8"バーントシェンナ", u8"burnt sienna", { std_dl,false_false,std_YR }, { 10,hvc_R, 4.5,7.5 }, { 162,85,60 });
	constexpr ColorData raw_sienna(u8"ローシェンナ", u8"raw sienna", { std_st,false_false,std_YR }, { 4,hvc_YR, 5,9 }, { 177,99,42 });
	constexpr ColorData tan(u8"タン", u8"tan", { std_dl,false_false,std_YR }, { 6,hvc_YR, 5,6 }, { 158,108,63 });
	constexpr ColorData ecru_beige(u8"エクルベイジュ", u8"ecru beige", { std_pl,true_r,std_Y }, { 7.5,hvc_YR, 8.5,4 }, { 245,205,166 });
	constexpr ColorData golden_yellow(u8"ゴールデンイエロー", u8"golden yellow", { std_st,true_r,std_Y }, { 7.5,hvc_YR, 7,10 }, { 232,154,60 });
	constexpr ColorData amber(u8"アンバー", u8"amber", { std_dl,true_r,std_Y }, { 8,hvc_YR, 5.5,6.5 }, { 170,122,64 });
	constexpr ColorData burnt_umber(u8"バーントアンバー", u8"burnt umber", { std_vd,true_r,std_Y }, { 10,hvc_YR, 3,3 }, { 87,70,45 });
	constexpr ColorData Naples_yellow(u8"ネープルスイエロー", u8"Naples yellow", { std_st,false_false,std_Y }, { 2.5,hvc_Y, 8,7.5 }, { 238,192,99 });
	constexpr ColorData raw_umber(u8"ローアンバー", u8"raw umber", { std_dk,false_false,std_Y }, { 2.5,hvc_Y, 4,6 }, { 118,91,27 });
	constexpr ColorData jaune_brillant(u8"ジョンブリアン", u8"jaune brillant", { std_vv,false_false,std_Y }, { 5,hvc_Y, 8.5,14 }, { 244,213,0 });
	constexpr ColorData chartreuse_green(u8"シャトルーズグリーン", u8"chartreuse green", { std_lt,false_false,std_YG }, { 4,hvc_GY, 8,10 }, { 192,209,54 });
	constexpr ColorData leaf_green(u8"リーフグリーン", u8"leaf green", { std_st,false_false,std_YG }, { 5,hvc_GY, 6,7 }, { 137,152,59 });
	constexpr ColorData grass_green(u8"グラスグリーン", u8"grass green", { std_dl,false_false,std_YG }, { 5,hvc_GY, 5,5 }, { 115,124,62 });
	constexpr ColorData apple_green(u8"アップルグリーン", u8"apple green", { std_sf,true_y,std_G }, { 10,hvc_GY, 8,5 }, { 162,210,158 });
	constexpr ColorData mint_green(u8"ミントグリーン", u8"mint green", { std_lt,false_false,std_G }, { 2.5,hvc_G, 7.5,8 }, { 88,206,145 });
	constexpr ColorData malachite_green(u8"マラカイトグリーン", u8"malachite green", { std_dp,false_false,std_G }, { 4,hvc_G, 4.5,9 }, { 0,126,78 });
	constexpr ColorData bottle_green(u8"ボトルグリーン", u8"bottle green", { std_vd,false_false,std_G }, { 5,hvc_G, 2.5,3 }, { 32,69,55 });
	constexpr ColorData piacock_green(u8"ピーコックグリーン", u8"piacock green", { std_vv,false_false,std_BG }, { 7.5,hvc_BG, 4.5,9 }, { 0,125,127 });
	constexpr ColorData Nile_blue(u8"ナイルブルー", u8"Nile blue", { std_dl,false_false,std_BG }, { 10,hvc_BG, 5.5,5 }, { 61,142,149 });
	constexpr ColorData cerulean_blue(u8"セルリアンブルー", u8"cerulean blue", { std_vv,false_false,std_B }, { 9,hvc_B, 4.5,9 }, { 0,115,162 });
	constexpr ColorData midnight_blue(u8"ミッドナイトブルー", u8"midnight blue", { std_vd,true_p,std_B }, { 5,hvc_PB, 1.5,2 }, { 37,42,53 });
	constexpr ColorData wistaria(u8"ウイスタリア", u8"wistaria", { std_vv,false_false,std_PB }, { 10,hvc_PB, 5,12 }, { 121,103,195 });
	constexpr ColorData lilac(u8"ライラック", u8"lilac", { std_sf,false_false,std_P }, { 6,hvc_P, 7,6 }, { 194,157,200 });
	constexpr ColorData slate_grey(u8"スレートグレイ", u8"slate grey", { std_dk,false_false,std_Gy }, { 2.5,hvc_PB, 3.5,0.5 }, { 81,83,86 });
	constexpr ColorData lamp_black(u8"ランプブラック", u8"lamp black", { std_v_false,false_false,std_Bk }, { 0,hvc_Gy,1,0 }, { 33,33,33 });

	constexpr size_t jis_color_all_num = 122;
	using ColorDataArray = std::array<const ColorData* const, jis_color_all_num>;

	//JIS慣用色データまとめ
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