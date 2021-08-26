#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int bitShift = 0, decimal = 0, binary = 0, i, j = 0;
	printf("Input decimal : ");
	scanf("%d", &decimal);
	for (i = 31; i >= 0; i--) {
		bitShift = decimal >> i;
		if (bitShift & 1)	printf("1");
		else				printf("0");
	}
	return 0;
}