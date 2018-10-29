       
#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};

struct Node *top = NULL;

void push(int);
void pop();
void display();
void Peep(int);
void change(int,int);

void main()
{
   int choice, value,k,new,place;
   printf("\n:: Stack using Linked List ::\n");
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Push\n2. Pop\n3. Display\n4. Peep\n5. Change\n6. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	 case 2: pop(); break;
	 case 3: display(); break;
	  case 4: printf("Enter which postion element you want to see from the top ");
	          scanf("%d",&k);
	          Peep(k); 
	          break;
	 case 5: printf("Enter the position of element you want to change\n");
	         scanf("%d",&place);
	         printf("Enter new element");
	         scanf("%d",&new); 
	         change(place,new);
	         break;
	 case 6: exit(0);
	 default: printf("\nWrong selection!!! Please try again!!!\n");
      }
   }
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\nInsertion is Success!!!\n");
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      printf("\nDeleted element: %d", temp->data);
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
      printf("\nStack is Empty!!!\n");
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
   }
void Peep(int k)
   {
   struct Node* temp=top;
   int l=1;
   while(l<k)
   {
   temp=temp->next;
   ++l;
   }
   printf("%d",temp->data);
   printf("\n");
   } 
void change(int p,int n)
   {
     struct Node* temp=top;
   int l=1;
   while(l<p)
   {
   temp=temp->next;
   ++l;
   }
   temp->data=n;
    
   
   }
   
   
   
   
    
