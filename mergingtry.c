#include<stdio.h>
int main()
{
    int a1[5]={1,2,3,4,5};
    int a2[5]={6,7,8,9,10};
    int a3[10];
    int i=0,index=0;
   
    for(i=0; i<10; i++)
    {
          if(i>4)
          {
                 a1[i]=a3[index];
                 index++;
          }
          a3[i]=a1[i];
    }
    printf("\nAfter merging array element:");    
    for(i=0; i<10; i++)
    {
             printf("%d ",a3[i]);
    }
              
       
     getch();
     return 0;
}                          
