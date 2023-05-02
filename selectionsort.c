#include<stdio.h>
#include<conio.h>

int main()
{
          int arr[]={10,5,12,3,45,46};
          int i,j;
          int small,temp;
          
          printf("Before selection sort element\n");
          for(i=0; i<=6; i++)
          {
                   printf("%d ",arr[i]);
          }
          printf("\n");
          
          for(i=0; i<=5; i++)
          {
          small=i;
          
          for(j=i+1; j<=5; j++)
          {
                    if(arr[small]>arr[j])
                    small=j;
          }
           temp=arr[small];
          arr[small]=arr[i];
          arr[i]=temp;
          }
          printf("after selection sort\n");
          for(i=0; i<=6; i++)
          {
                   printf("%d ",arr[i]);
          }
          
          
          getch();
          return 0;
}
                   
