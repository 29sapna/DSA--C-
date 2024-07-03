#include <iostream>
using namespace std;

// void fun3(int n){
//     cout<<n<<" days left for birthday\n";
//     fun2(n-1)
// }

// void fun2(int n)
// {
//     cout<<n<<" days left for birthday\n";
// }
// void fun1(int n)
// {
//     cout<<n<<" days left for birthday\n";
// }
// void fun0(int n)
// {
//     cout<<"Happy Birthday\n";
// }
// void print(int N){
//     //base case
//     if(N==1)
//     {
//         cout<<1<<endl;
//         return;
//     }
//     print(N-1);
//     cout<<N<<endl;
// }
// printeven(int num,int N){
//     if(num>N)
//     return;

//     cout<<num;
//     printeven(num+2,N);
// }
// int fact(int n){

//     if(n==1||n==0)
//     return 1;

//     return n*fact(n-1);
// }
// int sum(int n)
// {
//     if(n==1)
//     return 1;

//     return n+sum(n-1);
// }
int pow(int num, int n)
{
    if(n==0)
    return 1;
    // if(n==1)
    // return num;

    return num*pow(num,n-1);
}
int main()
{
    // int N=9;
    // printeven(2,N)
    // c in>>N;
    // Iterative
    // for (int i = n; i > 0; i--)
    // {
    //     cout << i << " days left for birthday\n";
    // }
    // cout << "happy birthday\n";

    // fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);
    // print(N);
    int n=5;
    // if(n<0)
    // {
    //     cout<<"Factorial is not possible";
    // }
    cout<<pow(2,n);


}