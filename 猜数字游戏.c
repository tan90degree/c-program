#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int select;//用于SelectGame()中判断是否开始游戏
void jiemian() { //界面提示函数
	printf("***********************\n");
	printf("**** 1.开始  0.退出****\n");
	printf("***********************\n");
	scanf("%d", &select);
	SelectGame();
}
int game() {//游戏机制函数
	printf("输入1~100的随机数\n");
	srand((unsigned int)time(NULL));//
	int ret = rand() % 100 + 1;//生成随机数函数int ret=rand()%(n-m+1)+m 表示生成m~n的范围的随机数
	printf("%d\n", ret);//输出所生成随机数的值（测试用的）
	int sum;
	for (sum = 1; sum <= 5; sum++) {
		int answer;
		scanf("%d", &answer);
		if (answer == ret) { printf("答对了！\n"); jiemian(); break; }
		else { printf("答错了，请继续!\n"); }
	}
	if (sum == 6) { printf("你已经超过游戏次数！\n"); jiemian(); }
	return 0;
}
int SelectGame() {//选择游戏是否开始函数
	do {
		switch (select) {
		case 1:
			game();
		case 0:
			break;
		default:
			printf("选错了，请重新选择！\n");
		}
	} while (select);
	return 0;
}
int main() {
	jiemian();
	return 0;
}
