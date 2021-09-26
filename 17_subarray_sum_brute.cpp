/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int print_subarray(int * arr,int n)
{
    cout<<"THE SUBARRAYS ARE: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i ; k<=j; k++)
            {
                cout<<arr[k]<<',';
            }
            cout<<endl;
        }
    }
}

int greatest_subarray_aum(int arr[],int n)
{
    int sum=0,great_sum=0;
    great_sum = sum; //initialize great_sum as the sum
    cout<<"THE GREATEST SUBARRAY SUM: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i ; k<=j; k++)
            {
                cout<<arr[k]<<',';
                sum+= arr[k];
                
                if(sum > great_sum)
                {
                    great_sum = sum;
                }
            }
            cout<<"sum:>"<<sum;
            cout<<endl;
            sum=0;
        }
    }
    cout<<"Greatest subarray sum:>"<<great_sum;
    
    
}


int main()
{
    int arr[]= {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    
    // print_subarray(arr,n);
    greatest_subarray_aum(arr,n);
    return 0;
}
