#include<iostream>
using namespace std;
int main()
{
    //declaration of array
    int array[6];
    for(int i=0;i<6;i++){
        cin>>array[i];
    }
    //initializing array to a pointer 
    int *ptr=array;
    //display of values using pointer
    for(int i=0;i<6;i++){
        cout<<ptr[i]<<endl;
    }
    //cheking largest value in array
    int val=0;
    for(int i=0;i<6;i++){
        if (ptr[i]>val)
        {
            val=ptr[i];
        }
    }
    cout<<"largest value is : "<<val; // largest value display



 return 0;
}