/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void printArray(int arr[],int n)
{
    cout<<"inside the function";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    cout<<"Inside the main \n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    printArray(arr,n);
    return 0;
}
