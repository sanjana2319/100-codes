#include <iostream>

using namespace std;

    int Prime(int num) {
        int divi = 0,i;
        for(int i = 1; i<= num; i++) {
            if(num%i == 0) {
                divi++;
            }
        }
        if(divi == 2) {
            
            return 1;
        }
        return 0;
    }
   int main() {
       int n, i, check;
       cin>>n;
       if(n==4 || n == 6) {
           i = n/2;
           cout<<n<<" = "<<i<<" + "<<n-i;
           check = 1;
           
       } else {
          for (i=1; i<n/2; i++) {
           if(Prime(i) && Prime(n-i)) {
               cout<<n<<" = "<<i<<" + "<<n-i;
               check = 1;
           }
       } 
    }
       
       if(check == 0) {
           cout<<n<<" has no such prime combination";
       }
    return 0;
}
