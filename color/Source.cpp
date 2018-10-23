#include <DxLib.h>
#include "ColorAs.hpp"

//初期化
int init() {
	SetOutApplicationLogValidFlag(FALSE);
	ChangeWindowMode(TRUE);
	SetUseCharCodeFormat(DX_CHARCODEFORMAT_UTF8);
	if (DxLib_Init() == -1) return -1;
	SetDrawScreen(DX_SCREEN_BACK);
	return 0;
}
//ループ継続処理
bool loop() {
	return (CheckHitKeyAll() == 0 && ScreenFlip() == 0 && ClearDrawScreen() == 0 && ProcessMessage() == 0);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	//初期化
	if (init()) return -1;

	constexpr size_t time_num{ 120 };
	size_t time{};
	size_t counter{ time_num };
	std::string str{};
	color_as::RGB_Color col{ color_as::color_data[time]->rgb };

	//メインループ
	while (loop())
	{
		//色四角形を描画
		DrawBox(0, 0, 300, 300, (int)col.int32Down(), TRUE);

		if (++counter < time_num) continue;
		counter = 0;

		col = color_as::color_data[time]->rgb;
		color_as::color_data[time]->sc.output(str);

		clsDx();
		printfDx(u8"%s(%s)\n", color_as::color_data[time]->name_kanji, color_as::color_data[time]->name_furigana);
		printfDx(u8"%s", str.c_str());
		++time;
		if (time >= color_as::color_data.size()) time = 0;
	}

	DxLib_End();
	return 0;
}