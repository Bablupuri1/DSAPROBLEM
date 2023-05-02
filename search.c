#include<stdio.h>
int main()
{
    int arr[10],i;
    int search;
    int found=0;
    
    
    for(i=0; i<10; i++)
    {
        printf("\nEnter array element:");
        scanf("%d",&arr[i]);
        }
        printf("\n");
        
        printf("\nEnter  search array element:");
        scanf("%d",&search);
        
        for(i=0; i<10; i++)
        {
            if(arr[i]==search)
            {
                printf("searching elemenet=%d",i+1);
                 found=1;
             }
        }
           
        if(found==0)
        {
                printf("\nThe element is not present in array element:");
                }         
                 
               

           getch();
           return 0;
                 }
                 
