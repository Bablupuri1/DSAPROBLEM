#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10],i;
    int *p;
    int sum=0;
    
    for(i=0; i<10; i++)
    {
        printf("\nEnter array element:");
        scanf("%d",&arr[i]);
    }
     p[i]=arr[0];
    
    for(i=0; i<10; i++)
    {
      sum=sum+arr[p+i];
    }
    printf("sum=%d",sum);
    getch();
    return 0;
}            
