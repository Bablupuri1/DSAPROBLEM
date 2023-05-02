
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#define max 5
int a[5], top = -1;
void push();
void pop();
void display();

int main()
{
  int ch;
  printf("1.push or insert\n");
  printf("2. pop or delete\n");
  printf("3. display\n");
  printf("4. end the program");

  while (1)
  {
    printf("\nenter choice number");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
      push();
      break;
    }

    case 2:
    {
      pop();
      break;
    }
    case 3:
    {
      display();
      break;
    }

    case 4:
    {
      exit(0);
      break;
    }
    default:
    {

      printf("wrong choice");
    }
    }
  }
  return 0;
}

void push()
{
  int data;
  if (top == 5 - 1)
  {
    printf("\nOverflow or stack is full");
  }
  else
  {
    printf("Entrer element to be pushed:");
    scanf("%d", &data);
    top++;
    a[top] = data;
  }
}
void pop()
{
  if (top == -1)
  {
    printf("");
  }
  else
  {
    printf("delete element:%d", a[top]);
    top--;
  }
}
void display()
{
  int i;
  if (top >= 0)
  {
    printf("Elements:");
    for (i = 0; i <= top; i++)
    {
      printf("\n%d", a[i]);
    }
  }
  else
  {
    printf("the stack is empty");
  }
}
