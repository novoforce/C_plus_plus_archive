#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int find_index(int arr [], int n, int idx,int i)
{
    //base case
    if(n== 0)
    {
        return 0;
    }

    if(i == n)
    {
        return -1;
    }

    if(arr[i] == idx)
    {
        return i;
    }
    //assumption
    int value= find_index(arr,n,idx,i+1);
    //calculation
    return value;
}



int main()
{
    int arr[]= {1,8,3,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    int idx= 0,i=0;
    cout << "The index is present at:> " << find_index(arr, n, idx,i);
    return 0;
}