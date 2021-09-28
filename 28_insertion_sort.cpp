#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int curr_ele= arr[i];
        int prev= i-1;
        while(prev>= 0 and arr[prev] > curr_ele)
        {
            arr[prev+1] = arr[prev];//move ahead and update
            prev= prev-1;//move backward
        }
        arr[prev+1] = curr_ele;
    }
    
    cout << "The sorted array:> ";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
}


int main()
{
    // int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int arr[]= {1,8,3,0,6,2,2,5};
    cout << "The Before sorting array:>";
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout << arr[i]<<',';
    }
    cout << "\n";
    insertion_sort(arr,sizeof(arr)/sizeof(int));
}