#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* info;
    
};
struct node* insert(int ,struct node*);
void display(struct node*);
int main()
{
    int n,m;
    struct node* head;
    head=NULL;
    printf("Enter how many number you want to enter");
    scanf("%d",&n);
    printf("Enter array elemets\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter value \n");
        scanf("%d",&m);
        head=insert(m,head);
        display(head);
    }
}
struct node* insert(int m,struct node* head)
{
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=m;
    tmp->info=head;
    head=tmp;
    return head;
}
void display(struct node* head)
{
    struct node* tmp=head;
    printf("List is:\n");
    while (tmp!=NULL) {
        printf("%d",tmp->data);
        tmp=tmp->info;
        
    }
}

