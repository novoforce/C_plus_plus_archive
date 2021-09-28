#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int curr_sum=0;
    int largest_sum= INT_MIN;
    
    for(int i=0;i<A.size();i++)
    {
        curr_sum = curr_sum+A[i];
        if(curr_sum < A[i])
        {
            curr_sum=A[i];
        }
        
        largest_sum = max(largest_sum,curr_sum);
    }
    cout << "largest_sum:> "<<largest_sum;
    return largest_sum;
    
}

int main()
{
    vector <int> arr= {-1,-4,-9,-3};
    maxSumSubarray(arr);
}