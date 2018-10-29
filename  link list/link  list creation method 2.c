#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* info;
    
};
struct node* head;
void insert(int);
void display();
int main()
{
    int n,m;
    head=NULL;
    printf("Enter how many number you want to enter");
    scanf("%d",&n);
    printf("Enter array elemets\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter value \n");
        scanf("%d",&m);
        insert(m);
        display();
    }
}
void insert(int m)
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=m;
    tmp->info=head;
    head=tmp;
}
void display()
{
    struct node* tmp=head;
    printf("List is:");
    while (tmp!=NULL)
    {
        printf("%d",tmp->data);
        tmp=tmp->info;
        
    }
    printf("\n");
}

