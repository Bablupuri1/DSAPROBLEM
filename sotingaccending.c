#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5],i,j,news;
    printf("\nprint array element");
    for(i=0; i<5; i++)
    {
       printf("\nEntyer array element");
       scanf("%d",&arr[i]);
    }
    printf("\n");
   // printf("\nSorting array eleemnt logic coding");
    for(i=0; i<5; i++)
    {
       for(j=i+1; j<5; j++)
       {
          if(arr[i]>arr[j]) 
          {
                news=arr[i];
                arr[i]=arr[j];
                arr[j]=news;
          
                
                }
          }
       }
       
       printf("\nAfter sorting array element:");
       for(i=0; i<5; i++)
       {
          printf("%d\t",arr[i]);
       }
       getch();
       return 0;
    }      
                                    
                                             
    
          
