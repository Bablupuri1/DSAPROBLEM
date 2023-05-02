#include<stdio.h>
#include<conio.h>


int main()
{
   int arr[]={48,10,23,43,28,26,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   printf("Before sorting array element\n");
   printarr(arr,n);
   heapsort(arr,n);
   printf("\nAfter sorting array element:\n");
   printarr(arr,n);
   getch();
   return 0;
} 
void heapify(int arr[],int n, int i)
{
        int largest=i;
        int left=2*i+1;              //left child //
        int right=2*i+2;             //right child//
        
 //if left child is larger than root//
 
 if(n>left && arr[left]>arr[largest])
 largest=left;
 
 //if right child is larger than root//
 
 if(n>right && arr[right]>arr[largest])
 largest=right;
 
 // if root is not largest//
 
 if(largest!=i)
 {
       //swap arr[i] to arr[largest]//
          int temp=arr[i];
          arr[i]=arr[largest];
          arr[largest]=temp;
 }
}

void heapsort(int arr[], int n)
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify(arr, n,i); 
         
    // One by one extract an element from heap
      
    for (int i = n - 1; i >= 0; i--) { 
              
        /* Move current root element to end*/  
        // swap a[0] with a[i]  
        
        temp = arr[0];  
        arr[0] = arr[i];  
        arr[i] = temp;  
          
       heapify(arr, i, 0);  
    }  
} 

void printarr(arr[], int n)
{    
       for(i=0; i<n; i++)
       {
          printf("%d\t",arr[i]);
       }
}
                               
                          
