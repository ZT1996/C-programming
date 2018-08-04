#include<stdio.h>
typedef char VertexType;
typedef int edgeType;
#define MAXVEX 100
#define INFINITY 65535
typedef int Boolean;
Boolean visited[MAX];
typedef struct
{
	VertexType vexs[MAXVEX];
	edgeType arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
}MGraph;

void CreateMGraph(MGraph *G){
	int i,j,k,w;
	printf("请输入顶点数和边数\n");
	scanf("%d,%d",&G->numVertexes,&G->numEdges);

	for(i = 0; i < G->numVertexes;i++){
		scanf(&G->vexs[i]);
	}
	for(i = 0; i < G->numVertexes;i++){
		for(j = 0; j < G->numVertexes;j++){
			G->arc[i][j] = INFINITY;
		}
	}
	for(k = 0; k < G->numEdges;k++){
		printf("输入边(vi,vj)上的下标i,下标j和权w\n");
		scanf("%d,%d,%d",&i,&j,&w);
		G->arc[i][j] = w;
		G->arc[j][i] = G->arc[i][j];
	}
}

void DFS(MGraph G, int i){
	int j;
	visited[i] = TRUE;
	printf("%c",G->vexs[i]);
	for(j = 0; j < G->numVertexes;j++){
		if(G.arc[i][j] == 1 && !visited[j])
			DFS(G,j);
	}
}

void DFSTraverse(MGraph G){
	int i;
	for(i = 0; i < G.numVertexes;i++)
		visited[i] = FALSE;
	for(i = 0; i < G.numVertexes;i++)
		if(!visited[i])
			DFS(G,i);
}

int main(void){
	CreateMGraph(MGraph *G);
	return 0;
}