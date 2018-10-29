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
struct node * con(struct node* p,struct node* q)
{
    struct node *tm1=p,*tm2=q;
    while(tm1->next!=NULL)
    {
      
        tm1=tm1->next;
    }
    tm1->next=tm2;
    return p;
    
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
struct node* insort(struct node* t,int k)
{
    struct node* tm=t,*tm2;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=k;
    while(tm->data<temp->data)
    {
        tm2=tm;
        tm=tm->next;
        
    }
    temp->next=tm2->next;
    tm2->next=temp;
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
    printf("Enter the Element you want to enter");
    int el;
    scanf("%d",&el);
    head1=insort(head1,el);
    print(head1);
    
    
    
    
    
}
