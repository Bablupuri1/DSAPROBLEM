#include<stdio.h>
#include<conio.h>
int main()
{
          int a[5]={10,20,30,40,50};
          int i,found=0;
          int search;
          printf("\nBefore search array elment print:");
          for(i=0; i<=4; i++)
          {
                   printf("%d\n",a[i]);
          }
          printf("\nEnter search array element of present in array:");
          scanf("%d",&search);
          
//logic building for search any element present in array//


for(i=0; i<=4; i++)
{
         if(a[i]==search)
         {
                    
                     found++;
                     break;
                   
         }
         
}
if (found==1)
printf("the element is not present in array element %d:",i);
else
printf("nolt");

getch();
return 0;
}
                         
