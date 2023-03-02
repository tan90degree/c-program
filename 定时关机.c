#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	system("shutdown -s -t 600");//system()执行系统命令
	char input[20] = { 0 };
	printf("输入：“哈哈哈”否则你的电脑将在600秒后关机\n");
fanhui:
	scanf("%s", input);

	if (strcmp(input, "哈哈哈") == 0) {
		system("shutdown -a");
	}
	else {
		goto fanhui;
	}
	return 0;
}