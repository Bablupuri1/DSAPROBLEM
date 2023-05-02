#include<stdio.h>
#include<conio.h>
int natural(int n,int i);
int main()
{
    int n,i=1;
    printf("\nEnter any number");
    scanf("%d",&n);
    natural(n,i);
    getch();
    return 0;
}

int natural(int n, int i)
{
    if(i<=10)
    {
        printf("%d ",i);
         natural(i+1);
         }
         else
         return 1;
}     
