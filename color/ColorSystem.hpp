#pragma once
#include <cstdint>
#include <string>
#include <array>

namespace color_as {

	using Str = const char* const;

	//系統色名ー＞基本色名
	enum StdType :uint_fast8_t {
		std_R, std_YR, std_Y, std_YG, std_G, std_BG,
		std_B, std_PB, std_P, std_RP, std_Wt, std_Gy, std_Bk,
		StdTypeNum
	};
	//系統色名ー＞基本色名
	constexpr std::array<Str, StdTypeNum> std_type_name{
		u8"R",u8"YR",u8"Y",u8"YG",u8"G",u8"BG",u8"B",u8"PB",u8"P",u8"RP",u8"Wt",u8"Gy",u8"Bk"
	};
	constexpr std::array<Str, StdTypeNum> std_type_name_jp{
	u8"赤",u8"黄赤",u8"黄",u8"黄緑",u8"緑",u8"青緑",u8"青",u8"青紫",u8"紫",u8"赤紫",u8"白",u8"灰色",u8"黒"
	};

	enum ModType {
		std_vv, std_lt, std_st, std_dp, std_pl,
		std_sf, std_dl, std_dk, std_vp, std_lg,
		std_mg, std_dg, std_vd, std_v_pl, std_v_lt,
		std_v_md, std_v_dk, std_v_false,
		ModTypeNum
	};
	constexpr std::array<Str, ModTypeNum> mod_type_name{
		u8"あざやかな",u8"明るい",u8"つよい",u8"こい",u8"うすい",
		u8"やわらかい",u8"くすんだ",u8"暗い",u8"ごくうすい",u8"明るい灰みの",
		u8"灰みの",u8"暗い灰みの",u8"ごく暗い",u8"うすい",u8"明るい",
		u8"中位の",u8"暗い",u8""
	};

	enum ModColor {
		true_r,true_y,true_g,true_b,true_p,
		false_r,false_y_r,false_yr,false_r_y,false_y,
		false_g_y,false_yg,false_g,false_bg,false_b,
		false_pb,false_p,false_rp,false_p_r,false_false,
		ModColorNum
	};
	constexpr std::array<Str, ModColorNum> mod_color_name{
		u8"r",u8"y",u8"g",u8"b",u8"p",
		u8"r",u8"y・r",u8"yr",u8"r・y",u8"y",
		u8"g・y",u8"yg",u8"g",u8"bg",u8"b",
		u8"pb",u8"p",u8"rp",u8"p・r",u8"",
	};
	constexpr std::array<Str, ModColorNum> mod_color_name_jp{
		//有彩色
		u8"赤",u8"黄",u8"緑",u8"青",u8"紫",
		//無彩色
		u8"赤みの",u8"黄みを帯びた赤みの",u8"黄赤みの",u8"赤みを帯びた黄みの",u8"黄みの",
		u8"緑みを帯びた黄みの",u8"黄緑みの",u8"緑みの",u8"青緑みの",u8"青みの",
		u8"青紫みの",u8"紫みの",u8"赤紫みの",u8"紫みを帯びた赤みの",u8"",
	};

	//系統色名
	struct SystemColor {
	private:
		const uint_fast8_t tone;
		const uint_fast8_t mod;
		const uint_fast8_t color;

	public:
		//コンストラクタ
		constexpr SystemColor(const uint_fast8_t t_, const uint_fast8_t m_, const uint_fast8_t c_)
			:tone(t_), mod(m_), color(c_) {}

		void output(std::string& str_) const {
			str_.clear();
			switch (color)
			{
				//無彩色
			case std_Wt:case std_Gy:case std_Bk:
				str_ += mod_color_name_jp[mod];
				str_ += mod_type_name[tone];
				break;

				//有彩色
			default:
				str_ += mod_type_name[tone];
				str_ += mod_color_name_jp[mod];
				if (mod >= 5) break;
				switch (tone)
				{
					//"みの"系
				case std_lg:case std_mg:case std_dg:
					str_ += u8"みを帯びた";
					break;
				default:
					str_ += u8"みの";
					break;
				}
				break;
			}
			str_ += std_type_name_jp[color];
		}



	};

	enum HVC_Type :uint_fast8_t {
		hvc_R, hvc_YR, hvc_Y, hvc_GY, hvc_G, hvc_BG,
		hvc_B, hvc_PB, hvc_P, hvc_RP, hvc_Wt, hvc_Gy, hvc_Bk,
		HVC_TypeNum
	};

	class RGB_Color {
	private:
		uint_fast8_t red{};
		uint_fast8_t green{};
		uint_fast8_t blue{};

	public:
		//コンストラクタ
		constexpr RGB_Color(const uint_fast8_t r_, const uint_fast8_t g_, const uint_fast8_t b_)
			:red(r_), green(g_), blue(b_) {}
		//出力
		uint_fast8_t r() const { return this->red; }
		uint_fast8_t g() const { return this->green; }
		uint_fast8_t b() const { return this->blue; }

		int_fast32_t int32Up() const {
			int_fast32_t num;
			num = (int_fast32_t)red << 24;
			num += (int_fast32_t)green << 16;
			num += (int_fast32_t)blue << 8;
			return num;
		}
		int_fast32_t int32Down() const {
			int_fast32_t num;
			num = (int_fast32_t)red << 16;
			num += (int_fast32_t)green << 8;
			num += (int_fast32_t)blue;
			return num;
		}

		//加算
		RGB_Color operator+(RGB_Color rgb_) const {
			int add_color;
			add_color = (int)rgb_.red + (int)this->red;
			rgb_.red = (add_color > 0xff) ? (uint_fast8_t)255 : (uint_fast8_t)add_color;
			add_color = (int)rgb_.green + (int)this->green;
			rgb_.green = (add_color > 0xff) ? (uint_fast8_t)255 : (uint_fast8_t)add_color;
			add_color = (int)rgb_.blue + (int)this->blue;
			rgb_.blue = (add_color > 0xff) ? (uint_fast8_t)255 : (uint_fast8_t)add_color;
			return rgb_;
		}
	};

	struct HVC {
		const float h;
		const uint_fast8_t type;
		const float v;
		const float c;

		constexpr HVC(const float h_, const uint_fast8_t type_, const float v_, const float c_)
			:h(h_), type(type_), v(v_), c(c_) {}
	};


	//(主に慣用色に使用)色彩データ
	class ColorData {
	public:
		//名前
		Str name_kanji;
		//ふりがな/ローマ字
		Str name_furigana;
		const SystemColor sc;
		const HVC hvc;
		const RGB_Color rgb;

		constexpr ColorData(Str kanji_, Str furigana_, const SystemColor& type_, const HVC& hvc_, const RGB_Color& rgb_)
			:name_kanji(kanji_), name_furigana(furigana_), sc(type_), hvc(hvc_), rgb(rgb_) {}
	};



}