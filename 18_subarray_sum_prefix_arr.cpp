/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int prefix_subarray_aum(int arr[],int n)
{
    int prefix[n] = {0},largest_sum=0;
    prefix[0] = arr[0];
    
    //calculate the prefix sum
    for(int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1]+arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarray_sum = i>0 ? prefix[j] - prefix[i-1]: prefix[j];
            largest_sum = max(subarray_sum,largest_sum);
            
        }
    }
    cout<<"GREATEST SUBARRAY SUM:>"<<largest_sum;

}


int main()
{
    int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    
    // print_subarray(arr,n);
    prefix_subarray_aum(arr,n);
    return 0;
}
