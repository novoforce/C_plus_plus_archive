#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int find_last_index(int arr [], int n, int idx,int i)
{
    //base case
    if(i==0 && n==0)
    {
        return 0;
    }

    if(i==0 && n!=0){
        return -1;
    }

    if(arr[i] == idx)
    {
        return i;
    }
    //assumption
    int value= find_last_index(arr,n,idx,i-1);
    //calculation
    return value;
}



int main()
{
    int arr[]= {1,8,3,3,6,0,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int idx= 31,i=n;
    cout << "The last index is present at:> " << find_last_index(arr, n, idx,i);
    return 0;
}