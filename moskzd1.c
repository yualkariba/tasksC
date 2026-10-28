 /*№4 По номеру дня недели определить, выходной или рабочий*/
#include <stdio.h>
int main () {
	int day;
	scanf("%d", &day);
	if (day <= 5) {
		printf("%d - working day", day);
	}  else if (day > 5 && day < 8) {
		printf("%d - weekend",day);
	} else {
		printf("Error");
	}
}

