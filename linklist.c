#include<stdio.h>
#include<conio.h>

struct node
{
       int data;
       struct node *next;
};

struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin delete();
void last delete();

void random delete();
void display();
void search();
void main()
{
     int choice=0;
     while(choice!=9)
     {
         printf("\n\n**********main menu******\n") ;
         printf("\nchoice one option from the following list....\n");
         printf("\n=======================\n");
         printf("\n1.insert in begining\n2.insert at last\n3.insert at any random location\n4.delete from begining\n5.delete from last\n6.delete node after specified location\n7.search for an element\n8.show\n9.exit\n");
         printf("\,enter your choice number");
         
         switch(choice)
         {
               case 1:
                    beginsert();
                    break;
                    
               case 2:
                  lastinsert();
                  break;
                         
               case 3:
                    randominsert();
                    break;
                              
               case 4:
                    begin delete();
                    break;
                              
               case 5:
                    last delete();
                    break;
                                   
               case 6:
                    random delete();
                    break;
                                        
               case 7:
                    search();
                    break;
                                             
               case 8:
                    display();
                    break;
                                                  
               case 9:
                    exit(0);
                    break;
                                                       
               default:
                    printf("please enter valid choice");
         }
     }
} 

void beginsert()
{
     struct node *ptr;
     int item;
     ptr=(struct node*)malloc(sizeof(struct node*));
     
     if(ptr==null)
     {
         printf("\noverflow");
     }
     else
     {
       printf("\nEnter value\n");
       scanf("%d",&item);
       ptr+->data=item;
       ptr->next=head;
       head=ptr;
       printf("\nnode inserted")
     }
}
  
                      
                              
                                 
                    

  
  
  
  
  
  
  
  
  
  
  
  
  struct node
{
       int data;
       struct node *next;
       
};
struct node *head,*ptr;
ptr=
            
