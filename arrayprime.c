#include<stdio.h>
int main()
{
    int a[10],i,j,count=0;
    printf("\nfind prime number in ten number in array:");
    for(i=0; i<10; i++)
    {
             printf("\nEnter array element:");
             scanf("%d",&a[i]);
             }
             
             for(i=0; i<10; i++)
             {
                      for(j=2; j<=a[i]/2; j++)
                      {
                               if(a[i]%j==0)
                               count++;
                               }
                               if(count==0)
                               printf("%d ",a[i]);
                               }
                               getch();
                               return 0;
                               }
