#include <iostream>
#include <vector>
using namespace std;

int display(vector<int> arr) //pass by reference
{
    cout << endl<<"The array is:> ";
    for(int i=0;i<arr.size();i++)
    {
        cout <<arr[i];
    }
    return 0;
}

int main()
{
    //demo vector
    vector<int> arr= {1,2,3,4,5,6};
    //display the vector
    display(arr);
    
    //inserting at the back push_back
    arr.push_back(7);
    display(arr);
    
    //poping at the back pop_back
    arr.pop_back();
    display(arr);
    
    //default fill into the vector
    vector <int> visited(100,7); //no of elements= 100 with default= 7
    display(visited);
    
    //size and the capacity of the vectors
    vector <int> arr1= {1,2,3,4,5};
    cout << endl << "array size " << arr1.size();
    cout << endl << "array capacity " << arr1.capacity();
    
    arr1.push_back(10);
    display(arr1);
    
    cout << endl << "new array size " << arr1.size();
    cout << endl << "new array capacity " << arr1.capacity();

    return 0;
}
 