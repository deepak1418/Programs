#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head;
void reverse(){
    struct node* prev=NULL;
    struct node* current=head;
    struct node* last=current->next;
    if(head==NULL)
    {printf("list is empty");
        return;
    }
   
    else
    {
       while(current->next!=NULL)
       {
           current->next=prev;
           prev=current;
           current=last;
           last=last->next;
       }
        current->next=prev;
        head=current;
        
    }
    
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
    
    reverse();
    printf("Reverse of the link list\n");
    print();
 

}

