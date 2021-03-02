// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int i, n1,n2, store[100],j=0, store1[100], k=0, z=0, store2[100];
//     cout<<"Enter the number: ";
//     cin>>n1;
//     for(i = 2; i<=n1; i++) {
//         if(n1%i == 0) {
//             store[j] = i;
//             cout<<store[j]<<" ";
//             j++;
//         }
//     }
//     cout<<"Enter the number: ";
//     cin>>n2;
//     for(i = 2; i<=n2; i++) {
//         if(n2%i == 0) {
//             store1[k] = i;
//             cout<<store1[k]<<" ";
//             k++;
//         }
//     }
//     int p=0;
//     // int len = sizeof(store)/sizeof(store[0]);
//     // int len1 = sizeof(store1)/sizeof(store1[0]);
//     for(i = 0; i<= j; i++) {
//         for(p = 0; p<=k; p++) {
//             if(store1[p] == store[i]) {
//                 store2[z] = store1[p];
//                 z++;
//                 cout<<store2[z]<<" ";
//             }
//         }
        
//     }
// // cout<<store[n1];
//     return 0;
// }

// IN PYTHON

// factors = []
// factors1 = []
// gcd= []
// num = int(input())
// num1 = int(input())

// for a in range(2,num+1):
//     if num%a == 0 :
//         factors.append(a)
        
// for b in range(2,num1+1):
//     if num1%b == 0 :
//         factors1.append(b)
        
// for c in factors:
//     if c in factors1:
//         gcd.append(c)
// print(max(gcd))
