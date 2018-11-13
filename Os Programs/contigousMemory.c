//best fit, worst fit, first fit
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 50
void firstFit(int mem[],int n,int process[],int m)
{
	int i,j,compeleted[m],allocated[m];
	for(i=0;i<m;i++)
	{
		compeleted[i]=0;
		allocated[i]=-1;
		int currSize=process[i];
		for(j=0;j<n;j++)
		{
			if(mem[j]>=currSize)
			{
				mem[j]-=currSize;
				compeleted[i]=1;
				allocated[i]=j;
				break;
			}
		}
	}
	printf("processNum\tallocationStatus\tmemoryBlock\n");
	for(i=0;i<m;i++)
	{
		if(compeleted[i]==0)
		{
			printf("%d\tNot allocated\n",i);
		}
		else
		{
			printf("%d\t\tallocated\t\t%d\n",i,allocated[i]);
		}
	}
	return;
}
void worstFit(int mem[],int n,int process[],int m)
{
	int i,j,compeleted[m],allocated[m];
	for(i=0;i<m;i++)
	{
		compeleted[i]=0;
		allocated[i]=-1;
		int currSize=process[i];
		int max=INT_MIN,maxPos=-1;
		for(j=0;j<n;j++)
		{
			if(mem[j]>max && mem[j]>=currSize)
			{
				max=mem[j];
				maxPos=j;
			}
		}
		if(max!=INT_MIN)
		{
			mem[maxPos]-=currSize;
			compeleted[i]=1;
			allocated[i]=maxPos;
		}
	}
	printf("processNum\tallocationStatus\tmemoryBlock\n");
	for(i=0;i<m;i++)
	{
		if(compeleted[i]==0)
		{
			printf("%d\tNot allocated\n",i);
		}
		else
		{
			printf("%d\t\tallocated\t\t%d\n",i,allocated[i]);
		}
	}
	return;
}
void bestFit(int mem[],int n,int process[],int m)
{
	int i,j,compeleted[m],allocated[m];
	for(i=0;i<m;i++)
	{
		compeleted[i]=0;
		allocated[i]=-1;
		int currSize=process[i];
		int min=INT_MAX,minPos=-1;
		for(j=0;j<n;j++)
		{
			if(mem[j]<min && mem[j]>=currSize)
			{
				min=mem[j];
				minPos=j;
			}
		}
		if(min!=INT_MAX)
		{
			mem[minPos]-=currSize;
			compeleted[i]=1;
			allocated[i]=minPos;
		}
	}
	printf("processNum\tallocationStatus\tmemoryBlock\n");
	for(i=0;i<m;i++)
	{
		if(compeleted[i]==0)
		{
			printf("%d\tNot allocated\n",i);
		}
		else
		{
			printf("%d\t\tallocated\t\t%d\n",i,allocated[i]);
		}
	}
	return;
}
int main()
{
	int memory[MAX],processSize[MAX];
	int n,m,i;
	printf("Enter the number of memory segments: ");
	scanf("%d",&n);
	printf("Enter the memory segment sizes: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&memory[i]);
	}
	printf("Enter the number of processes: ");
	scanf("%d",&m);
	printf("Enter the process sizes: ");
	for(i=0;i<m;i++)
	{
		scanf("%d",&processSize[i]);
	}
	int ch;
	printf("1.First fit\n");
	printf("2.Worst fit\n");
	printf("3.best fit\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: firstFit(memory,n,processSize,m);
		        break;
		case 2: worstFit(memory,n,processSize,m);
				break;
		case 3: bestFit(memory,n,processSize,m);
				break;
	}
	return 0;
}