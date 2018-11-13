//page replacement algortihms
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#define MAX 50
void display(char *str)
{
	int i,n=strlen(str);
	for(i=0;i<n;i++)
	{
		printf("%c ",str[i]);
	}
	printf("\n");
}
void fifo(char *str,int numOfFrames)
{
	int i,j,n=strlen(str);
	int pageFaults=0;
	char frames[numOfFrames];
	int replace=0;
	for(i=0;i<numOfFrames;i++)
	{
		frames[i]='A';
	}
	for(i=0;i<n;i++)
	{
		int hit=-1;
		for(j=0;j<numOfFrames;j++)
		{
			if(frames[j]==str[i])
			{
				hit=1;
				break;
			}
		}
		if(hit==-1)
		{
			//pageFault
			pageFaults++;
			frames[replace]=str[i];
			replace=(replace+1)%(numOfFrames);
			printf("pageFault!\n");
		}
		else
		{
			printf("Page Hit!!\n");
		}
		display(frames);
	}
	printf("No of page faults: %d\n",pageFaults);

}
void lru(char *str,int numOfFrames)
{
	int pageFaults=0,i,j,n=strlen(str);
	char frames[numOfFrames];
	int emptyFrames=0;
	for(i=0;i<numOfFrames;i++)
	{
		frames[i]='A';
	}
	for(i=0;i<n;i++)
	{
		char curr=str[i];
		int hit=-1;
		for(j=0;j<numOfFrames;j++)
		{
			if(frames[j]==curr)
			{
				hit=1;
				break;
			}
		}
		if(hit==1)
		{
			//page hit
			printf("Page Hit!!\n");
			display(frames);
		}
		else
		{
			printf("Page Fault!!\n");
			pageFaults++;
			if(emptyFrames<=numOfFrames-1)
			{
				frames[emptyFrames]=curr;
				emptyFrames++;
				display(frames);
				continue;
			}
			int map[numOfFrames];
			int k=0,s,pos;
			int count=0;
			for(k=0;k<numOfFrames;k++)
				map[k]=0;
			for(k=i-1;k>=0;k--)
			{
				if(count==numOfFrames-1)
				{
					break;
				}
				for(s=0;s<numOfFrames;s++)
				{
					if(str[k]==frames[s])
					{
						map[s]=1;
						count++;
						break;
					}
				}
			}
			for(k=0;k<numOfFrames;k++)
			{
				if(map[k]==0)
				{
					pos=k;
					break;
				}	
			}
			frames[pos]=str[i];
			display(frames);
		}
	}
	printf("Number of Page Faults: %d\n",pageFaults);
	return;
}
int main()
{
	char pageString[MAX];
	int ch,numOfFrames;
	printf("enter number of frames: ");
	scanf("%d",&numOfFrames);
	printf("Enter the page string: ");
	scanf("%s",pageString);
	printf("1.FIFO\n");
	printf("2.LRU\n");
	printf("3.Optimal\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: fifo(pageString,numOfFrames);
				break;
		case 2: lru(pageString,numOfFrames);
				break;
		case 3: //optimal(pageString,numOfFrames);
				break;
	}
	return 0;
}