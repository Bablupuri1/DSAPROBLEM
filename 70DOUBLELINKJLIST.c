  
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *insert(struct node *head)
{
	int data;
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("Enter insertion node\n");
	scanf("%d",&data);
	
	
	                    ptr->data=data;
                          ptr->prev=NULL;
                          ptr->next=head;
                          head->prev=ptr;
                          head=ptr;
	

      // return head; 
 }
       
                                   
struct node *between(struct node *head,int data,int index)
{
       struct node *newe=(struct node *)malloc(sizeof(struct node));
       struct node *p=head;
       int i=0;
       while(i!=index-1)
       {
                        p=p->next;
                        i++;
       }
       newe->data=data; 
       newe->prev=p->next;
       newe->	 
	 
int   travesal(struct node *head)
{
	struct node *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;


	}
	return 0;
}


int   main ()
{
	int data;
	struct node *head;
	struct node *n1;
	struct node *n2;
	struct node *n3;
	struct node *n4;
	head=(struct node *)malloc(sizeof(struct node));
	n1=(struct node *)malloc(sizeof(struct node));
	n2=(struct node *)malloc(sizeof(struct node));
	n3=(struct node *)malloc(sizeof(struct node));
	n4=(struct node *)malloc(sizeof(struct node));
	//clrscr();
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
	n3->next=n4;

	n4->prev=n3;
	n4->data=50;
	n4->next=NULL;



	printf("travesal of doubly linked list");

	travesal(head);
	printf("\n");


     head=insert(head);
	printf("after inseetion\n");
	travesal(head);


	getch();
	return 0;
}

