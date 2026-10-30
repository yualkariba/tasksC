/*Дано вещественное число A и целое число N (> 0). Найти A в степени N:
A^N = A·A·...·A*/
#include <stdio.h>
int main () {
float a;
	int n;
scanf("%f", &a);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		a = a * i;
	}
	printf("%.1f", a);
}
