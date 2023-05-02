#include<stdio.h>
int main()
{
    int arr[10]={50,400,30,20,10};
    int i,j,temp;;
    for(i=0; i<5; i++)
    {
      printf("%d ",arr[i]);
    } 
    for(i=0; i<5; i++)
    {
       for(j=0; j<i; j++)   
       {   
           if(arr[j]>arr[j+1])
           {
             temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              j--;
              i--;
           }              
          
       }
    }
       
       printf("\nAfter sorting arrray:");
       for(i=0; i<5; i++)
       {
          printf("%d ",arr[i]);
       } 
       
                            
    
    
    
    
    getch();
    return 0;
}       
