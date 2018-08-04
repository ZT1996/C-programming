#include"stdio.h"

void recursion(int number){
	int q;
	if(number == 0){
		return;
	}
	q = number / 10;
	recursion(q);
	printf("%d\n", number % 10);
}

int main(void){
	int number = 4267;
	recursion(number);
	return 0;
}


