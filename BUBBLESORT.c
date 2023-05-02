#include<stdio.h>
#include<conio.h>

int main()
{
          int arr[]={10,5,12,3,45,46};
          int i,j;
          int temp;
          
          printf("Before bubble  sort element\n");
          for(i=0; i<=5; i++)
          {
                   printf("%d ",arr[i]);
          }
          printf("\n");
          
          for(i=0; i<=5; i++)
          {
          
          for(j=i+1; j<=5; j++)
          {
                     if(arr[j]<arr[i])
                     {
                                      temp=arr[i];
                                      arr[i]=arr[j];
                                      arr[j]=temp;
                     }
          }
}
                    
          printf("after bubble  sort\n");
          for(i=0; i<=5; i++)
          {
                   printf("%d ",arr[i]);
          }
          
          
          getch();
          return 0;
}
                   
