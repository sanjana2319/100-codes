#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin>>n1;
    if(n1<0) {
        cout<<n1<<" is negative";
    } else if(n1>0) {
        cout<<n1<<" is positive";
    } else {
        cout<<n1<<" is zero";
    }

    return 0;
}
