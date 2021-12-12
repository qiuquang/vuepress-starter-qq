#if 0
#include <stdio.h>
int main() {
	int arr[5]; // 5个长度的数组
	arr[0] = 23;
	arr[2] = 7;

	for(int i=0; i<5;i++) {
		arr[i]=2*i+1;
	}

	for(int i=0; i<5;i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");


	int brr[5] = {3,6,7,8}; // 声明方式2-固定数组长度

	for(int i=0; i<5;i++) {
		printf("%d\t", brr[i]);
	}
	printf("\n");

	int crr[] = {30,60,76,83}; // 声明方式2-根据定义的数据来确定长度

	for(int i=0; i<4;i++) { // 数组越界 会提示非法入侵访问
		printf("%d\t", crr[i]);
	}
	printf("\n");
}
#endif

#if 1
#include <stdio.h>

int main() {
	float scores[1000],score,sum=0;
	int n=0;
	while(1){
		scanf("%f", &score);
		if(score < 0) {
			break;
		} else {
			scores[n]=score;
			n++;
			sum += score;
		}
	}

	for(int i=0;i<n;i++){
		printf("%f\t", scores[i]);
	}
	printf("平均分:%5.2f\n", sum/n);
}

#endif
