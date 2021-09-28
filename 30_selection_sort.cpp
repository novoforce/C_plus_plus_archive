#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int curr_ele= arr[i];
        int min_pos= i;
        //code for finding the min elements from the slot
        for(int j=i;j<n;j++)
        {
            if(arr[j] < arr[min_pos])
            {
                min_pos= j;
            }
        }
        //after finding the min element--->  swap the min_element and the current ones
        swap(arr[i],arr[min_pos]);
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
    selection_sort(arr,sizeof(arr)/sizeof(int));
}