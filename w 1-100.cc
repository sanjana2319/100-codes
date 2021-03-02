#include <iostream>

using namespace std;

int main()
{
    int i,j,count=0;
    cout<<"Prime numbers between 1 to 100 are: ";
    for(i=2; i<=100; i++) {
        for(j=1; j<=i; j++) {
            if(i%j == 0) {
                count++;
            }
        }
        if(count==2)
        cout<<i<<" ";
        count = 0;
         
    }
    
    return 0;
}
