#include <iostream>
using namespace std;
//optimized bubble sort is when the given array is already in ascending order
// So that unnecessary swappings can be avoided
void optimized_bubble_sort(int arr[], int n)
{
    bool swap_var= false;
    for(int times=1;times<=n-1;times++)
    {
        for(int j=0; j<=n-1-times;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap_var= true;
            }
        }
        if(swap_var == false)
        {
            break ;
        }
    }
    
    cout << "The sorted array:> \n";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
}


int main()
{
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    cout << "The Before sorting array:> \n";
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        cout << arr[i]<<',';
    }
    optimized_bubble_sort(arr,sizeof(arr)/sizeof(int));
}