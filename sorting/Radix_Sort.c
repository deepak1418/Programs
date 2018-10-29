#include<stdio.h>
#include<math.h>
#define size 100


int max_ele(int a[],int n)
{ int max=a[0],i;
  for(i=1;i<n;i++)
  { if(a[i]>max)
    { max=a[i];
	}
  }
  return max;
}

int digit_count(int num)
{ int count=0;
  while(num)
  { num/=10;
    count++;
  }
  return count;
}

void rsort(int a[],int b[],int n,int d)
{ int c[10],i;
  for(i=0;i<10;i++)
   c[i]=0;
  
  
  for(i=0;i<n;i++)
   c[(a[i]/d)%10]+=1;
  
  
  for(i=1;i<10;i++)
  c[i]+=c[i-1];
  
  
  for(i=n-1;i>=0;i--)
  { b[c[(a[i]/d)%10]-1]=a[i];
    c[(a[i]/d)%10]-=1;
  }
  
  for(i=0;i<n;i++)
   a[i]=b[i];
    
}

int main()
{ int a[size],b[size],i,n,d,max;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
  { scanf("%d",&a[i]);
  }
  
  max=max_ele(a,n);
  
  d=digit_count(max);

  
  for(i=0;i<d;i++)
  { rsort(a,b,n,pow(10,i));
  }
  
  printf("Sorted array is: ");
  for(i=0;i<n;i++)
  { printf("%d ",b[i]);
  }

}
