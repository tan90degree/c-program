#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* num) {
	if (*num != '\0') {
		return 1 + my_strlen(num + 1);
	}
	else return 0;
}

int main() {
	char str[] = "hello";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
}