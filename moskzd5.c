/*2. ѕо номеру автомобил€ определить регион*/
#include <stdio.h>
int main() {
int region;
	scanf("%d", &region);
	if (region == 77 || region == 97 || region == 99 || region == 177 || region == 199 || region == 197) {
		printf("–егион %d Ч ћосква", region);
	}
	else if (region == 50 || region == 90 || region == 150 || region == 190) {
		printf("–егион %d Ч ћосковска€ область", region);
	}
	else if (region == 78 || region == 98 || region == 178 || region == 198) {
		printf("–егион %d Ч —анкт-ѕетербург", region);
	}
	else if (region == 47) {
		printf("–егион %d Ч Ћенинградска€ область", region);
	}
	else if (region == 23 || region == 93 || region == 123 || region == 193) {
		printf("–егион %d Ч  раснодарский край", region);
	}
	else if (region == 66 || region == 96 || region == 166 || region == 196) {
		printf("–егион %d Ч —вердловска€ область", region);
	}
	else if (region == 16 || region == 116 || region == 716) {
		printf("–егион %d Ч –еспублика “атарстан", region);
	}
	else if (region == 2 || region == 102) {
		printf("–егион %d Ч –еспублика Ѕашкортостан", region);
	}
	else if (region == 61 || region == 161 || region == 761) {
		printf("–егион %d Ч –остовска€ область", region);
	}
	else if (region == 74 || region == 174 || region == 774) {
		printf("–егион %d Ч „ел€бинска€ область", region);
	}
	else if (region == 52 || region == 152 || region == 252) {
		printf("–егион %d Ч Ќижегородска€ область", region);
	}
	else if (region == 63 || region == 163 || region == 763) {
		printf("–егион %d Ч —амарска€ область", region);
	}
	else {
		printf("–егион %d Ч неизвестный регион", region);
	}
	return 0;
}
