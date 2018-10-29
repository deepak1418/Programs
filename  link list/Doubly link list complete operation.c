#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;
void insertbeg()
{ int n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element:\n");
    scanf("%d",&n);
    temp->data=n;
    if(head==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        return;
    }
    
    temp->next=head;
    temp->next->prev=temp;
    temp->prev=NULL;
    head=temp;
    
}
void insertend()
{
    int n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element:\n");
    scanf("%d",&n);
    temp->data=n;
    struct node* tm=head;
    if(head==NULL)
    {
        temp->prev=NULL;
        temp->next=NULL;
        head=temp;
        return;
    }
    else
    {
    while(tm->next!=NULL)
        tm=tm->next;
    temp->next=NULL;
        tm->next=temp;
        temp->prev=tm;
        
    }
    
    
    
    
}
void insertnth()
{
    int n,i,k;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter element:\n");
    scanf("%d",&n);
    temp->data=n;
    struct node* tm=head;
     printf("Enter where you want to enter:\n");
    scanf("%d",&i);
     if(i==1)
     {
         temp->next=head;
         temp->next->prev=temp;
         temp->prev=NULL;
         head=temp;
         
     }
    else
    {
        for(k=1;k<i-1;k++)
        {
            tm=tm->next;
        }
        temp->next=tm->next;
        temp->prev=temp->next->prev;
        temp->next->prev=temp;
        temp->prev->next=temp;
        
        
        
    }
    
    
}
void delbeg()
{
    struct node* temp=head;
    if(head==NULL)
    {printf("list is empty\n");
        return;
    }
    if(head->prev==NULL && head->next==NULL)
    {head=NULL;
        return;
    }
    
    head=temp->next;
    head->prev=NULL;
    free(temp);
    
}
void delnth()
{
    int k,i;
    struct node* t1=head,*t2;
    
    if(head==NULL)
    {printf("list is empty\n");
        return;
    }
    printf("Enter where you want to del:\n");
    scanf("%d",&i);
    if(i==1&&head->prev==NULL && head->next==NULL)
    {head=NULL;
        return;
    }
    if(i==1)
    {
        head=t1->next;
        head->prev=NULL;
        free(t1);
        return;
        
    }
    
   for(k=1;k<i;k++)
   {
       t2=t1;
       t1=t1->next;
   }
    if(t1->next!=NULL)
    {
        t1->next->prev=t2;
        t2->next=t1->next;
    free(t1);
    }
    else
    {
        t2->next=NULL;
        free(t1);
    }
    
}
void delend()
{
    struct node* t1=head,*t2;
    if(head==NULL)
    {printf("list is empty\n");
        return;
    }
    if(head->prev==NULL && head->next==NULL)
    {head=NULL;
        return;
    }
    while(t1->next!=NULL)
    {
        t2=t1;
        t1=t1->next;
    }
    t2->next=NULL;
    free(t1);
    
    
}
void print()
{
    struct node* tm=head;
    while(tm!=NULL)
    {
        printf("%d ",tm->data);
        tm=tm->next;
    }
    printf("\n");
    
}
void Reverse()
{
    struct node* tm=head;
    while(tm->next!=NULL)
        tm=tm->next;
    while(tm!=NULL)
    {
        printf("%d ",tm->data);
        tm=tm->prev;
    }
    printf("\n");
}
int main()
{
    
int n;
head=NULL;
do
{
    printf("CONTENT OF LINK LIST:\n");
    printf("1.Insert in Beg\n");
    printf("2.Insert at nth position\n");
    printf("3.Insert at the end\n");
    printf("4.Deletion from the beg\n");
    printf("5.Deletion from the End\n");
    printf("6.Deletion rom the nth position\n");
    printf("7.Show link list\n");
    printf("8.Reverse\n");
    printf("9.Exit\n");
    scanf("%d",&n);
    
    
    
    switch(n)
    {
        case 1:  insertbeg();
            break;
        case 2:  insertnth();
            break;
        case 3: insertend();
            break;
        case 4: delbeg();
            break;
        case 5: delend();
            break;
        case 6: delnth();
            break;
        case 7: print();
            break;
        case 8: Reverse();
            break;
        case 9: break;
            
            
    }
}while(n!=9);

}
