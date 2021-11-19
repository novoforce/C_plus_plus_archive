#include<iostream>

using namespace std;

int count_zeros(int no)
{
    if(no == 0){
        return 0;
    }
    int smallAns= count_zeros(no/10);
    int last_digit= no%10;

    if(last_digit == 0){
        return smallAns+1;
    }

    return smallAns;
}


int main(){
//    int n= 100892306;
    int n= 2002;
    cout << "no of zeros:> " << count_zeros(n);


}
