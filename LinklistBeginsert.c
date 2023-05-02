#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
       int data;
       struct node *next;
};

void traverse(struct node *head)
{
                     while(head!=NULL)
                     {
                            printf("Element :%d\n",head->data);
                            head=head->next;
                     }
}         

struct node * beginsert(struct node *head)
{
       int data;
       struct node *ptr=(struct node *)malloc(sizeof(struct node));
       printf("enter insert element :");
       scanf("%d",&data);
       
       ptr->data=data;
       
       ptr->next=head;
       
         
}

int main()
{
          struct node *head;
          struct node *second;
          struct node *third;
          struct node *four;
          struct node *five;
          
          head=(struct node *)malloc(sizeof(struct node));
          second=(struct node *)malloc(sizeof(struct node));
          third=(struct node *)malloc(sizeof(struct node));
          four=(struct node *)malloc(sizeof(struct node));
          five=(struct node *)malloc(sizeof(struct node));
          
          
          
          head->data=10;
          head->next=second;
          
          second->data=20;
          second->next=third;
          
          third->data=30;
          third->next=four;
          
          four->data=40;
          four->next=five;
          
          five->data=50;
          five->next=NULL;
          
          printf("Before insertion element is");
          traverse(head);
          
          head=beginsert(head);
          
          printf("nAfter insertion element in link ist:\n");
          
          traverse(head);
          
          
          getch();
          return 0;
          
          
}
          
