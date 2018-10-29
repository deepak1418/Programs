#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    
};
struct node* insertbeg(struct node* x,int d)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=x;
    x=temp;
    return x;
}

void print(struct node* p)
{
    struct node* tm=p;
    printf("List is:\n");
    while(tm!=NULL)
    {
        printf("%d ",tm->data);
        tm=tm->next;
    }
    printf("\n");
    
}
struct node* sort(struct node* t)
{
    struct node* tm=t,*i,*j;
    int temp;
    for(i=tm;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
        
    }
    return t;
    
}
int main()
{
    struct node* head1=NULL;
    struct node* head2=NULL,*head3=NULL;
    int n1,n2;
    int i,b;
    printf("Enter list size of 1:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        scanf("%d",&b);
        head1=insertbeg(head1,b);
        print(head1);
    }
    head1=sort(head1);
    print(head1);
    
    
    
    
}
