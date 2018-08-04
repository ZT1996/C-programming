#include<stdio.h>
int main(){
	char ch;

	printf("请输入成绩:");
	scanf("%c",&ch);

	switch(ch){
		case 'A':printf("90+");break;
		case 'B':printf("80-90");break;
		case 'C':printf("70-80");break;
		case 'D':printf("60-70");break;
		case 'E':printf("60一下");break;
		default:printf("请输入有效的成绩!");
	}
	return 0;
}
