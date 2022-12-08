#include "Header.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
	HKEY hkey;
	HKEY hMyKey;
	RegOpenKeyW(HKEY_CURRENT_USER, NULL, &hkey);
	if (RegCreateKeyW(hkey, L"MyKey", &hMyKey) == ERROR_SUCCESS)
	{
		//MessageBoxW(NULL, L"Раздел создан", L"YES", MB_OK);
	}
	if (RegSetValueW(hMyKey, NULL, REG_SZ, L"Message", 8 * sizeof(WCHAR)) == ERROR_SUCCESS)
	{
		WCHAR text [256];
		DWORD size = sizeof(WCHAR) * 256;
		if (RegGetValueW(hMyKey, NULL, NULL, RRF_RT_REG_SZ, NULL, text,&size ) == ERROR_SUCCESS)
		{
			MessageBoxW(NULL, text, L"YES", MB_OK);
		}

	}
	return 0;

}