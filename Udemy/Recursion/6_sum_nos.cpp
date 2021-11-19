#include<iostream>

using namespace std;


int sum_of_nos(int no){
    if(no == 0){
        return 0;
    }
    int counter= sum_of_nos(no/10)+ no%10;
    return counter;

}


int main()
{
    int no;
    cin >> no;
    int sum;
    sum =sum_of_nos(no);
    cout <<"the sum is " << sum ;

    return 0;
}
