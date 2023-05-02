#include<stdio.h>
int main()
{
    int arr[10],size,i,j,temp;
    printf("\nEnter a element:");
    scanf("%d",&size);
    
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    
    for(i=0; i<size-1; i++)
    {
       for(j=0; j<size-1-i; j++)
       {
          if(arr[j+1]>arr[j])
          {
              temp=arr[j+1];
              arr[j+1]=arr[j];
              arr[j]=temp;
          }
       }
    }
    printf("\nAfter sorting array element:");
    for(i=0; i<size; i++)
    {
             printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
                                   
