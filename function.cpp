#include<iostream>
using namespace std;
void print(int num){
    cout<<num<<endl;
    return;
}

int add(int num1, int num2){
    print(num1);
    print(num2);
    int sum=num1+num2;
    return sum;
}
int main(){
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
    return 0;

}

//print all prime numbers between 2 given numbers
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }

    }
    return true;
}
int main() {

    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;

}
//fibonnaci sequence
#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
    return;
}

int main(){
   int n;
   cin>>n;

   fib(n);
   return 0; 
}

//Factorial of a number n
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2; i<=n;i++){
        factorial*=i;
    }
    return factorial;

}
int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}
//calculate nCr
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n,r;
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}

//Pascal traingle
#include<iostream>
using namespace std;

int fact(int n){
    int factorial =1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;

}

}
//sum of natural numbers
#include<iostream>
using namespace std;
int sum(int n)
{
    int ans =0;
    for(int i=1; i<=n; i++)
       ans+=i;
    return ans;   

}
int main(){
    int n;
    cin>>n;

    cout<< sum(n) <<endl;
}
//pythgorean triplet
#include<iostream>
using namespace std;


bool check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b,c;

    if(a==x){
        b=y;
        c=z;
    }
    else if(a== y){
        b = x;
        c = z;
    }
    else{
        b =x;
        c =y;
    }
    if(a*a == b*b +c*c)
        return true;
    else
        return false;

}
 
 int main(){
    int x,y,z;
    cin>> x >>y >>z;

    if(check(x,y,z))
    {
        cout<<"Pythagorean triplet";
    
    }
    else
    {
        cout<<"not a pythagorean triplet";
    }
 }
 //binary to decimal
 #include<stdio.h>
 using namespace std;


 int binaryToDecimal(int n){

    int ans =0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *=2;
        n /= 
    }
 }
 int octalTodecimal(int n){
        int ans =0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans += x*y;
        x *=8;
        n /= 10;
    }
 }
 int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    cout<<octalTodecimal(n)<<endl;
 }
 
