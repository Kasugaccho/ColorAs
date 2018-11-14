//////////-//////////-//////////-//////////-//////////
//                     PCCS -> RGB                      //
//                                                        //
//             Ascll Project - Color Library             //
//                                                        //
//                   Made by Gaccho.                   //
//////////-//////////-//////////-//////////-//////////

#ifndef ASCLL_PROJECT_COLOR_LIBRARY_PCCS_RGB
#define ASCLL_PROJECT_COLOR_LIBRARY_PCCS_RGB

namespace color {
	namespace pccs {

		//vivid
		constexpr std::array<RGB_Color, 24> v24{
			RGB_Color(185, 31, 87), RGB_Color(208, 47, 72), RGB_Color(221, 68, 59), RGB_Color(233, 91, 35), RGB_Color(230, 120, 0), RGB_Color(244, 157, 0),
			RGB_Color(241, 181, 0), RGB_Color(238, 201, 0), RGB_Color(210, 193, 0), RGB_Color(168, 187, 0), RGB_Color(88, 169, 29), RGB_Color(0, 161, 90),
			RGB_Color(0, 146, 110), RGB_Color(0, 133, 127), RGB_Color(0, 116, 136), RGB_Color(0, 112, 155), RGB_Color(0, 96, 156), RGB_Color(0, 91, 165),
			RGB_Color(26, 84, 165), RGB_Color(83, 74, 160), RGB_Color(112, 63, 150), RGB_Color(129, 55, 138), RGB_Color(143, 46, 124), RGB_Color(173, 46, 108)
		};
		constexpr std::array<RGB_Color, 12> v{
			v24[1],v24[3],v24[5],v24[7],v24[9],v24[11],
			v24[13],v24[15],v24[17],v24[19],v24[21],v24[23]
		};
		constexpr std::array<char, 6> v_str{ "vivid" };

		constexpr std::array<RGB_Color, 12> b{
	RGB_Color(239, 108, 112),
	RGB_Color(250, 129, 85),
	RGB_Color(255, 173, 54),
	RGB_Color(250, 216, 49),
	RGB_Color(183, 200, 43),
	RGB_Color(65, 184, 121),
	RGB_Color(0, 170, 159),
	RGB_Color(0, 152, 185),
	RGB_Color(41, 129, 192),
	RGB_Color(117, 116, 188),
	RGB_Color(161, 101, 168),
	RGB_Color(208, 103, 142)
		};
		constexpr std::array<char, 7> b_str{ "bright" };

		constexpr std::array<RGB_Color, 12> s{
	RGB_Color(197, 63, 77),
	RGB_Color(204, 87, 46),
	RGB_Color(225, 146, 21),
	RGB_Color(222, 188, 3),
	RGB_Color(156, 173, 0),
	RGB_Color(0, 143, 86),
	RGB_Color(0, 130, 124),
	RGB_Color(0, 111, 146),
	RGB_Color(0, 91, 155),
	RGB_Color(83, 76, 152),
	RGB_Color(124, 61, 132),
	RGB_Color(163, 60, 106)
		};
		constexpr std::array<char, 7> s_str{ "strong" };

		constexpr std::array<RGB_Color, 12> dp{
	RGB_Color(166, 29, 57),
	RGB_Color(171, 61, 29),
	RGB_Color(177, 108, 0),
	RGB_Color(179, 147, 0),
	RGB_Color(116, 132, 0),
	RGB_Color(0, 114, 67),
	RGB_Color(0, 102, 100),
	RGB_Color(0, 84, 118),
	RGB_Color(0, 66, 128),
	RGB_Color(62, 51, 123),
	RGB_Color(97, 36, 105),
	RGB_Color(134, 29, 85)
		};
		constexpr std::array<char, 5> dp_str{ "deep" };

		constexpr std::array<RGB_Color, 12> ltp{
	RGB_Color(241, 152, 150),
	RGB_Color(255, 167, 135),
	RGB_Color(255, 190, 113),
	RGB_Color(242, 217, 110),
	RGB_Color(199, 211, 109),
	RGB_Color(133, 206, 158),
	RGB_Color(98, 192, 181),
	RGB_Color(91, 175, 196),
	RGB_Color(108, 154, 197),
	RGB_Color(144, 145, 195),
	RGB_Color(176, 136, 181),
	RGB_Color(217, 142, 165)
		};
		constexpr std::array<char, 7> ltp_str{ "light+" };

		constexpr std::array<RGB_Color, 12> lt{
	RGB_Color(246, 171, 165),
	RGB_Color(255, 185, 158),
	RGB_Color(255, 206, 144),
	RGB_Color(251, 230, 143),
	RGB_Color(216, 223, 146),
	RGB_Color(156, 217, 172),
	RGB_Color(126, 204, 193),
	RGB_Color(121, 186, 202),
	RGB_Color(131, 167, 200),
	RGB_Color(162, 159, 199),
	RGB_Color(184, 154, 184),
	RGB_Color(218, 160, 179)
		};
		constexpr std::array<char, 6> lt_str{ "light" };

		constexpr std::array<RGB_Color, 12> sf{
	RGB_Color(202, 130, 129),
	RGB_Color(218, 146, 122),
	RGB_Color(219, 166, 107),
	RGB_Color(211, 189, 108),
	RGB_Color(173, 182, 107),
	RGB_Color(118, 177, 138),
	RGB_Color(84, 163, 155),
	RGB_Color(81, 146, 164),
	RGB_Color(93, 126, 160),
	RGB_Color(120, 120, 160),
	RGB_Color(144, 113, 148),
	RGB_Color(180, 120, 139)
		};
		constexpr std::array<char, 5> sf_str{ "soft" };

