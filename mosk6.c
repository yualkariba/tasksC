/*7.ƒан номер мес€ца Ч целое число в диапазоне 1Ц12 (1 Ч €нварь, 2 Ч февраль и т. д.). ¬ывести название соответствующего времени года (Ђзимаї,
Ђвеснаї, Ђлетої, Ђосеньї).*/

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
	int month;
	scanf("%d", &month);
	if (month == 12 || month == 1 || month == 2) {
		printf("ћес€ц %d Ч зима", month);
	} 
	else if (month >= 3 && month <= 5) {
		printf("ћес€ц %d Ч весна", month);
	} 
	else if (month >= 6 && month <= 8) {
		printf("ћес€ц %d Ч лето", month);
	} 
	else { 
		printf("ћес€ц %d Ч осень", month);
	}
	printf("\n");
}
