

#if 0
/*
逻辑运算符:&&、||、！
        即：与、或、非
       比较结果是︰1或0
*/
#include <stdio.h>

int main() {
	int a=3,b=0,c=2;
	printf( "a=%d,b = %d,c = %d\n",a,b,c);
	printf( "!a = %d\n",!a);
	printf("!b = %d\n", !b);
	printf( "%d&&%d : %d\n",a,b,a&&b);
	printf( "%d || %d : %d\n",a,b,a||b);
	printf( "%d&&%d : %d\n",a,c,a&&c);
	printf("%d || %d : %d\n",a,c,a||c);
	return 0;
}
#endif





#if 0
/*
比较运算符非、<、>=、<=、!=   比较结果是︰1或0
*/
#include <stdio.h>

int main() {
	int a=3,b=5;
	printf( "a=%d,b = %d\n",a,b);
	printf("%d>%d :%d\n",a,b,a>b);
	printf( "%d<%d : %d\n",a,b,a<b);
	printf( "%d>=%d : %d\n",a,b,a>=b);
	printf( "%d<=%d : %d\n",a,b,a<=b);
	printf( "%d !=%d : %d\n",a,b,a!=b);
	return 1;

}

#endif



#if 0
#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c,delta,x1,x2;
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = b*b-4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	printf("方程 %lfx^2 + %lfx + %lf的根为 %lf,%lf \n", a,b,c,x1,x2);
}

#endif





#if 0
#include <stdio.h>
#define PI 3.1415
#if 0
/*
算数运算符：+ - * / %(取模)、++（自增）、 --（自减）
*/
int main() {
	float radius;
	scanf("%f", &radius);
	printf("圆的半径是%f\n", radius);
	printf("半径是%f的圆的面积是area = %f\n", radius, PI*radius*radius);
	return 0;
}

#else
int main() {
	// int a=15,b=2; // 整数 
	// printf("a=%d,b=%d\n", a, b);
	// printf("a+b=%d\n", a + b);
	// printf("a-b=%d\n", a - b);
	// printf("a*b=%d\n", a * b);
	// printf("a/b=%d\n", a / b);
	// printf("a%%b=%d\n", a % b);
	// a++;
	// printf("a=%d\n", a);
	// a--;
	// printf("a=%d\n", a);
	// return 0;

	// 将a,b换成浮点数进行试验
	float a=15.3,b=2.1; // 浮点数
	printf("a=%f,b=%f\n", a, b);
	printf("a+b=%f\n", a + b);
	printf("a-b=%f\n", a - b);
	printf("a*b=%f\n", a * b);
	printf("a/b=%f\n", a / b);
	// printf("a%%b=%f\n", a % b);
	a++;
	printf("a=%f\n", a);
	a--;
	printf("a=%f\n", a);
	return 0;
}
#endif
#enfif
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a=37,b=20;
	char s[10];/*10个char(字符)的数组*/
	itoa(a, s,2);
	printf( "a=:%d,二进制:%10s\n", a, s);

	itoa(b, s,2);
	printf("b=:%d,二进制:%10s\n",b, s);

	itoa( a&b, s,2);
	printf("a&b=:%d,二进制:%9s\n" ,a&b,s);

	itoa(a|b,s,2);
	printf("a|b=:%d,二进制:%8s\n",a|b,s);

	itoa(a^b, s,2);
	printf( "a^b=:%d,二进制:%8s\n" ,a^b, s);

	itoa(~a, s,2);
	printf("~a= : %d,二进制:%s\n",~a, s);

}
#endif


#if 0
/*
赋值运算符:=
复合赋值运算符:、+=、*=、/=、%=&=、l=、^=、~=
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a=15,b=2;
	a = 3;
	printf( "a=%d,b = %d\n",a,b);

	a%=b;/*a= a%b;*/
	printf( "a%%=b:%d\n",a);/*%%表示输出一个%*/

	a+=b;/*a= a+b;*/
	printf( "a+=b: %d\n",a);
	a*=b;/*a= a*b;*/
	printf( "a*=b: %d\n",a);

	return 0;

}
#endif

#if 1
#include <stdio.h>
int main() {
	int a=5,b=2,c=7;
	a=b=c; // 等于号 优先级自右向左运算
	printf("%d,%d,%d\n", a,b,c);
}
#endif