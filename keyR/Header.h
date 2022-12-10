#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

CONSOLE_FONT_INFOEX cfi;
HKEY hkey;
HKEY hMyKey;

void GetSettings();
void SetFontSize();
void SetFontColor();
void SetBackground();
void ClearConsoleToColors(int ForgC, int BackC);
void SetFontType();