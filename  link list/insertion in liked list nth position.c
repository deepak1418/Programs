#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
struct node* head;
void insert(int d,int n)
{
    struct node* temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=d;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    struct node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
}
void print()
{
    struct node* temp2=head;
    while(temp2!=NULL)
    {printf("%d ",temp2->data);
        temp2=temp2->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    int n,v,k;
    printf("Enter how many number you want to enter,and their index position");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   scanf("%d%d",&v,&k);
        insert(v,k);}
    print();
    return 0;
    
}

