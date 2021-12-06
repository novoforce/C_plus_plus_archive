#include<iostream>

using namespace std;


int sum_of_nos(int no){
    //base case
    if(no == 0){
        return 0;
    }
    //assumption
    int counter= sum_of_nos(no/10);
    //calculation
    return counter+ no%10; //add the last no which we get from (no%10)

}


int main()
{
    int no=1830;
    // cin >> no;
    int sum;
    sum =sum_of_nos(no);
    cout <<"the sum is " << sum ;

    return 0;
}
