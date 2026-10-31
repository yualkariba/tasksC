/*Дано целое число N (> 0). Найти сумму
1^1 + 2^2 + . . . + N^N .
Чтобы избежать целочисленного переполнения, вычислять слагаемые
этой суммы с помощью вещественной переменной и выводить результат как вещественное число.
*/
#include <stdio.h>
#include <math.h>
int main() {
	int n;
	scanf("%d", &n);
	double sum = 0.0;
	for (int i = 1; i <= n; i++) {
		double term = 1;
		for (int j = 1; j <= i; j++) {
			term = term * i;
		}
		sum = sum + term;
	}
	printf("%.2lf",sum);
}
