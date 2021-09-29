#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void counting_sort(int arr[],int n)
{
    int largest= -1;
    //find the largest no from the array
    for(int i=0; i<n; i++)
    {
        largest= max(largest,arr[i]);
    }
    
    //create and update the frequency array with the size of (largest+1) no
    vector<int> frequency(largest+1,0);
    for(int i=0; i<n; i++)
    {
        frequency[arr[i]]++;
    }
    
    //filling back the freq array to the main array
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(frequency[i] > 0)
        {
            arr[j]= i;
            j++;
            frequency[i]--;
        }
    }
    
    cout << '\n' << "The After sorting array:> ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
}

int main()
{
    // int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    int arr[]= {1,8,3,0,6,2,2,5};
    int n= sizeof(arr)/sizeof(int);
    cout << "The Before sorting array:>";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i]<<',';
    }
    counting_sort(arr,n);
    
    
}