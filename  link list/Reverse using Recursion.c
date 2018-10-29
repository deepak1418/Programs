#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head;
struct node * p;
void reverse(struct node* p){
    
    if(p->next==NULL)
    {
        head=p;
        return;
        
    }
    reverse(p->next);
    struct node * q=p->next;
    q->next=p;
    p->next=NULL;
    
    
}


void insert(int d)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=head;
    head=temp;
}

void print()
{
struct node* temp=head;
    printf("Link list Elements:\n");
while(temp!=NULL)
{
 printf("%d ",temp->data);
 temp=temp->next;
}printf("\n");
}
int main()
{
 head=NULL;
    
    int i,b,n;
    printf("How many elemet you want to enter:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        insert(b);
        print();
    }
    p=head;
    
    reverse(p);
    printf("Reverse of the link list\n");
    print();
 

}

