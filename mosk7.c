/*№1  По номеру месяца определить количество дней*/
#include <stdio.h>
int main () {
	int month;
	scanf("%d", &month);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month ==  8 || month == 10 || month == 12) {
		printf("month %d - 31 days", month);
	}  else if (month == 2) {
		printf("month %d - 28 days", month);
	} else {
		printf("month %d - 30 days", month);
	}
	printf("\n");
}
