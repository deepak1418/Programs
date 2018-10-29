#include<stdio.h>
int partion(int[],int,int);
void quicksort(int[],int,int);
int main()
{
    int arr[100],low=0,n;
    printf("Enter how many numbers you want");
    scanf("%d",&n);
    printf("Enter array Elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,low,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
void quicksort(int arr[],int low,int high)
{
    int pi;
    if(low<high)
    {
        pi=partion(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int partion(int arr[],int low, int high)
{
    int pivot=arr[high];
    int i=low-1,j,temp;
    for(j=low;j<high;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return (i+1);
    
}
