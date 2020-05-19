// Win32.3.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "Win32.3.h"


// 这是导出变量的一个示例
WIN323_API int nWin323=0;

// 这是导出函数的一个示例。
WIN323_API int fnWin323(void)
{
    return 42;
}

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 Win32.3.h
CWin323::CWin323()
{
    return;
}

float FAC::convert(float deg) {
	return deg*(3.1415 / 180);
}