#include <bits/stdc++.h>
using namespace std;


void print_pos_array(int arr [], int size, int pos,int idx)
{
    //base case
    if(pos == size || size == 0){
       return;
    }

    if(arr[pos] == idx){
        cout << pos << ", ";
    }
    //assumption
    print_pos_array(arr, size, pos+1,idx);
    //calculation
    return;
}


int main()
{
    int arr[]= {1,1,2,2,4,7,2,5,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int pos=0,idx=2;
    print_pos_array(arr,size,pos,idx);
    return 0;
}