/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int linear_search(int key,int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int key,found;
    cout<<"please enter the key to be searched ";
    cin>>key;
    
    found= linear_search(key,arr,n); //linear_search function call
    
    if(found != -1)
    {
        cout<<"The index of the found element is "<<found;
    }
    else
    {
        cout<<"The element is not present";
    }

    return 0;
}
