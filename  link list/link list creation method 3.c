#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* info;
    
};

void insert(struct node**,int);
void display(struct node**);
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
        insert(&head,m);
        display(&head);
    }
}
void insert(struct node** head,int m)
{
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=m;
    tmp->info=*head;
    *head=tmp;
}
void display(struct node** head)
{
    struct node* tmp=*head;
    printf("List is:");
    while (tmp!=NULL)
    {
        printf("%d",tmp->data);
        tmp=tmp->info;
        
    }
    printf("\n");
}

