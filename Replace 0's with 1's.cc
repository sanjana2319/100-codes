#include <iostream>

using namespace std;

int main()
{
    int n,num,temp, rev=0, divi, new1=0;
    cout<<"Enter the replaced number: ";
    cin>>n;
    temp = n;
    while(n>0) {
        num = n%10;
        if(num == 0) {
            num = 1;
        }
        rev = rev*10 + num;
        n = n/10;
    }
    while(rev>0) {
        divi = rev%10;
        new1 = new1*10 + divi;
        rev = rev/10;
    }
    cout<<"The replaced number is "<<new1;
    return 0;
}