		constexpr std::array<RGB_Color, 12> d{
	RGB_Color(163, 90, 92),
	RGB_Color(175, 105, 84),
	RGB_Color(179, 127, 70),
	RGB_Color(171, 148, 70),
	RGB_Color(133, 143, 70),
	RGB_Color(79, 135, 102),
	RGB_Color(42, 123, 118),
	RGB_Color(36, 106, 125),
	RGB_Color(52, 89, 125),
	RGB_Color(84, 82, 124),
	RGB_Color(108, 74, 113),
	RGB_Color(139, 79, 101)
		};
		constexpr std::array<char, 5> d_str{ "dull" };

		constexpr std::array<RGB_Color, 12> dk{
	RGB_Color(105, 41, 52),
	RGB_Color(117, 54, 42),
	RGB_Color(121, 77, 28),
	RGB_Color(116, 96, 31),
	RGB_Color(82, 91, 32),
	RGB_Color(35, 82, 58),
	RGB_Color(0, 71, 70),
	RGB_Color(0, 69, 88),
	RGB_Color(18, 52, 82),
	RGB_Color(50, 45, 81),
	RGB_Color(67, 40, 72),
	RGB_Color(97, 45, 70)
		};
		constexpr std::array<char, 5> dk_str{ "dark" };

		constexpr std::array<RGB_Color, 12> pp{
	RGB_Color(232, 194, 191),
	RGB_Color(235, 194, 181),
	RGB_Color(244, 212, 176),
	RGB_Color(242, 230, 184),
	RGB_Color(216, 221, 173),
	RGB_Color(174, 212, 185),
	RGB_Color(166, 212, 204),
	RGB_Color(173, 209, 218),
	RGB_Color(175, 192, 209),
	RGB_Color(187, 189, 208),
	RGB_Color(200, 185, 201),
	RGB_Color(222, 196, 202)
		};
		constexpr std::array<char, 6> pp_str{ "pale+" };

		constexpr std::array<RGB_Color, 12> p{
	RGB_Color(231, 213, 212),
	RGB_Color(233, 213, 207),
	RGB_Color(246, 227, 206),
	RGB_Color(239, 230, 198),
	RGB_Color(230, 233, 198),
	RGB_Color(196, 224, 203),
	RGB_Color(191, 224, 217),
	RGB_Color(198, 221, 226),
	RGB_Color(194, 204, 213),
	RGB_Color(201, 202, 213),
	RGB_Color(208, 200, 209),
	RGB_Color(228, 213, 217)
		};
		constexpr std::array<char, 5> p_str{ "pale" };

		constexpr std::array<RGB_Color, 12> ltg{
	RGB_Color(192, 171, 170),
	RGB_Color(193, 171, 165),
	RGB_Color(206, 187, 168),
	RGB_Color(198, 190, 161),
	RGB_Color(189, 193, 162),
	RGB_Color(157, 182, 165),
	RGB_Color(152, 182, 177),
	RGB_Color(158, 180, 185),
	RGB_Color(155, 165, 175),
	RGB_Color(162, 162, 175),
	RGB_Color(171, 160, 171),
	RGB_Color(189, 172, 176)
		};
		constexpr std::array<char, 15> ltg_str{ "light graylish" };

		constexpr std::array<RGB_Color, 12> g{
	RGB_Color(116, 92, 92),
	RGB_Color(117, 92, 87),
	RGB_Color(128, 108, 92),
	RGB_Color(120, 111, 87),
	RGB_Color(110, 114, 90),
	RGB_Color(83, 102, 90),
	RGB_Color(78, 103, 100),
	RGB_Color(79, 101, 108),
	RGB_Color(76, 87, 101),
	RGB_Color(86, 85, 102),
	RGB_Color(96, 82, 98),
	RGB_Color(114, 92, 99)
		};
		constexpr std::array<char, 9> g_str{ "graylish" };

		constexpr std::array<RGB_Color, 12> dkg{
	RGB_Color(62, 45, 48),
	RGB_Color(63, 46, 44),
	RGB_Color(74, 60, 50),
	RGB_Color(68, 62, 48),
	RGB_Color(61, 64, 51),
	RGB_Color(42, 52, 46),
	RGB_Color(39, 52, 52),
	RGB_Color(39, 52, 57),
	RGB_Color(34, 41, 51),
	RGB_Color(41, 39, 52),
	RGB_Color(48, 37, 49),
	RGB_Color(61, 46, 52)
		};
		constexpr std::array<char, 14> dkg_str{ "dark graylish" };

		constexpr std::array<RGB_Color, 9> gy{
	RGB_Color(39, 39, 39),
	RGB_Color(60, 60, 60),
	RGB_Color(84, 84, 84),
	RGB_Color(109, 109, 109),
	RGB_Color(135, 135, 135),
	RGB_Color(161, 161, 161),
	RGB_Color(187, 187, 187),
	RGB_Color(214, 214, 214),
	RGB_Color(241, 241, 241)
		};
		constexpr std::array<char, 5> gy_str{ "gray" };

	}

}

#endif