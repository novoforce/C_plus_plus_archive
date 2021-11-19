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
