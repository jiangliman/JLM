// Win32.3.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "Win32.3.h"


// ���ǵ���������һ��ʾ��
WIN323_API int nWin323=0;

// ���ǵ���������һ��ʾ����
WIN323_API int fnWin323(void)
{
    return 42;
}

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� Win32.3.h
CWin323::CWin323()
{
    return;
}

float FAC::convert(float deg) {
	return deg*(3.1415 / 180);
}