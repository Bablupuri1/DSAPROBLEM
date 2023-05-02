
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10]={10,20,30,40,50};
    int i,j;
    int index;
    index=4;
    int key=30;
    for(i=0; i<=4; i++)
    {
        printf("%d ",arr[i]);
        }
        printf("\n");
    
        
        printf("\nAfter deletion element:");
        for(i=0; i<=4; i++)
        {
                 if(arr[i]==key)
                 
                 
                 
                 for(j=i+1; i<=index; j++)
                 {
                 arr[j-1]=arr[j];
                 }
                 for(i=0; i<4; i++)
                 {
                 printf("%d ",arr[i]);
                 }
                 }
        
        
        
        
        
        getch();
        return 0;
        }
        
    














