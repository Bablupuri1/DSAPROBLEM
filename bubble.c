#include<stdio.h>
int main()
{
    int arr[50],size,temp,i,j;
    printf("\nEnter array element:");
    scanf("%d",&size);
    
    printf("Please enter size of array:");
    for(i=0; i<size; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    for(i=0; i<size-1; i++)
    {
      for(j=0; j<size-1; j++)
      {
        if(arr[j]<arr[j+1])
        {
           temp=arr[j+1];
           arr[j+1]=arr[j];
           arr[j]=temp;
        } 
      }
    }
    printf("\nEnter array after sorting:");
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}                                            
