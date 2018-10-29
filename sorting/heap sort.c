#include<stdio.h>
void heapifiy(int[],int,int);
void heapsort(int[],int);
void display(int[],int);
int main()
{
    int arr[50],n,j;
    printf("Enter number of positive Elements you want to short");
    scanf("%d",&n);
    for( j=0;j<n;j++)
        scanf("%d",&arr[j]);
    heapsort(arr,n);
    display(arr,n);
    //for( j=0;j<n;j++)
      //  printf("%d ",arr[j]);
    
    return 0;
    
}
void heapsort(int arr[],int n)
{ int i,k,tp;
    for( i=n/2-1;i>=0;i--)
        heapifiy(arr,n,i);
    for(k=n-1;k>=0;k--)
    {
        tp=arr[0];
        arr[0]=arr[k];
        arr[k]=tp;
        heapifiy(arr,k,0);
        
    }
        
}
void heapifiy(int arr[],int n,int i )
{
    int largest=i,temp;
    int l=(2*i)+1;
    int r=(2*i)+2;
    if(l<n && arr[l]>arr[largest])
        largest=l;
    if(r<n&&arr[r]>arr[largest])
        largest=r;
    if(largest!=i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapifiy(arr,n,largest);
        
    }
    
}
void display(int arr[],int n)
{
    int s;
    printf("Sorted array is\n");
    for(s=0;s<n;s++)
    printf("%d ",arr[s]);
}
