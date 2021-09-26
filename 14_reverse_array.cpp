/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int reverse_array(int arr[],int n)
{
    int s=0,e=n-1;
    while(s <= e)
    {
        swap(arr[s],arr[e]);
        s+= 1;
        e-= 1;
    }
    cout <<"\nafter reversal\n ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
}

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    cout <<"before reversal\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    reverse_array(arr,n);
    return 0;
}
