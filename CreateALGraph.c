#include<stdio.h>
typedef char VertexType;
typedef int EdgeType;

typedef struct EdgeNode
{
	int adjvex;
	EdgeType weight;
	struct EdgeNode *next;
}EdgeNode;

typedef struct VertexNode
{
	VertexType data;
	EdgeNode *firstedge;
}VertexNode,AdjList[MAXVEX];

typedef struct 
{
	AdjList adjList;
	int numVertexes,numEdges;
}GraphAdjList;

void CreateALGraph(GraphAdjList *G){
	int i,j,k;
	EdgeNode *e;
	printf("请输入顶点数和边数:\n");
	scanf("%d,%d",&G->numVertexes, &G->numEdges);
	for(i = 0;i < G->numVertexes;i++){
		scanf(&G->adjList[i].data);
		G->adjList[i].firstedge = NULL;
	}
	for(k = 0;k < G->numEdges;k++){
		printf("输入边(vi,vj)上的顶点序号:\n");
		scanf('%d,%d',&i,&j);
		e = (EdgeNode *)malloc(sizeof(EdgeNode));
		e->adjvex = j;
		e->next = G->adjList[i].firstedge;
		G->adjList[i].firstedge = e;

		e = (EdgeNode *)malloc(sizeof (EdgeNode));
		e->adjvex = i;
		e->next = G->adjList[j].firstedge;
		G->adjList[j].firstedge = e;
	}
}

void DFS(GraphAdjList GL,int i){
	EdgeNode *p;
	visited[i] = TRUE;
	printf("%c\n", GL->adjList[i].data);
	p = GL->adjList[i].firstedge;
	while(p){
		if(!visited[p->adjvex])
			DFS(GL,p->adjvex);
		p = p->next;
	}
}

void DFSTraverse(GraphAdjList GL){
	int i;
	for(i = 0; i < GL->numVertexes;i++)
		visited[i] = FALSE;
	for(i = 0; i < GL->numVertexes;i++)
		if(!visited[i])
			DFS(GL,i);
}

int main(void){

}

void BFSTraverse(MGraph G){
	int i,j;
	Queue Q;
	for(i = 0; i < G.numVertexes;i++){
		visited[i] = FALSE;
	}
	InitQueue(&Q);
	for(i = 0; i < G.numVertexes;i++){
		if(!visited[i]){
			visited[i] = TRUE;
			printf("%c",G.vexs[i]);
			EnQueue
		}
	}
}

































