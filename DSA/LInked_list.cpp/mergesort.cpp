#include <iostream>
using namespace std;
void merge(int *arr, int l, int mid, int r)
{
    int lenth1 = mid - l + 1;
    int lenth2 = r - mid;
    int ar[lenth1];
    int ar2[lenth2];
    int f=l;
    for (int i = 0; i < lenth1; i++)
    {
        /* code */
        ar[i] = arr[f++];
    }

    for (int i = 0; i < lenth2; i++)
    {
        /* code */
        ar2[i] = arr[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l; // because we want to add values in origional array from start of l
    while (i < lenth1 && j < lenth2)
    {
        /* code */
        if (ar[i] < ar2[j])
        {
            arr[k] = ar[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = ar2[j];
            k++;
            j++;
        }
    }
    while (i < lenth1)
    {
        arr[k] = ar[i];
         k++;
         i++;
    }

    while (j < lenth2)
    {
        arr[k] = ar2[j];
         k++;
         j++;
    }
}
void mergesort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r); // also taking mid as we want to sort from left to mid and from mid to right thenn merge
        }
}
int main()
{
    const int n = 6;
    int arr[n] = {1, 4, 6, 3, 8, 9};
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " --> ";
    }

    return 0;
}