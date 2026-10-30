/*Даны целые числа K и N (N > 0). Вывести N раз число K*/
#include <stdio.h>
int main () {
	int K, N;
	scanf("%d%d", &K, &N);
	for (int i = 0; i < N; i++) {
		printf("%d", K);
	}
	printf("\n");
	return 0;
}
