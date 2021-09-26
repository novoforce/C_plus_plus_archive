/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int print_pairs(int * arr,int n)
{
    cout<<"THE PAIRS ARE: \n";
    for(int i=0;i<n;i++)
    {
        int x= arr[i];
        for(int j=i+1;j<n;j++)
        {
            int y= arr[j];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    int arr[]= {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    
    print_pairs(arr,n);
    return 0;
}
