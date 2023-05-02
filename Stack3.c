#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;

void push(int data)
{
              
              if(top==size-1)
              {
                             printf("Stack is full\n");
              }
              else
              {
                             top++;
                             stack[top]=data;
              }
}


int main()
{
          push(10);
          push(20);
          push(30);
          push(40);
          
          return 0;
          getch();
}
