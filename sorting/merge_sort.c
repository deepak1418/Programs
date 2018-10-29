 #include<stdio.h>
void partition(int[],int,int);
void mergesort(int[],int,int,int);
int  main()
{
	int a[20],n,i;
	printf("How many elements in array: ");
	scanf("%d",&n);
	printf("Enter elements of array: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	partition(a,0,n-1);
	printf("Sorted array: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
    return 0;
}
void partition(int a[],int low,int high)
{
	int mid;
	if(low!=high)
	{
		mid = (low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		mergesort(a,low,mid,high);
	}
}
void mergesort(int a[],int low,int mid,int high)
{
	int final[50],k,i,j;
	i = low;
	j = mid+1;
	k = low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			final[k] = a[i];
			i++;
			k++;
		}
		else
		{
			final[k] = a[j];
			j++;
			k++;
		}	
	}
	while(i<=mid)
	{
		final[k] = a[i];
			i++;
			k++;
	}
	while(j<=high)
	{
		final[k] = a[j];
			j++;
			k++;
	}
	for(i=low;i<=high;i++)
		a[i] = final[i];
}
