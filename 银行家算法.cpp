#include <bits/stdc++.h>

void fun(int *available,int **need,int resource,int process){
	
}


void hello(){
	printf("------------------------------\n");//三十字符
	printf("|         银行家算法         |\n");
	printf("------------------------------\n");
}
void scan(){
	printf("请输入系统资源类型数量：");
	int resource;//资源
	scanf("%d",&resource);
	int *available=(int*)malloc(resource*sizeof(int));
	int i,j;
	for(j=0;j<resource;j++)
	{
		printf("请输入R%d资源数量：",j+1);
		scanf("%d",&available[j]);
	}
	printf("\n");
	printf("请输入进程数量：");
	int process;//进程
	scanf("%d",&process);
	int **need=(int**)malloc(process*sizeof(int*));
	for(i=0;i<process;i++)
		need[i]=(int*)malloc(resource*sizeof(int));
	for(i=0;i<process;i++)
	{

		for(j=0;j<resource;j++)
		{
			printf("请输入P%d进程所需R%d资源数量：",i+1,j+1);
			scanf("%d",&need[i][j]);
		}
		printf("\n");
	}
	/*
	for(j=0;j<resource;j++)
	{
		printf("%d ",available[j]);
	}
	printf("\n");
	for(i=0;i<process;i++)
	{

		for(j=0;j<resource;j++)
		{
			printf("%d ",need[i][j]);
		}
		printf("\n");
	}
	*/
	int **n=(int**)malloc(process*sizeof(int*));
	for(i=0;i<process;i++)
	n[i]=need[i];
	fun(available,n,resource,process);
}

int main(){
	hello();
	scan();
	return 0;
}