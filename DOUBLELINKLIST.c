#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node 
{
       
       struct node *prev;
       int data;
       struct node *next;
};
int travesal(struct node *head)
{
                    struct node *ptr;
                    ptr=head;
                    
                    while(ptr!=NULL)
                    {
                             printf("%d ",ptr->data);
                             ptr=ptr->next;
                    }
}
struct node *insert(struct node *head)
{
       int data;
       struct node *ptr=(struct node *)malloc(sizeof(struct node));
       printf("\nEnter the insert data");
       scanf("%d",&data);
       
       ptr->data=data;
       ptr->prev=NULL;
       ptr->next=head;
       head->prev=ptr;
       head=ptr;
       return head;
}
       

int main()
{
          struct node *head=(struct node *)malloc(sizeof(struct node));
          struct node *n1=(struct node *)malloc(sizeof(struct node ));
          struct node *n2=(struct node *)malloc(sizeof(struct node));
          struct node *n3=(struct node *)malloc(sizeof(struct node ));
          
          
          head->prev=NULL;
          head->data=10;
          head->next=n1;
          
          n1->prev=head;
          n1->data=20;
          n1->next=n2;
          
          n2->prev=n1;
          n2->data=30;
          n2->next=n3;
          
          n3->prev=n2;
          n3->data=40;
          n3->next=NULL;
          
          travesal(head);
          head=insert(head);
          printf("after inserting element\n");
          travesal(head);
          
       
          getch();
          return 0;
}
                           
          
       
