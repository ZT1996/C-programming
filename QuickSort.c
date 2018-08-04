#include<stdio.h>

int main(void)
{
	int array[10] = {6,1,2,7,9,3,4,5,10,8};
	int right,left,t,i,j;
	int base;
	base = 0;
	right = 0;
	left = 9;
	while(right <= left){
		for(j = left; j >= 0; j--){
			if(array[j] < array[base] || j == i){
				left = j;
				break;
			}
		}

		for(i = right; i <= j; i++){
			if(array[i] > array[base] || j == i){
				right = i;
				break;
			}
		}

		if(i < j){
			t = array[i];
			array[i] = array[j];
			array[j] = t;
		}

		else{
			t = array[i];
			array[i] = array[base];
			array[base] = t;
		}
		
	}
	


	for(i = 0; i < 10; i++){
		printf("%d ",array[i]);
	}
	

	return 0;
}