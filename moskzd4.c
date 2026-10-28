/*№5  По времени определить часть суток*/
#include <stdio.h>
int main () {
	int h,m;
	scanf("%d:%d", &h, &m);
	if (h >= 6 && h < 12) {
		printf("%02d:%02d - morning",h, m);
	} else if (h >= 12 && h < 18) {
		printf("%02d:%02d - day",h, m);
	} else if (h >= 18 && h < 24) {	  
		printf("%02d:%02d - evening",h, m);
	} else if (h >= 0 && h < 6) {	  
		printf("%02d:%02d - night",h, m);
	} else {
		printf("Error");
	}
}

