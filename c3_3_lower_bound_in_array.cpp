#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int start=0;
    int end= A.size() - 1;
    int low_bound=-1;
    while(start <= end)
    {
        int mid = (start+end)/2;
        
        if(A[mid] > Val)
        {
            end= mid-1;
        }
        else
        {
            low_bound= A[mid];
            start= start+1;
        }
    }
    cout << "lower bound:> "<<low_bound;
    return low_bound;
    
}

int main()
{
    vector <int> arr= {-1,-1,2,3,5};
    int Val= 4;
    lowerBound(arr,Val);
}