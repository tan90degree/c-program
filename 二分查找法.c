#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num[] = { 1,2,4,5,5,52,44,6,7,8 };
	int k;
	scanf("%d", &k);
	int left = 0;                 //左下标
	int right = sizeof(num) / sizeof(num[0]) - 1;//右下标
	while (left <= right) {
		int mid = (left + right) / 2;         //中间下标
		if (k < num[mid]) {
			right = mid - 1;
		}
		else if (k > num[mid]) {
			left = mid + 1;
		}
		else { printf("fount:%d", num[mid]); break; }
	}
	if (left > right)
		printf("didn't find");

	return 0;
}
