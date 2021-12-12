#if 0
#include <stdio.h>

int main() {

	return 0;
}
#endif

#if 0
#include <stdio.h>

// 函数定义  void 无返回类型
void f(int n) { // n 形参
	for (int i = 0; i < n; ++i){
		printf("你好！ %d\n", i);
	}
}

int main() {
	f(3); // 函数调用  3 实参
	return 0;
}
#endif

#if 0
#include <stdio.h>

// 求和 int 返回整型
int add(int a, int b) { // n 形参
	return a + b;
}

int main() {
	int c = add(3, 5); // 函数调用  3 实参
	printf("c=%d\n",c);
	return 0;
}
#endif

#if 0
// 递归函数  求n的阶乘
#include <stdio.h>

int fact(int n) {
	int reg = 1;
	for(int i=1;i<=n;i++) {
		reg *= i;
	}
	return reg;
}

int main() {
	int c = fact(6);
	printf("阶乘是=%d\n",c);
	return 0;
}
#endif

#if 0
// 递归函数  求n的阶乘
#include <stdio.h>

int fact(int n) {
	if (n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {
	int c = fact(4);
	printf("阶乘是=%d\n",c);
	return 0;
}
#endif

#if 0
// 斐波那契数列 f(0)=1 f(1)=1  n>=2时 f(n)=f(n-1)+f(n-2)
#include <stdio.h>

int fib(int n) {
	if (n < 2) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main() {
	int c = fib(4);
	printf("斐波那契数列是=%d\n",c);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main() {
	int a = 3, b=4;
	int *p = &a; // 指针类型声明的p 存储了a的地址

	printf("%p, %p\n", &a, p); // a的地址 和 p(存储的a的地址)是一样的

	*p = 7; // *是解引用运算符 获取到a的值 降7赋值给a
	printf("a=%d, *p是%d\n", a, *p); // *是解引用

	b=*p + 1;
	printf("a=%d, *p是%d,b是%d\n", a, *p, b); // *是解引用


}

#endif

#if 0
#include <stdio.h>
int main() {
	int arr[] = {2,3,4,5,6}, b=2; // 数组声明 arr[]
	int *p = arr; // 指针类型声明的p 存储了arr[0]的地址 等价于 int *p = &(arr[0])
//  int *p = &(arr[0]) 和上面一样
	printf("%p\t%p\t%p\n",arr, &(arr[0]), p); // arr的地址,arr首项的地址,p的地址

	printf("%d\t%d\n", *p, arr[0]); // *是解引用运算符
	printf("%d\t%d\n", *(p+2), arr[2]); // *是解引用运算符 p是地址 +2地址向右移动2位
	printf("%d\t%d\n", p[2], arr[2]); // 
	printf("%d\t%d\n", p[2], *(arr+2)); // arr是arr[0]的地址，右移两位

	//结论  arr[i] == *(arr+i)=p[i] == *(p+i)

	b=p[3];
	printf("%d\t%d\n", b,*(p+3));

	// 不一样的循环

	for(p=arr;p<arr+5;p++){ // p是地址，arr是第0个元素的地址；+5右移5个长度
		printf("%d\t", *p); // *p 解引用运算符
	}
}

#endif

#if 0
#include <stdio.h>

void print(char *p, char *q) {
	while(p<q){
		printf("%c \n", *p);
		p++;
	}
}

int main() {
	char *p, crr[] = {'h', 'e', 'l', 'l', 'o'}, *q;
	q = crr + 5;
	p = crr;

	print(p, q);
    
    p = crr;
    *p = 'A';
    p++;

    while(p<q) {
    	*p = *(p-1)+1;
    	p++;
    }
    
    p = crr;
    print(p,q);

}

#endif



#if 1

/*
   C语言字符串出来函数：头文件 string.h
*/
#include <stdio.h>
#include <string.h>

int main() {
	char crr[] = {'h', 'e', 'l', 'l', 'o'};
	char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char* p = "hello";

	printf("%d %d\n", strlen(str), strlen(p)); // 字符的长度

	strcpy(str, "Wang");

	printf("%s\n", p);
	printf("%s\n", str);
	printf("%s\n", crr);
}
#endif