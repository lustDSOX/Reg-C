#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

CONSOLE_FONT_INFOEX cfi;

HKEY hMyKey;
DWORD BackGround = 0;
DWORD ForeGround = 0;

void GetSettings();
void SetFontSize();
void SetColor(int, int);
void SetFontType(DWORD);
void SetSettings();