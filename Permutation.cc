#include <iostream>

using namespace std;

int main()
{
    int n, r, fact = 1,i,base = 1, sub,permutation;
    cin>>n>>r;
    for(i = 1; i<=n; i++) {
        fact = fact*i;
    }
    sub = n-r;
    for(i=1; i<=sub; i++) {
        base = base*i;
    }
    permutation = fact/base;
    cout<<permutation;
    return 0;
}