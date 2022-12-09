#include "Header.h"

main() {
	system("chcp 1251>nul");
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csb;
	GetConsoleScreenBufferInfo(hConsole, &csb);
	printf("%s", "aboba\n");
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
	SHORT a = 12;
	COORD CORD = { a,a };
	csb.dwSize = CORD;
	printf("%s", "aboba\n");
	SetConsoleTextAttribute(hConsole, csb.wAttributes);
	//HKEY hkey;
	//HKEY hMyKey;
	//RegOpenKeyW(HKEY_CURRENT_USER, NULL, &hkey);
	//if (RegCreateKeyW(hkey, L"MyKey", &hMyKey) == ERROR_SUCCESS)
	//{
	//	//MessageBoxW(NULL, L"Раздел создан", L"YES", MB_OK);
	//}
	//if (RegSetValueW(hMyKey, NULL, REG_SZ, L"Message", 8 * sizeof(WCHAR)) == ERROR_SUCCESS)
	//{
	//	WCHAR text [256];
	//	DWORD size = sizeof(WCHAR) * 256;
	//	if (RegGetValueW(hMyKey, NULL, NULL, RRF_RT_REG_SZ, NULL, text,&size ) == ERROR_SUCCESS)
	//	{
	//		MessageBoxW(NULL, text, L"YES", MB_OK);
	//	}

	//}
	//return 0;
}




void GetSettings() {

}

void SetFontSize() {

}

void SetFontColor() {

}

void SetBackground() {

}

void SetFontType() {

}