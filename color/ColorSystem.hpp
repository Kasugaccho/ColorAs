//////////-//////////-//////////-//////////-//////////
//                    Color-System                      //
//                                                        //
//             Ascll Project - Color Library             //
//                                                        //
//                   Made by Gaccho.                   //
//////////-//////////-//////////-//////////-//////////

#ifndef ASCLL_PROJECT_COLOR_LIBRARY_COLOR_SYSTEM
#define ASCLL_PROJECT_COLOR_LIBRARY_COLOR_SYSTEM

namespace color {

	using ccc = const char* const;

	//�n���F���[����{�F��
	enum StdType :uint_fast8_t {
		std_R, std_YR, std_Y, std_YG, std_G, std_BG,
		std_B, std_PB, std_P, std_RP, std_Wt, std_Gy, std_Bk,
		StdTypeNum
	};

	//�n���F���[����{�F��
	using StdTypeArray = std::array<ccc, StdTypeNum>;
	constexpr StdTypeArray std_type_name{
		u8"R",u8"YR",u8"Y",u8"YG",u8"G",u8"BG",u8"B",u8"PB",u8"P",u8"RP",u8"Wt",u8"Gy",u8"Bk"
	};
	constexpr StdTypeArray std_type_name_jp{
	u8"��",u8"����",u8"��",u8"����",u8"��",u8"��",u8"��",u8"��",u8"��",u8"�Ԏ�",u8"��",u8"�D�F",u8"��"
	};

	enum ModType {
		std_vv, std_lt, std_st, std_dp, std_pl,
		std_sf, std_dl, std_dk, std_vp, std_lg,
		std_mg, std_dg, std_vd, std_v_pl, std_v_lt,
		std_v_md, std_v_dk, std_v_false,
		ModTypeNum
	};
	using ModTypeArray = std::array<ccc, ModTypeNum>;
	constexpr ModTypeArray mod_type_name_jp{
		u8"�����₩��",u8"���邢",u8"�悢",u8"����",u8"������",
		u8"���炩��",u8"������",u8"�Â�",u8"����������",u8"���邢�D�݂�",
		u8"�D�݂�",u8"�Â��D�݂�",u8"�����Â�",u8"������",u8"���邢",
		u8"���ʂ�",u8"�Â�",u8""
	};

	enum ModColor {
		true_r,true_y,true_g,true_b,true_p,
		false_r,false_y_r,false_yr,false_r_y,false_y,
		false_g_y,false_yg,false_g,false_bg,false_b,
		false_pb,false_p,false_rp,false_p_r,false_false,
		ModColorNum
	};
	using ModColorArray = std::array<ccc, ModColorNum>;
	constexpr ModColorArray mod_color_name{
		u8"r",u8"y",u8"g",u8"b",u8"p",
		u8"r",u8"y�Er",u8"yr",u8"r�Ey",u8"y",
		u8"g�Ey",u8"yg",u8"g",u8"bg",u8"b",
		u8"pb",u8"p",u8"rp",u8"p�Er",u8"",
	};
	constexpr ModColorArray mod_color_name_jp{
		//�L�ʐF
		u8"��",u8"��",u8"��",u8"��",u8"��",
		//���ʐF
		u8"�Ԃ݂�",u8"���݂�тт��Ԃ݂�",u8"���Ԃ݂�",u8"�Ԃ݂�тт����݂�",u8"���݂�",
		u8"�΂݂�тт����݂�",u8"���΂݂�",u8"�΂݂�",u8"�΂݂�",u8"�݂�",
		u8"���݂�",u8"���݂�",u8"�Ԏ��݂�",u8"���݂�тт��Ԃ݂�",u8"",
	};

	//�n���F��
	struct SystemColor {
	private:
		const uint_fast8_t tone;
		const uint_fast8_t mod;
		const uint_fast8_t color;

	public:
		//�R���X�g���N�^
		constexpr SystemColor(const uint_fast8_t t_, const uint_fast8_t m_, const uint_fast8_t c_)
			:tone(t_), mod(m_), color(c_) {}

		void output(std::string& str_) const {
			str_.clear();
			switch (color)
			{
				//���ʐF
			case std_Wt:case std_Gy:case std_Bk:
				str_ += mod_color_name_jp[mod];
				str_ += mod_type_name_jp[tone];
				break;

				//�L�ʐF
			default:
				str_ += mod_type_name_jp[tone];
				str_ += mod_color_name_jp[mod];
				if (mod >= 5) break;
				switch (tone)
				{
					//"�݂�"�n
				case std_lg:case std_mg:case std_dg:
					str_ += u8"�݂�тт�";
					break;
				default:
					str_ += u8"�݂�";
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
		uint_fast8_t alpha{};

	public:
		//�R���X�g���N�^
		constexpr RGB_Color(const uint_fast8_t r_, const uint_fast8_t g_, const uint_fast8_t b_, const uint_fast8_t a_ = 0xff)
			:red(r_), green(g_), blue(b_), alpha(a_) {}
		RGB_Color() = default;

		//�o��
		uint_fast8_t r() const { return this->red; }
		uint_fast8_t g() const { return this->green; }
		uint_fast8_t b() const { return this->blue; }
		uint_fast8_t a() const { return this->alpha; }

		int_fast32_t int32Up() const {
			int_fast32_t num;
			num = (int_fast32_t)red << 24;
			num += (int_fast32_t)green << 16;
			num += (int_fast32_t)blue << 8;
			num += (int_fast32_t)alpha;
			return num;
		}
		int_fast32_t int32Down() const {
			int_fast32_t num;
			num = (int_fast32_t)alpha << 24;
			num += (int_fast32_t)red << 16;
			num += (int_fast32_t)green << 8;
			num += (int_fast32_t)blue;
			return num;
		}

		//���Z
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


	//(��Ɋ��p�F�Ɏg�p)�F�ʃf�[�^
	class ColorData {
	public:
		//���O
		ccc name_kanji;
		//�ӂ肪��/���[�}��
		ccc name_furigana;
		const SystemColor sc;
		const HVC hvc;
		const RGB_Color rgb;

		constexpr ColorData(ccc kanji_, ccc furigana_, const SystemColor& type_, const HVC& hvc_, const RGB_Color& rgb_)
			:name_kanji(kanji_), name_furigana(furigana_), sc(type_), hvc(hvc_), rgb(rgb_) {}
	};



}

#endif