#include<stdio.h>
#include<stdlib.h>

int front, rear, size;

void enQ(char* Q, char val){
    if((rear+1)%size==front){
        printf("\nQueue is full...");
        return;
    }
    rear=(rear+1)%size;
    Q[rear]=val;
    if(front==-1)front=0;
}

void deQ(char *Q){
    if(front==rear && front==-1){
        printf("\nQueue is empty...");
        return;
    }
    printf("\ndequeued item is\t:\t%c", Q[front]);
    if(front==rear)front=rear=-1;       //if there is only 1 element
    else front=(front+1)%size;
}

void display(char *Q){
    if(front==rear && front==-1){
        printf("\n\nQueue is empty...");
        return;
    }
    int i;
    printf("\n\nThe items in queue are\t:\t");
    for(i=front; i!=rear; i=(i+1)%size)
        printf("%c ", Q[i]);
    printf("%c ", Q[i]);
}

int main(){
    int ch, c;
    front=rear=-1;
    char *Q, el;
    printf("\nEnter the size of queue\t:\t");
    scanf("%d", &size);
    Q=(char*)malloc(size*sizeof(char));
    
    do{
        printf("\n\n-----------------------------------------");
        display(Q);
        printf("\n-----------------------------------------");
        printf("\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter your choice\t:\t");
        scanf("%d", &ch);
        while ( (c == getchar()) != EOF && c != '\n' ) {break; }
        switch(ch){
            case 1 : printf("\nEnter the item to enque\t:\t");
                     scanf("%c", &el);
                     enQ(Q, el);
                     break;
            case 2 : deQ(Q);
                     break;
            case 3 : break;
            default : printf("\nInvalid option...");
        }
    }while(ch!=3);
    
    printf("\n");
    return 0;
}
