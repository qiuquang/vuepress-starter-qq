
#include <stdio.h>

#if 1
int main() {
	float radius;
	int a,b;
	scanf("%f", &radius); // &代表取地址，将地址传给变量
	printf("%f\n", radius);
	scanf("%d,%d", &a, &b);
	printf("%d,%d\n", a, b);
	return 0;
}
#endif



#define PI 3.1415 // 宏定义


#if 0
int main() {
	int a;
	float radius;
	char ch = 'a';
	double area;
	printf( "sizeof(a)=: %d\n",sizeof(a));
	printf( "sizeof(int)= :%d \n",sizeof(int));
	printf( "sizeof(radius)=:%d\n",sizeof(radius));
	printf( "sizeof(float)=: %d\n",sizeof(float));
	printf( "sizeof(ch)= :%d \n",sizeof(ch));
	printf( "sizeof(char)= :%d\n",sizeof(char));
	printf( "sizeof(area)=:%d\n",sizeof(area));
	printf( "sizeof(double)=:%d\n" ,sizeof(double));
	
}
#endif


#if 0
int main() {
	float radius = 2.5;
	printf("area = %f\n", PI*radius*radius);
}
#endif


#if 0
// 声明变量,只能存所声明的类型
int main() {
	int a;
	float radius;
	char ch = 'a';
	double area;

	printf("a=%d, radius=%f, ch=%c\n",a, radius, ch);
	printf("area= %lf\n", area);
	printf("%s\n", "Hello Wold");
}
#endif




#if 0
// %f 格式符，用来输出float类型的值
// radius 和 area 是变量 存值的
int main() {
	float radius = 2.5;
	float area = 3.14*radius*radius;
	printf("area = %f\n", area);
	printf("半径是%3.1f的圆，面积area = %7.3f\n", radius, area); // %3.1  总长度为3，小数点后为1；%7.3 总长度为7，小数点后为3
}
#endif


// 转义字符  
/* 
\n 换行符
\t 制表符
\v 垂直制表符
\' 单引号字符'
\\ 反斜杠
\? 问号字符
\a 响铃
*/
//以下为测试代码

#if 0 // 0代表为false，不执行 可以自己测试 1 0互换
int zyzf() {
	printf("helloworld!\n");
	printf("hello\nworld!\n");
	printf("hello\tworld!\n");
	printf("hello\vworld!\n");
	printf("hello\'world!\n");
	printf("hello\"world!\n");
	printf("hello\\world!\n");
	printf("hello\\hworld!\n");
	printf("hello\aworld!\n");
	return 0;
}


int main() {
	zyzf();
	return 1;
}
#endif