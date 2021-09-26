/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binary_search(int key,int arr[],int n)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid = (s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e= mid - 1;
        }
        else
        {
            s= mid + 1;
        }
        
    }
    return -1;
    
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int key,found_index;
    cout<<"please enter the key to be searched ";
    cin>>key;
    
    found_index= binary_search(key,arr,n); //linear_search function call
    
    if(found_index != -1)
    {
        cout<<"The index of the found element is "<<found_index;
    }
    else
    {
        cout<<"The element is not present";
    }

    return 0;
}
