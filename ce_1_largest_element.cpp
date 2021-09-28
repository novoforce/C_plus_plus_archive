#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    int max_val= arr[0]; //initialize max_val to the first element
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] > max_val)
        {
            max_val= arr[i];
        }
    }
    return max_val;
    
     
}