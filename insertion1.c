#include<stdio.h>
int main()
{
    int a[10],i,j,pos,val;
    for(i=0; i<9; i++)
    {
             printf("\nEnter array element:");
             scanf("%d",&a[i]);
    }
    
    printf("\nEnter possition to insert:");
    scanf("%d",&pos);
    
    printf("\nEnter value of inseret in array:");
    scanf("%d",&val);
    
    for(i=9-1; i>=pos; i--)
    {
             a[i+1]=a[i];
             }
             a[pos]=val;
             
             printf("\narray after insertion:");
             for(i=0; i<10; i++)
             {
                      printf("\n%d",a[i]);
                      }
                      getch();
                      return 0;
                      }
