/*Даны два целых числа A и B (A < B). Найти сумму всех целых чисел
от A до B включительно.*/
#include <stdio.h>
int main () {
	int a, b;
	int sum = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	printf("%d", sum);
}
