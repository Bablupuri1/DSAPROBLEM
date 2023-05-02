#include<stdio.h>
#include<conio.h>
void heapify(int arr[], int size, int i)
{
                 int parent=i;
                 int left=2*i+1;
                 int right=2*i+2;
                 
                 //if left child gteater than parent then//
                 if(size>left && arr[left]>arr[parent])
                    parent=left;
                    
                 //if right child greater than parent//
                   if(size>right && arr[right]>arr[parent])
                      parent=right;
                      
                 //if parent is not equal to initialize parent then//
                 if(parent!=i)
                 {
                               int temp=arr[i];
                               arr[i]=arr[parent];
                               arr[parent]=temp;
                               
                               heapify(arr,size,parent);
                 }
}   


void heap(int arr[], int size)
{    
              int i;              
              for(i=size/2-1; i>=0; i--)
              heapify(arr,size,i);
              
              for(i=size-1; i>=0; i--)
              {
                            int temp=arr[0];
                            arr[0]=arr[i];
                            arr[i]=temp;
                            
                            heapify(arr ,size,0);
              }
}

void printarr(int arr[], int size)
{    
                  
                
            
                  }
                  for(int i=0; i<size; i++)
                  {
                           printf("%d ",arr[i]);
                  }
}  

int  main()
{
           int arr[]={10,20,30,40,1};
           int size=sizeof(arr) /sizeof(arr[0]);
           printf("Before heap sort array element:");
           printarr(arr,size);
           heap(arr,size);
           printf("\nAfter heapify element of arrayP:");
            printarr(arr,size);
                     
           
          
           getch();
           return 0;
}


