#include<stdio.h>
int main(void){
	int a[11];
	int i,j;
	int score;
	for(i = 0; i < 11; i++)
		a[i] = 0;
	for(i = 0; i < 5; i++){
		printf("请输入第%d个人的分数\n", i+1);
		scanf("%d",&score);
		a[score]++;
	}

	for(i = 0; i < 11; i++){
		if(a[i] != 0){
			for(j = 0; j < a[i]; j++){
				printf("%d\t", i);
			}
		}
	}
	return 0;
}