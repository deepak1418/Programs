#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insert (int d)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=head;
    head=temp;
    
}
void insertend(int d)
{
    struct node* temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=d;
    temp1->next=NULL;
    struct node* temp2=head;
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
   // temp2->next=temp1;
}
void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main()
{
    int n,v,l;
    head=NULL;
    printf("ENTER NUMBER OF ELEMENTS YOU WANT\n");
    scanf("%d",&n);
    printf("ENTER ELEMENTS YOU WANT TO ENTER\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v);
        insert(v);
        print();
        
   }
    printf("link list created enter number you want to see at the end of link list");
    scanf("%d",&l);
    insertend(l);
    print();
}
