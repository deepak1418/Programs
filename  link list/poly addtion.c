#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coff;
    int exp;
    struct node* next;
    
};
void print(struct node* q)
{
    struct node* tm=q;
    
    while(tm!=NULL)
    {
        printf("Coff=%d ",tm->coff);
        printf("EXP=%d\n",tm->exp);
        tm=tm->next;
    }
    printf("\n");
}

struct node* insertend(int a,int b,struct node* q)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->coff=a;
    temp->exp=b;
    struct node* tm=q;
    if(tm==NULL)
    {
        temp->next=q;
        q=temp;
        
        
    }
    else
    {
        while(tm->next!=NULL)
        {
            tm=tm->next;
        }
        tm->next=temp;
        temp->next=NULL;
    }
    return q;
    
}

void add(struct node* p,struct node* q)
{
    
   
    struct node* ans;
    ans=NULL;
    struct node* t1=p,*t2=q;
    while(t1!=NULL&&t2!=NULL)
    {
    if(t2->exp>t1->exp)
    {
        ans=insertend(t2->coff,t2->exp,ans);
        t2=t2->next;
    }

    else if(t1->exp>t2->exp)
    {
        ans=insertend(t1->coff,t1->exp,ans);
        t1=t1->next;
    }
     else
     {
           ans=insertend(t1->coff+t2->coff,t1->exp,ans);
         t1=t1->next;
         t2=t2->next;
         
     }
    }
    while(t1!=NULL)
    {
        ans=insertend(t1->coff,t1->exp,ans);
        t1=t1->next;
    }
    while(t2!=NULL)
    {
        ans=insertend(t2->coff,t2->exp,ans);
        t2=t2->next;
    }
    
    print(ans);
    
}

struct node* insert_s(int cof ,int ex ,struct node* q)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->coff=cof;
    temp->exp=ex;
    
    if(q==NULL || ex>q->exp)
    {
        temp->next=q;
        q=temp;
        
    }
    else
    {   struct node* ptr=q;
        while(ptr->next!=NULL && ptr->next->exp>=ex)
            ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
    }
    return q;
}
    

int main()
{
    struct node* head1=NULL,*head2=NULL;
    
    head3=NULL;
    int i,n1,n2,ex,cof;
    printf("how many members arr their in 1 poly\n");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        scanf("%d%d",&cof,&ex);
        head1=insert_s(cof,ex,head1);
        print(head1);
    }
    printf("how many members arr their in 2 poly\n");
    scanf("%d",&n2);
    for(i=1;i<=n2;i++)
    {
        scanf("%d%d",&cof,&ex);
        head2=insert_s(cof,ex,head2);
        print(head2);
    }
    add(head1,head2);
    
    
    
}
