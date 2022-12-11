#include "Header.h"

main() {
    SetConsoleCP(1251);            
    SetConsoleOutputCP(1251);
    RegCreateKeyW(HKEY_CURRENT_USER, L"MyKey", &hMyKey);
	/*ClearConsoleToColors(1, 10);
	printf("%s", "sdgsdg\n");

    cfi.cbSize = sizeof cfi;
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 16;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    printf("%s", "sdgsdg\n");*/

    DWORD st = 900;
    SetFontType(st);
    GetSettings();
}


void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord = { 0, 0 };
    DWORD count;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    SetConsoleTextAttribute(hStdOut, wColor);
    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        FillConsoleOutputCharacter(hStdOut, (TCHAR)32
            , csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes
            , csbi.dwSize.X+12 * csbi.dwSize.Y + 12, coord, &count);
        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}

void GetSettings() {
    DWORD style;
    DWORD size = sizeof(style);
    if (RegGetValueW(hMyKey, NULL, L"style", RRF_RT_DWORD, NULL, (LPBYTE) &style, &size) == ERROR_SUCCESS)
    {
        MessageBoxW(NULL, style, L"get", MB_OK);
    }
}

void SetFontSize() {

}

void SetFontType(DWORD st) {
    if (RegSetValueEx(hMyKey, L"style", 0, REG_DWORD, (const BYTE*)&st, sizeof(st)) == ERROR_SUCCESS) {
        MessageBoxW(NULL, L"da", L"set", MB_OK);
    };
}