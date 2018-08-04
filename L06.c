/*
 * 整数类型
 *short int
 int 
 long int 
 long long int
浮点数类型
 float
 double
 long double
 字符类型
 char
布尔类型
 _Bool
枚举类型
 enum

 sizeof运算符
 sizeof(object);sizeof(对象)
 sizeof(type_name)

 signed-负数正数都可以
 unsigned-正数
 * */
#include<stdio.h>
int main(){
	int i;
	char j;
	float k;
	
	i = 123;
	j = 'C';
	k = 3.14;

	printf("size of int is %d\n",sizeof(int));
	printf("size of i is %d\n",sizeof(i));
	printf("size of char is %d\n",sizeof(char));
	printf("size of j is %d\n",sizeof(j));
	printf("size of float is %d\n",sizeof(float));
	printf("size of k is %d\n",sizeof(k));
	return 0;

}
