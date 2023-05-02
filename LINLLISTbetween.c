#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node 
{
            int data;
            struct node *next;
};


struct node *insertbegining(struct node *head, int data)
{
       struct node *newelement=(struct node *)malloc(sizeof(struct node));
       
       if(head==NULL)
       printf("element we can not insert in link list\n");
       else
       {
                       
                       newelement->data=data;
                       newelement->next=head;
                       return newelement;
       }
}
struct node * last(struct node *head, int data)
{
       struct node *lastinsert=(struct node *)malloc(sizeof(struct node));
       struct node *p=head;
       while(p->next!=NULL)
       {
                        p=p->next;
       }
       lastinsert->data=data;
       p->next=lastinsert;
       lastinsert->next=NULL;
       return head;
}
       
       


struct node * between(struct node *head, int data, int index)
{
       struct node *ptr=(struct node *)malloc(sizeof(struct node));
       struct node *p;
       int i=0;
       p=head;
       
       while(i!=index-1)
       {
                        p=p->next;
                        i++;
       }
       ptr->data=data;
       ptr->next=p->next;
       p->next=ptr;
       return head;
}
       

void traverse(struct node *head)
{
                          while(head!=NULL)
                          {
                                           printf("Element:%d\n",head->data);
                                           head=head->next;
                          }
}

int main()
{
           
           struct node *head=(struct node*)malloc(sizeof(struct node));
           struct node *first=(struct node*)malloc(sizeof(struct node));
           struct node *second=(struct node*)malloc(sizeof(struct node));
           struct node *third=(struct node*)malloc(sizeof(struct node));
           struct node *four=(struct node*)malloc(sizeof(struct node));
           
           head->data=100;
           head->next=first;
           
           first->data=200;
           first->next=second;
           
           second->data=300;
           second->next=third;
           
           third->data=400;
           third->next=four;
           
           four->data=500;
           four->next=NULL;
           printf("Before insert element\n");
           traverse(head);
           head=between(head, 1000,2);
           printf("After between insert in element\n");
           traverse(head);
           head=last(head,2000);
           printf("After ene insert element\n");
           traverse(head);           
          head=insertbegining(head,200);
           printf("After begining inset element\n");
           traverse(head);
           
           getch();
            return 0;
}
           
           
                          
