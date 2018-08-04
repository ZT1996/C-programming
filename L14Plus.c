#include<stdio.h>
int main(){
	int number;
	int i;
	printf("请输入需要判断的数字:");
	scanf("%d", &number);

	for(i = 2; i < number; i++){
		if(number % i == 0){
			printf("这个数字不是素数");
			break;
		}
	}
	if(i == number){
		printf("这个数字是素数");
	}
}
