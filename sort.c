#include<stdio.h>
int main(void)
{
	int a[5];
	int i, t;
	int j = 0;
	int min;
	
	for(i = 0; i < 5; i++){
		printf("请输入第%d个数字:",i+1);
		scanf("%d", &a[i]);
	}


	while(j < 5){
		min = a[j];
		for(i = j+1; i < 5; i++){
			if(a[i] <= min){
				min = a[i];

				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}	
		}
		j++;
	}

	for(i = 0; i < 5; i++)
		printf("%d\t", a[i]);

	//5, 3, 5, 2, 8

	return 0;
}