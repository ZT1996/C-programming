#include<stdio.h>
int main(void)
{
	int number[5] = {12,35,99,18,76};
	int i,t,j;
	for(j = 0; j < 5; j++){
		for (i = 0; i < 5-j-1; i++){
			if(number[i] < number[i+1]){
				t = number[i];
				number[i] = number[i+1];
				number[i+1] = t;
			}
		}
	}
	
	for(i = 0; i < 5; i++)
		printf("%d\t", number[i]);
	return 0;
}

// int main(void)
// {
// 	int a[100],i,j,t,n;
// 	scanf("%d",&n);
// 	for(i = 1; i <= n; i++)
// 		scanf("%d",&a[i]);

// 	for(i = 1; i <= n-1; i++){
// 		for(j = 1; j < n-1; j++){
// 			if(a[j] < a[j+1]){
// 				t = a[j];
// 				a[j] = a[j+1];
// 				a[j+1] = t;
// 			}
// 		}
// 	}
// 	for(i = 1; i <= n; i++)
// 		printf("%d ", a[i]);
// 	getchar();
// 	getchar();
// 	return 0;
// }