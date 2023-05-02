#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node 
{
       int data;
       struct node *left;
       struct node *right;
};
struct node *createnode(int data)
{
       struct node *n=(struct node *)malloc(sizeof(struct node));
       
       n->data=data;
       n->left=NULL;
       n->right=NULL;
       return n;
}
int preorder(struct node *root)
{
                    if(root!=NULL)
                    {
                                  printf("%d ",root->data);
                                  preorder(root->left);
                                  preorder(root->right);
                    }
}
int inorder(struct node *root)
{
                   if(root!=NULL)
                   {
                                 inorder(root->left);
                                 printf("%d ",root->data);
                                 inorder(root->right);
                   }
}
int postorder(struct node *root)
{
                     if(root!=NULL)
                     {
                                   postorder(root->left);
                                   postorder(root->right);
                                   printf("%d ",root->data);
                     }
}
int main()
{
          struct node *p=createnode(4);
          struct node *p1=createnode(2);
          struct node *p2=createnode(1);
          struct node *p3=createnode(7);
          struct node *p4=createnode(5);
          struct node *p5=createnode(8);
          struct node *p6=createnode(3);
          struct node *p7=createnode(6);
          
          p->left=p1;
          p->right=p2;
          
          p1->left=p3;
          p1->right=p4;
          
          p2->left=p5;
          p2->right=p6;
          
          p3->left=p7;
          
          preorder(p);
          printf("\n");
          inorder(p);
          printf("\n");
          postorder(p);
          
          
          getch();
          return 0;
}
          
          
