#include "Header.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
	HKEY hkey;
	HKEY hMyKey;
	RegOpenKeyW(HKEY_CURRENT_USER, NULL, &hkey);
	if (RegCreateKeyW(hkey, L"MyKey", &hMyKey) == ERROR_SUCCESS)
	{
		MessageBoxW(NULL, L"Раздел создан", L"YES", MB_OK);
	}
	if (RegSetValueW(hMyKey, NULL, REG_SZ, L"Message", 8 * sizeof(WCHAR)) == ERROR_SUCCESS)
	{
		LPWSTR text = calloc(256, 1);
		if (RegGetValueW(hMyKey, NULL, NULL, REG_SZ, REG_SZ, text, sizeof(LPWSTR)) == ERROR_SUCCESS)
		{
			MessageBoxW(NULL, text, L"YES", MB_OK);
		}

	}
	return 0;

}