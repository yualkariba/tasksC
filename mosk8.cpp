/*Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
целые числа, расположенные между A и B (включая сами числа A и B), а
также количество N этих чисел.*/
#include <stdio.h>
int main (){
	int a, b;
	int count = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++){
		printf ("%d", i);
		count++;
	}
		printf("Количество чисел - %d", count);
	return 0;
}
