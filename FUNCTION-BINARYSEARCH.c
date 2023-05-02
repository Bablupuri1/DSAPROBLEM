#include<stdio.h>
#include<conio.h>

int binaryserach(int arr[], int low, int high, int search)
{
                     int mid;
                     while(low<=high)
                     {
                        mid=(low+high)/2;
                        if(arr[mid]>search)
                        {
                           high=mid-1;
                        }
                        else if(arr[mid]<search)
                        {
                           low=mid+1;
                        }
                        else if(arr[mid]==search)
                        {
                               return mid;
                        }
                      }
                      return -1;
}                                                                    
                     
                     
                     
                     
                     
                     
                     
                     
                     

int main()
{
          int arr[]={1,2,3,4,5,6,7,8,9,10};
          int low=0; 
          int high=9;
          int found;
          int search=7;
          int searchindex=binarysearch(arr,0,high,search);
          if(searchindex==-1)
          {
          printf("unsuscefful");
          }
          else
          {
           printf("suscessfull :%d",searchindex);
           }                     
          getch();
          return 0;
}
