#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	system("shutdown -s -t 600");//system()ִ��ϵͳ����
	char input[20] = { 0 };
	printf("���룺����������������ĵ��Խ���600���ػ�\n");
fanhui:
	scanf("%s", input);

	if (strcmp(input, "������") == 0) {
		system("shutdown -a");
	}
	else {
		goto fanhui;
	}
	return 0;
}