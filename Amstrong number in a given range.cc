#include <iostream>

using namespace std;

void amstrong(int num) {
    int temp,divi,sum=0;
    temp = num;
    while(num>0) {
        divi = num%10;
        sum = sum + divi*divi*divi;
        num = num/10;
    }
    if(sum == temp) {
        cout<<temp<<" is an amstrong number"<<endl;
    } 
}

int main()
{
   int num, sum = 0, i, divi,temp,n1,n2;
   cout<<"Enter the number: ";
   cin>>n1>>n2;
   cout<<"Amstrong numbers between "<<n1<<" and "<<n2<<" are: ";
   for(int i = n1; i<=n2; i++) {
       amstrong(i);
   }
   
    return 0;
}
