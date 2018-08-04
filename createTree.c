#include<stdio.h>
void CreateBiTree(BiTree *T){
	char ch;
	scanf("%c", &ch);
	if(ch == '#'){
		*T = NULL;
	}
	else{
		*T = (BiTree)malloc(sizeof(BiTNode));
		if(!*T){
			exit(OVERFLOW);
		}
		CreateBiTree(&(*T)->lchild);
		(*T)->data = ch;
		CreateBiTree(&(*T)->rchild);
	}
}