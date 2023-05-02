#include<stdio.h>
#include<conio.h>
int main()
{
          int a[10]={1,2,3,4,5,6,7,8,9,10};
          int start=0,end=10,mid,search=11;
          int f=0;
          int i;
        
          for(i=0; i<=10; i++)
          {
          
                       mid=(start+end/2);
                       
                      if(search>a[mid])
                      {
                         start=mid+1;
                      }
                      else if(search<a[mid])
                      {
                         end=mid-1;
                      }
                      else if(a[mid]==search)
                      {
                         f++;
                         break;
                      }
                        
                       
          }
          if(f==1)
          printf("The element is present ");
          else
          printf("The element is not presewnt in array");
          getch();
          return 0;
}
          
