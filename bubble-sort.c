#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10];
    int i,j,temp;
    for(i=0; i<9; i++)
    {
     printf("\nEnter array element:");
     scanf("%d",&arr[i]);
    }
 //bubble sorting in array logic use for loop and then swap//
 for(i=0; i<9; i++)
 {
   for(j=0; j<9-i-1; j++)
   {
     if(arr[j]>arr[j+1])
     {
        //swap the element//
        
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        //finishing swap element//
     }
   }
 }
 //This code is clear for running and sorting//
 for(i=0; i<9; i++)
 {
   printf("%d\t",arr[i]);
 }
getch();
return 0;
}                                                
 
