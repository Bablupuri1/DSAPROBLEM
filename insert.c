#include<stdio.h>
int main()
{
    int arr[100];
    int i,val,index;
    val=100;
    index=5;
    for(i=0; i<9; i++)
    {
             printf("\nEnter array element:");
             scanf("%d",&arr[i]);
    }
    
    for(i=8; i>index; i--)
    {
             arr[i+1]=arr[i];
             }
             arr[index]=val;
             printf("\nAfter insert array element:");
             for(i=0; i<10; i++)
             {
                      printf("%d ",arr[i]);
                      }
                      getch();
                      return 0;
                      }
             
