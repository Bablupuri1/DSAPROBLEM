#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
# define size 5
int top;
int stack[size];
int push(int [],int);
int pop(int []);
int display(int []);

int main()
{
          int data;
          top=-1;
          int choice;
          
          while(1)
          {
                 printf("press 1.push\n");
                 printf("press 2.pop\n");
                 printf("press 3.dislay\n");
                 printf("press 4.exit console\n");
                 printf("Enter choice any number\n");
                 scanf("%d",&choice);
                 
                 switch(choice)
                 {
                      case 1:
                             printf("Enter push element\n");
                             scanf("%d",&data);
                             push(stack,data);
                             break;
                             
                       case 2:
                              pop(stack);
                              break;
                              
                       case 3:
                              display(stack);
                              break;
                              
                       case 4:
                              exit(1);
                              break;
                        default:
                                printf("Please valide choice number") ;
                                break;
                 }  
          }   
          getch();
          return 0;
}    

int push(int stack[], int data)
{
             if(top==size-1)
             {
                            printf("stack is full");
             }
             else
             {
                            top++;
                            stack[top]=data;
             }
             return 0;
}
int pop(int stack[])
{
            if(top==-1)
            {
                       printf("stack is uhnderflow") ;
            }
            else
            {
            printf("delete:%d",stack[top]);
            top--;
            }     
}
int display(int stack[])
{
                int i=0;
                if(top==-1)
                {
                           printf("stack is empty");
                }
                else
                {
                for(i=top; i>=0; i--)
                {
                           printf("element:%d\n",stack[i]);
                }
                }
}
                                   
