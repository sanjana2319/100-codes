#include <iostream>

using namespace std;

int main()
{
    int n1,n2,i,sum;
    cin>>n1>>n2;
    for(i=n1; i<=n2; i++) {
        sum = sum + i;
    }
    cout<<sum;
    return 0;
}
