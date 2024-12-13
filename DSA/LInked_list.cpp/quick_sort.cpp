#include<iostream>
using namespace std;

void swaps(int *arr ,int a, int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
int partition(int *arr,int l,int r){
    int pivot=arr[r];
     int j=l-1;
    for (int i = l; i < r; i++)
    {
       
        if (arr[i]<pivot)
        {
            j++;
            swaps(arr,j,i);
            /* code */
        }
        
        /* code */
    }
    swaps(arr,j+1,r);
    return j+1;
    
}
void quicksort(int *arr,int l,int r){
    if (l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
        /* code */
    }
    
}

int main()
{
    const int n = 6;
    int arr[n] = {1, 4, 6, 3, 8, 9};
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " --> ";
    }

    return 0;
 return 0;
}