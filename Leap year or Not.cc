#include <iostream>

using namespace std;

int main()
{
    int n1;
    cin>>n1;
    if((n1 % 4 == 0 && n1 % 100 != 0) || (n1 % 400 == 0)) {
        cout<<n1<<" is a leap year";
    } else {
        cout<<n1<<" is not a leap year";
    }
    return 0;
}
