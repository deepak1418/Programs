#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* reverse(struct node* p)
{
    struct node* prev=NULL;
    struct node* current=p;
    struct node* last=current->next;
   
  
        while(current->next!=NULL)
        {
            current->next=prev;
            prev=current;
            current=last;
            last=last->next;
        }
        current->next=prev;
        p=current;
        
    
    return p;
    
}

struct node* insertend(struct node* z,int d)
{
   
    
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    if(z==NULL)
    {
        temp->next=z;
        z=temp;
        
    }
    else
    {
        struct node* tm=z;
        while(tm->next!=NULL)
        {
            tm=tm->next;
        }
        tm->next=temp;
        temp->next=NULL;
        
    }
    return z;
}
void print(struct node* z)
{
    struct node* temp=z;
    printf("Link list Elements:\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }printf("\n");
}
int main()
{
    struct node *head1;
    struct node *head2;
    struct node *head3,*P,*q;
    head1=NULL;
    head2=NULL;
    head3=NULL;
    
    int i,b,ca,n,n1;
    printf("How many elemet you want to enter for 1:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b);
        head1=insertend(head1,b);
        print(head1);
    }
    printf("How many elemet you want to enter for 2:\n");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        scanf("%d",&ca);
        head2=insertend(head2,ca);
        print(head2);
    }

    
    int c=0,sum,rem;
    head1=reverse(head1);
    
    head2=reverse(head2);
    
    struct node* t1=head1,*t2=head2;
    while(t1!=NULL &&t2!=NULL)
    {
        sum=t1->data+t2->data+c;
        c=sum/10;
        head3=insertend(head3,sum%10);
        t1=t1->next;
        t2=t2->next;
        
        
    }
    if(t2!=NULL)
    {
        while(t2!=NULL)
        {
             sum=t2->data+c;
            c=sum/10;
        
            head3=insertend(head3,sum%10);
            t2=t2->next;
        }
        
    }
    else
    {
        while(t1!=NULL)
        {
            sum=t1->data+c;
            c=sum/10;
            
            head3=insertend(head3,sum%10);
            t1=t1->next;
        }
        
    }
    if(c)
    {
        head3=insertend(head3,c);
    }
    head3=reverse(head3);
    
    printf("Reverse of the link list\n");
    print(head3);
    
    
}

