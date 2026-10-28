/*3.По префиксу номера телефона определить провайдера*/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "");
int prefix;
	scanf("%d", &prefix);
	if (prefix == 910 || prefix == 911 || prefix == 912 || prefix == 913 ||
		prefix == 914 || prefix == 915 || prefix == 916 || prefix == 917 ||
		prefix == 918 || prefix == 919 || prefix == 980 || prefix == 981 ||
		prefix == 982 || prefix == 983 || prefix == 984 || prefix == 985 ||
		prefix == 986 || prefix == 987 || prefix == 988 || prefix == 989) {
		printf("Префикс %d — МТС", prefix);
	}else if (prefix == 903 || prefix == 905 || prefix == 906 || prefix == 909 ||
			 prefix == 960 || prefix == 961 || prefix == 962 || prefix == 963 ||
			 prefix == 964 || prefix == 965 || prefix == 966 || prefix == 967 ||
			 prefix == 968 || prefix == 969) {
		printf("Префикс %d — Билайн", prefix);
	}else if (prefix == 920 || prefix == 921 || prefix == 922 || prefix == 923 ||
			 prefix == 924 || prefix == 925 || prefix == 926 || prefix == 927 ||
			 prefix == 928 || prefix == 929 || prefix == 930 || prefix == 931 ||
			 prefix == 932 || prefix == 933 || prefix == 934 || prefix == 935 ||
			 prefix == 936 || prefix == 937 || prefix == 938 || prefix == 939) {
		printf("Префикс %d — МегаФон", prefix);
	}else if (prefix == 900 || prefix == 901 || prefix == 902 || prefix == 904 ||
			 prefix == 908 || prefix == 950 || prefix == 951 || prefix == 952 ||
			 prefix == 953 || prefix == 958 || prefix == 977 || prefix == 991 ||
			 prefix == 992 || prefix == 993 || prefix == 994 || prefix == 995 ||
			 prefix == 996 || prefix == 997 || prefix == 998 || prefix == 999) {
		printf("Префикс %d — Tele2 / Yota (виртуальные операторы)", prefix);
	}else {
		printf("Префикс %d — оператор не найден", prefix);
	}
	return 0;
}
