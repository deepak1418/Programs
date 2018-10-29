#include<stdio.h>
#include<stdlib.h>
struct node{
    int key;
    struct node* left,*right;
};



struct node* new(int i)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=i;
    temp->left=temp->right=NULL;
    return temp;
}




void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d",root->key);
        inorder(root->right);
    }
}




struct node* insert(struct node *root,int key)
{
    if(root==NULL)
        return new(key);
    
    else if(key<root->key)
        
        root->left=insert(root->left,key);
    
    else
        
        root->right=insert(root->right,key);
    
    return root;
    
    
}



struct node* minvalue(struct node* root)
{
    struct node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
    
}
struct node* del(struct node* root,int key)
{
    if(root==NULL)
        return root;
    if(key<root->key)
        root->left=del(root->left,key);
    else if(key>root->key)
        root->right=del(root->right,key);
    else
    {
        if(root->left==NULL)
        {
            struct node* temp=root->right;
            free(root);
            return temp;
            
        }
        else if(root->right==NULL)
        {
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        
        struct node *temp=minvalue(root->right);
        root->key=temp->key;
        root->right=del(root->right,temp->key);
    }
    return root;
}


int main()
{
    int n,b;
    struct node* root=NULL;
    printf("Enter size: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b);
        root=insert(root,b);
    }
    printf("INorder \n");
    inorder(root);
    printf("enter element you want to del \n");
    scanf("%d",&b);
    root=del(root,b);
    inorder(root);
    
}
