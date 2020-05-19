#include"stdafx.h"
#include"win32.2.h"

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}

float FAC::convert(float deg) {
	return deg*(3.1415 / 180);
}