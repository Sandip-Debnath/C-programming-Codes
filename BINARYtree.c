#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree *rightnode;
    struct tree *leftnode;
};

struct tree *newnode;

struct tree *create_node(int n){
    newnode=(struct tree*)malloc(sizeof(struct tree));
    if(newnode==NULL){
        printf("Memory Not allocated");
    }
    else{
        newnode->data=n;
        newnode->leftnode=NULL;
        newnode->rightnode=NULL;
        return newnode;
    }
    
} 

struct tree *insert_node(struct tree *root,int n){
    if(root==NULL){
        return create_node(n);
    }
    
    if(n<root->data){
        root->leftnode=insert_node(root->leftnode,n);
    }
    else if(n>root->data){
        root->rightnode=insert_node(root->rightnode,n);
    }
    return root;
}

void preorderTraversal(struct tree *root){
    if(root!=NULL){
        printf(" %d ",root->data);
        preorderTraversal(root->leftnode);
        preorderTraversal(root->rightnode);
    }
}

void postorderTraversal(struct tree *root){
    if(root!=NULL){
        postorderTraversal(root->leftnode);
        postorderTraversal(root->rightnode);
        printf(" %d ",root->data);
    }
}

void inorderTraversal(struct tree *root){
    if(root!=NULL){
        inorderTraversal(root->leftnode);
        printf(" %d ",root->data);
        inorderTraversal(root->rightnode);
    }
}

int main(){
    struct tree *root=NULL;
    int data,ans;
    do
    {
        int choice;
        
        printf("1. Insert Node\n");
        printf("2. Preorder Traversal\n");
        printf("3. Inorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Exit\n");
        printf("Choose operation:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number to insert: ");
                scanf("%d", &data);
                if(root==NULL){
                    root=insert_node(root,data);
                }
                else{
                    insert_node(root,data);
                }
                printf("\n");
                printf("--Inserted--\n");
                printf("\n");
                break;
            case 2:
                printf("Preorder traversal of the binary tree: ");
                preorderTraversal(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder traversal of the binary tree: ");
                inorderTraversal(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal of the binary tree: ");
                postorderTraversal(root);
                printf("\n");
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
        printf("Do you want to continue? If yes, press 1: ");
        scanf("%d", &ans);
    } while (ans == 1);

    return 0;
}

