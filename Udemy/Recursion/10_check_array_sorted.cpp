#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check_array_sorted(int arr[], int n){
    // for single or no element the deafult is sorted
    if(n == 0 || n == 1){
        return true;
    }
    // if first 2 elements are in descending order then not SORTED
    if(arr[0] > arr[1]){
        return false;
    }

    bool value = check_array_sorted(arr+1,n-1);

    // the below code is not much needed
    if(value){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int arr[] = {1,2,3,4,5,10,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "the array is sorted :> " << check_array_sorted(arr,size);
    return 0;
}