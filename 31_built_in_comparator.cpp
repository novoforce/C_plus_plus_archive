#include <iostream>
#include <algorithm>
using namespace std;

bool compare_asc(int a ,int b)
{
    return a<b;
}

bool compare_desc(int a ,int b)
{
    return a>b;
}

int main()
{
    // int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int arr[]= {1,8,3,0,6,2,2,5};
    int n= sizeof(arr)/sizeof(int);
    cout << "The Before sorting array:>";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
    
    sort(arr,arr+n);
    cout << "\n" << "The ascending sorted array:> ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
    
    cout << '\n'<<"The descending sorted array:> ";
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
    
    // using comprator operator
    
    sort(arr,arr+n,compare_asc);
    cout << "\n" << "The ascending sorted array using comparator:> ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
    
    sort(arr,arr+n,compare_desc);
    cout << "\n" << "The descending sorted array using comparator:> ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
}