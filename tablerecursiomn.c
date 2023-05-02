#include<stdio.h>
#include<conio.h>
int table(int n, int i);
int main()
{
    int n,i=1;
    printf("\nEnter any number");
    scanf("%d",&n);
    table(n,i);
    getch();
    return 0;
    
    
}
int table(int n, int i)
{
     if(i<=10)
     {
          printf("\n %d*%d=%d",i,n,n*i);
          table(n,i+1);
     }
     //else
     //return 1;
}
            

    
