#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* insertbeg(struct node * p,int b)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    
    temp->data=b;
    temp->next=p;
    p=temp;
    return p;
    
}
struct node* reverse(struct node*z)
{
    struct node* prev=NULL;
    struct node* current=z;
    struct node* last=current->next;
    while(current->next!=NULL)
    {
        current->next=prev;
        prev=current;
        current=last;
        last=last->next;
    }
    current->next=prev;
    z=current;
    return z;
    
}
void print(struct node* k)
{
    struct node* temp=k;
    printf("List Is: \n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    struct node *head1,*head2,*head3;
    head1=NULL;
    head2=NULL;
    head3=NULL;
    int j,i,n1,n2,a,b;
    printf("link list 1 size\n");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        scanf("%d",&a);
        head1=insertbeg(head1,a);
        print(head1);
    }
    printf("link list 1size\n");
    scanf("%d",&n2);
    for(j=1;j<=n2;j++)
    {
        scanf("%d",&b);
        head2=insertbeg(head2,b);
        print(head2);
    }
    struct node* t1=head1,*t2=head2;
    int sum,c=0;
    while(t1!=NULL && t2!=NULL)
    {
        sum=t1->data+t2->data+c;
        c=sum/10;
        head3=insertbeg(head3,sum%10);
        t1=t1->next;
        t2=t2->next;
        
    }
    if(t1!=NULL)
       {
           while(t1!=NULL)
           {
           sum=t1->data+c;
           c=sum/10;
           head3=insertbeg(head3,(sum%10));
           t1=t1->next;
           }
       }
       else
       {
           while(t2!=NULL)
           {sum=t2->data+c;
           c=sum/10;
           head3=insertbeg(head3,sum%10);
           t2=t2->next;
           }
       }
    if (c) {
        head3=insertbeg(head3,c);
    }
   
    print(head3);
    printf("\n");

    
}
