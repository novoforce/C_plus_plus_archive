#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check_array_sorted(int arr[], int n){
    // for single or no element the deafult is sorted
    //base case
    if(n == 0 || n == 1){
        return true;
    }
    // if first 2 elements are in descending order then not SORTED
    //calculation  (check condition for first 2 elements)
    if(arr[0] > arr[1]){
        return false;
    }
    //assumption
    bool value = check_array_sorted(arr+1,n-1);
    return value;
}


int main(){
    int arr[] = {1,2,3,4,5,17,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "the array is sorted :> " << check_array_sorted(arr,size);
    return 0;
}