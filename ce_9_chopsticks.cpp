#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void count_chopstick_combination(vector<int> arr,int D)
{
    //sort the array
    sort(arr.begin(),arr.end());
    int count=0;
    for(int i=0;i<=arr.size()-2;i++)
    {
        if(arr[i+1] - arr[i] <= D)
        {
            count++;
            i++;
        }
    }
    
    cout << "the count is:> " << count;
    
}

int main()
{
    // int arr[]= {-2,3,4,-1,5,-12,6,1,3};
    vector <int> arr= {1,3,3,9,4};
    int n = arr.size();
    int D =  2;
    count_chopstick_combination(arr,D);
    return 0;
}