/*Дано целое число N (> 0). Найти сумму 
N2 + (N + 1)2 + (N + 2)2 + . . . + (2·N)2 */
#include <stdio.h>
int main () {
	int n;
	scanf("%d", &n);
	int sum = 0;
	 for (int i = n; i <= 2 * n; i++) {
		sum = sum + i * i;;	}
	printf("%d", sum);
}
