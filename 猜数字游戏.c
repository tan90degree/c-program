#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int select;//����SelectGame()���ж��Ƿ�ʼ��Ϸ
void jiemian() { //������ʾ����
	printf("***********************\n");
	printf("**** 1.��ʼ  0.�˳�****\n");
	printf("***********************\n");
	scanf("%d", &select);
	SelectGame();
}
int game() {//��Ϸ���ƺ���
	printf("����1~100�������\n");
	srand((unsigned int)time(NULL));//
	int ret = rand() % 100 + 1;//�������������int ret=rand()%(n-m+1)+m ��ʾ����m~n�ķ�Χ�������
	printf("%d\n", ret);//����������������ֵ�������õģ�
	int sum;
	for (sum = 1; sum <= 5; sum++) {
		int answer;
		scanf("%d", &answer);
		if (answer == ret) { printf("����ˣ�\n"); jiemian(); break; }
		else { printf("����ˣ������!\n"); }
	}
	if (sum == 6) { printf("���Ѿ�������Ϸ������\n"); jiemian(); }
	return 0;
}
int SelectGame() {//ѡ����Ϸ�Ƿ�ʼ����
	do {
		switch (select) {
		case 1:
			game();
		case 0:
			break;
		default:
			printf("ѡ���ˣ�������ѡ��\n");
		}
	} while (select);
	return 0;
}
int main() {
	jiemian();
	return 0;
}
