#include"stdafx.h"
#include"win32.1.h"

int factorial(int n) {
	if (n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}