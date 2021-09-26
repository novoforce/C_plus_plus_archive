/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int prefix_subarray_sum_cadane_algo(int arr[],int n)
{
    int curr_sum=0;
    int largest_sum= curr_sum;
    for(int i=0;i<n;i++)
    {
        curr_sum = curr_sum+arr[i];
        if(curr_sum < 0)
        {
            curr_sum=0;
        }
        
        largest_sum = max(largest_sum,curr_sum);
    }
    cout<<"GREATEST SUBARRAY SUM:>"<<largest_sum;

}


int main()
{
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    // print_subarray(arr,n);
    prefix_subarray_sum_cadane_algo(arr,n);
    return 0;
}
