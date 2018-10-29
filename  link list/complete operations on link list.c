#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
void insertbeg()
{
    int n,i,c;
    printf("Enter Element :\n");
    scanf("%d",&i);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=i;
    temp->next=head;
    head=temp;
    
   
}
void insertend()
{   int i;
    printf("Enter Element :\n");
    scanf("%d",&i);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=i;
    if(head==NULL)
    {
        temp->next=head;
        head=temp;
        
    }
    else
    {
        struct node* tm=head;
        while(tm->next!=NULL)
        {
            tm=tm->next;
        }
        tm->next=temp;
        temp->next=NULL;
        
    }
}
void insertn()
{
    int n,i,k;
    printf("Enter Element :\n");
    scanf("%d",&i);
    printf("Enter where you want you enter the node");
    scanf("%d",&n);
    
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=i;
    struct node* tm=head;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
        
    }
    else
    {
        for(k=1;k<n-1;k++)
        {
            tm=tm->next;
        }
        temp->next=tm->next;
        tm->next=temp;
        
    }
}
void delbeg()
{
    struct node*temp=head;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
        
    }
    else{
    head=temp->next;
    
    free(temp);
    }
}
void delend()
{
    struct node* temp=head;
    struct node* temp1;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        head=NULL;
    }else
    {
    
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
   temp1->next=NULL;
    free(temp);
    }
    
    
    
}
void deln()
{
    int i,n;
    printf("Which node you want to del\n");
    scanf("%d",&n);
  
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(n==1)
    {
        struct node* temp=head;
        head=temp->next;
        free(temp);
    
    }
    else
    {
        
            struct node* temp1=head;
            struct node* tem;
            
            for( i=1;i<n;i++)
            {
                tem=temp1;
                temp1=temp1->next;
            }
            tem->next=temp1->next;
            free(temp1);
            
       
        
    }
}
void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }printf("\n");
}

int main()
{int n;
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
     printf("8.Exit\n");
    scanf("%d",&n);
    
        
    
    switch(n)
    {
        case 1:  insertbeg();
                break;
        case 2:  insertn();
            break;
        case 3: insertend();
            break;
        case 4: delbeg();
            break;
        case 5: delend();
            break;
        case 6: deln();
            break;
        case 7: display();
            break;
        case 8: break;
            
            
    }
    }while(n!=8);
    
}
