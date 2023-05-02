#include<stdio.h>
#include<conio.h>
int main()
{
          int a[5]={90,20,30,60,100};
          int i,found=0;
          printf("\nPrint array element:");
          for(i=0; i<=4; i++)
          {
                   printf("%d \n",a[i]);
          }
          
          int search=100;
          
          //bulding logic for linear search//
          for(i=0; i<=4; i++)
          {
                   if(a[i]=search)
                   {
                                  found++;
                                  break;
                   }
                   
          }
          if(found==1)
          printf("The element is present in arra index is:%d",i);
          else
          printf("the element is not found");
          
                   
          getch();
          return 0;
}
