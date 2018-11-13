//implement paging 
#include <stdio.h>
#include<stdlib.h>
#define MAX 100
int main(int argc, char const *argv[])
{
	int pageSize,physicalMemory,logicalMemory;
	printf("Enter the size of physical memory (bytes): ");
	scanf("%d",&physicalMemory);
	printf("Enter the page size (bytes): ");
	scanf("%d",&pageSize);
	int numOfPages=physicalMemory/pageSize;
	int n,pageTable[MAX][MAX];
	printf("Enter no of processes: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		int j,pagesIth;
		printf("Enter no of pages required by process %d: ",i);
		scanf("%d",&pagesIth);
		if(pagesIth>numOfPages)
		{
			break;
		}
		numOfPages-=pagesIth;
		printf("Enter page table for %dth process(frame location)",i);
		for(j=0;j<pagesIth;j++)
		{
			scanf("%d",&pageTable[i][j]);
		}
	}
	int pno,p,d;
	printf("Enter logical Address : (processNo,page,offset): ");
	scanf("%d%d%d",&pno,&p,&d);
	printf("Physical Address is :%d\n",pageTable[pno][p]*pageSize+d);

	return 0;
}