#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_prime(int n) {
	int a;
	for (a = 2; a < n; a++) {
		if (n % a == 0) { return 0; }
	}
	if (a == n) { return 1; }
}
int main() {
	for (int i = 100; i <= 200; i++) {
		if ((is_prime(i) == 1)) {
			printf("%d \n", i);
		}
	}
	return 0;
}
