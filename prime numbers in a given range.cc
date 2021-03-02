#include <iostream>

using namespace std;

void prime(int num) {
    int divi = 0, i;
    for( i = 1; i<=num; i++) {
        if(num%i == 0) {
            divi++;
        }
    }
    if(divi == 2) {
        cout<<num<<endl;
    }
}

int main()
{
    cout<<"Enter the range: ";
    int n1,n2;
    cin>>n1>>n2;
    cout<<"Prime numbers between "<<n1<<" and "<<n2<<"are";
    for(int i = n1; i<=n2; i++) {
        prime(i);
    }

    return 0;
}