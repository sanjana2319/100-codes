#include <iostream>

using namespace std;

int main()
{
    int num, i, sq, flag, temp;
    cout<<"Enter the number: ";
    cin>>num;
    temp = num;
    sq = num*num;
    while(num>0) {
        if(num%10 != sq%10) {
            flag = 1;
            break;
    }
    num = num/10;
    sq = sq/10;
    }
    if(flag==1) {
        cout<<temp<<" is not an automorphic number";
    } else {
        cout<<temp<<" is an automorphic number";
    }
    return 0;
}
