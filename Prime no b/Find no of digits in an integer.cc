#include <iostream>

using namespace std;

int main()
{
    int num, temp, divi, count=0;
    cin>>num;
    temp = num;
    while(num > 0) {
        num = num/10;
        count++;
    }
    cout<<count;
    return 0;
}
