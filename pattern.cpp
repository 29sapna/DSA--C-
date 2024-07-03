#include<iostream>
#include<math.h>
using namespace std;

int main(){
//     int row,col;
//     cin>>row>>col;

// for(int i=1; i<=row; i++){
//     for(int j=1;j<=col;j++){
//         if(i==1 || i==row){
//           cout<<"*";  
//         }
//         else if(j==1 || j==col){
//             cout<<"*";
//         }
//         else{
//             cout<<"";
//         }
//     }
//     cout<<endl;
// }
// 
// int n;
// cin>>n;

// //int count=1;
// for(int i=1; i<=n; i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";

//         // cout<<count;
//         // count++;
//     }
//     int space= 2*n - 2*i;
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//         // if(j<=n-i){
//         //     cout<<" ";
//         //     }else{
//         //         cout<<"* ";
//         //     }
//         // }
// }
// for(int i=n; i>=1; i--){
//     for(int j=1;j<=i;j++){
//         cout<<"*";

//         // cout<<count;
//         // count++;
//     }
//     int space= 2*n - 2*i;
//     for(int j=1;j<=space;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;      

//}
// int n;
// cin>>n;

// for(int i=1;i<=n;i++){
//     int j;
//     for(int j=1;j<=n-i;j++){
//             cout<<"  ";

//         }
//         int k=i;
//         for(;j<=n;j++){
//             cout<<k--<<" ";
//         }
//         k=2;
//         for(;j<=n+1;j++){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
// }
    
// for(int i=1;i<=3;i++){
//     for(int j=1;j<=n;j++){
//         if(((i+j)%4==0)  ||  (i==2  && j%4==0)){
//             cout<<"*";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// bool flag=0;

// for(int i=2;i<=sqrt(n);i++){
//     if(n%i==0){
//         cout<<"non-prime"<<endl;
//         flag=1;
//         break;
//     }
// }
// if(flag==0){
//     cout<<"prime"<<endl;
// }
// }
// int reverse=0;
// while(n>0){
//     int lastdigit= n%10;
//     reverse =reverse*10 + lastdigit;
//     n=n/10;
// }
// cout<<reverse<<endl;
// }
// int sum=0;
// int originaln=n;
// while(n>0){
//     int lastdigit= n%10;
//     sum+= pow(lastdigit,3);
//     n=n/10;
// }

// if(sum==originaln){
//     cout<<"Armstrog"<<endl;
// }
// else{
//     cout<<"not armstrog"<<endl;
// }
// }
int n;
cin>>n;
int count=1;
for(int i=1; i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<count<<" ";
        count++;

    }
    cout<<endl;
}
}
