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

    // if(i==0 && n!=0){
    //     return -1;
    // }
    //or the below logic will also work.
    // i will start from the last and keep on decreasing till its -1
    if(i == -1){
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

int find_last_index_from_start(int arr [], int n, int idx,int i)
{
    //base case
    //if array not present return 0
    if(n == 0){
        return 0;
    }

    //if i reached the end without the index then return -1 or not found
    if(i == n)
    {
        return -1;
    }

    //assumption
    int value= find_last_index_from_start(arr,n,idx,i+1);
    //calculation

    if(value == -1){ 
        if(arr[i] == idx){
            return i;
        }
        else{
            return -1;
        }
    }
    else{
        return value;
    }
    // return value;
}



int main()
{
    int arr[]= {5,5,6,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int idx= 7,i=n;
    cout << "The last index is present at:> " << find_last_index(arr, n, idx,i) << endl;
    i= 0;// from the start
    cout << "The last index is present at:> " << find_last_index_from_start(arr, n, idx,i)<< endl;
    return 0;
}