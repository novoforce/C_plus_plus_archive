/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int marks[100],n;
    cout<<"Enter the no of students";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    
    cout<<"The students marks are: ";
    for(int i=0;i<n;i++)
    {
        cout<<marks[i]<<',';
    }

    return 0;
}
