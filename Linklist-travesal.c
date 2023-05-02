#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
 
struct parent
{
    int data;
    struct parent *next;
};

void search(struct node *head, int search)
{
                   struct node *p;
                   p=head;
                   
                   while(p!=NULL)
                   {
                      if(p->data==search)
                      {
                              printf("found sucess\n");
                              break;
                      }
                      p=p->next;
                   }
}                      



struct parent * beginsert(struct parent *head, int data)
{
       struct parent *newnode=(struct parent *)malloc(sizeof(struct parent));
       newnode->next=head;
       newnode->data=data;
       
}
 
void linkedListTraversal(struct parent *i)
{
    while (i != NULL)
    {
        printf("Element: %d\n", i->data);
        i = i->next;
    }
}
 
int main()
{
    struct parent *head;
    struct parent *second;
    struct parent *third;
    struct parent *fourth;
     struct parent *five;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct parent *)malloc(sizeof(struct parent));
    second = (struct parent *)malloc(sizeof(struct parent));
    third = (struct parent *)malloc(sizeof(struct parent));
    fourth = (struct parent *)malloc(sizeof(struct parent));
    five = (struct parent *)malloc(sizeof(struct parent));
 
    // Link first and second nodes
    head->data = 100;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
     // Link four and five nodes
    fourth->data = 66;
    fourth->next = five;
    // Terminate the list at the third node 
    five->data = 90;
    five->next = NULL;
    
    printf("\nBefore insertiohn luink oist element :");
    
 
    linkedListTraversal(head);
    
    head=beginsert(head, 200);
    
    printf("\nAfter insertionj link list elementP:\n");
    
    linkedListTraversal(head);
    search(head,90);
    
    getch();
    return 0;
}
