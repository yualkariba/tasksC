/*. Даны два целых числа A и B (A < B). Найти сумму квадратов всех целых
чисел от A до B включительно.*/
#include <stdio.h>
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i * i;
	}
	printf("%d", sum);
}
