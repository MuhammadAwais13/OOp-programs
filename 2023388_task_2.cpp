#include <iostream>
using namespace std;

class Arrays
{
private:
    int *array1;
    int *array2;
    int size;

public:
    // Constructor that accepts two arrays as arguments
    Arrays(int arr1[], int arr2[], int arrSize) : size(arrSize)
    {
        array1 = new int[size];
        array2 = new int[size];
        for (int i = 0; i < size; ++i)
        {
            array1[i] = arr1[i];
            array2[i] = arr2[i];
        }
    }

    // Copy constructor that copies the first array to both dynamic arrays
    Arrays(int arr[], int arrSize) : size(arrSize)
    {
        array1 = new int[size];
        array2 = new int[size];
        for (int i = 0; i < size; ++i)
        {
            array1[i] = arr[i];
            array2[i] = arr[i];
        }
    }

    // Function to calculate and display the sum of each array
    void Sum()
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < size; ++i)
        {
            sum1 += array1[i];
            sum2 += array2[i];
        }
        cout << "Sum of array1: " << sum1 << endl;
        cout << "Sum of array2: " << sum2 << endl;
    }

    // Destructor to free up dynamic memory
    ~Arrays()
    {
        delete[] array1;
        delete[] array2;
    }
};

int main()
{
    const int size = 10;
    int arr1[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[size] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Using the first constructor
    Arrays arrays1(arr1, arr2, size);
    arrays1.Sum();

    // Using the copy constructor
    Arrays arrays2(arr1, size);
    arrays2.Sum();

    return 0;
}
