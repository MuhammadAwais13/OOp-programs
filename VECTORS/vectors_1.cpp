#include<iostream>
#include<vector>// to use vectors
using namespace std;


int main()
{
    vector<int> vec_1;       //syntax for creating vectors --> vectors are arrays which we can increase or decrease
    int val;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"enter value : ";
        cin>>val;
        vec_1.push_back(val);   //as it act as array but we dont have to specify its total values as it will take
                                //according to input given this push back add value inside val to vac_1
    }
    vec_1.pop_back();  // this removes last element now cout will not show last element
    for (int i = 0; i < vec_1.size(); i++)// this //size is function inside class of vector which gives array size
    {
        /* code */
        cout<<"value is : " <<vec_1[i]<<endl;
    }

    // ITRATOR 
    
    vector<int> :: iterator itr= vec_1.begin();       // this is how we assign itrator with value of vactor now begin says that itrator will be assigned wuth first value of vector now itrator points to first value 
    vec_1.insert(itr,222);     // now insert function is used to insert data in vector but it dosent know where to insert
                            // so itrator tells it where to inster 222 as itrator points to first it will inser it at start
                            
     

 return 0;
}