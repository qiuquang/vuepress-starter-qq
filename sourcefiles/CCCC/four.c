/*
条件语句  if switch
*/
#if 0
#include <stdio.h>

int main() {
	float score;
	scanf("%f", &score);
	if(score >= 90) {
		printf("你的分数为%4.1f\n", score);
		printf("你的成绩是优秀！\n");
	} else if (score >= 80) {
		printf("你的分数为%4.1f\n", score);
		printf("你的成绩是良好！\n");
	} else if(score >= 70) {
		printf("你的分数为%4.1f\n", score);
		printf("你的成绩是中等！\n");
	} else if(score >= 60) {
		printf("你的分数为%4.1f\n", score);
		printf("你的成绩是及格！\n");
	} else {
		printf("你的分数为%4.1f,未通过考试！\n", score);
	}
}
#endif


#if 0
/**
 * switch
 * 
 * */
#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	switch(score){
		case 1:
			printf("你输入的是1\n");
			break;
		case 2:
			printf("你输入的是2\n");
			break;
		case 10:
			printf("你输入的是10\n");
			break;
		case 40:
			printf("你输入的是40\n");
			break;
		case 100:
			printf("你输入的是100\n");
			break;
		default:
			printf("你输入的值不是之前的值\n");
			break;
	}
}
#endif


#if 0
/**
 * 计算器小demo
 * 
 * */
#include <stdio.h>

int main() {
	float a,b;
	char op;
	scanf("%f %c %f", &a, &op, &b);
	switch(op){
		case '+':
			printf("%f %c %f = %f", a, op, b, a+b);
			break;
		case '-':
			printf("%f %c %f = %f", a, op, b, a-b);
			break;
		case '*':
			printf("%f %c %f = %f", a, op, b, a*b);
			break;
		case '/':
			printf("%f %c %f = %f", a, op, b, a/b);
			break;
		default:
			printf("你输入的运算符有误\n");
			break;
	}
}
#endif



#if 0
/*
  循环语句 while
*/
#include <stdio.h>

int main() {
	int sum = 0, i=1;
	while(i<=100){
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}

#endif

#if 0
/*
  循环语句 do-while 
*/
#include <stdio.h>

int main() {

	int sum = 0, i=1;
	do {
		sum += i;
		i++;
	}while(i<=100);
	printf("%d\n", sum);
}

#endif


#if 0
/*
  循环语句 for
*/
#include <stdio.h>

int main() {
	int sum = 0;
	for(int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}

#endif

#if 1
/*判断一个数是质数*/
#include <stdio.h>
int main() {
	int a,flag = 0; // flag是1的时候表示是质数,0表示不是质数
	scanf("%d", &a);
	for(int i=2;i<a;i++){
		if(a%i==0){
			flag = 1;
			break;
		}
	}
	if(flag==1){
		printf("%d不是质数。\n",a);
	} else {
		printf("%d是质数。\n",a);
	}
}

#endif
