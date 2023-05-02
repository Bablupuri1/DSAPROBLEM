#include<stdio.h>
#include<conio.h>

int heapify(int arr[],int n,int i)
{
        int parent=i;
        int left=2*i+1;
        int right=2*i+2;
        
        
        if(left<n && arr[left]>arr[parent])
        parent=left;
        
        if(right<n && arr[right]>arr[parent]);
        parent=right;
        
        if(parent!=i)
        {
                     int temp=arr[i];
                     arr[i]=arr[parent];
                     arr[parent]=temp;
                     heapify(arr,n,parent);
        }
        return 0;
}

int heapsort(int arr[], int n)
{
          for(int i=n/2-1; i>=0; i--)
          
                heapify(arr,n,i);
          
          
          for(int i=n-1; i>=0; i--)
          {
                  int temp=arr[0];
                  arr[0]=arr[i];
                  arr[i]= temp;
                  
                  heapify(arr,i,0);
          }
          return 0;
}


int display(int arr[], int n)
{
                for(int i=0; i<n; i++)
                {
                        printf("%d ",arr[i]);
                }
                return 0;
}

int main()
{
          int arr[]={48, 10, 23, 43, 28, 26, 1};
          int n=sizeof(arr)/sizeof(arr[0]);
          
          printf("Before heap sort array element\n");
          display(arr,n);
          heapsort(arr,n);
          printf("After heap sort array\n");
          display(arr,n);
          getch();
          return 0;
}

                          
        
                
