#include<iostream>
using namespace std;

int main(){
//     char arr[]={'a','p','p','l','e'};
//    //cout<<arr;
//    for(int i=0;i<5;i++)
//    cout<<arr[i];
   

//    input from user
//    char arr[30];
//    cin>>arr;
//    cout<<arr;

//    char arr[5];
//    cin>>arr;
//    cout<<arr;//here if i put my name sapna it throw error because last space is always for null character.


//    string s;
//    getline(cin,s);
//    cout<<s<<endl;
//    cout<<s.size();

//    string s1="sapna", s2="tiwari";
//    string s3= s1.append(s2);
//    s1.push_back('a');
//    s1.pop_back();
//    cout<<s1;

// string s="sapna is \"good\" girl";
// cout<<s;

// string s="\0";
// // cout<<s;

// string s="sapna";
// int start=0, end=s.size()-1;
// while(start<end)
// {
//     swap(s[start],s[end]);
//     start++,end--;
// }
// cout<<s;
// int size=0;
// while(s[size]!='\0'){
//     size++;
// }
// cout<<endl;
// cout<<size;

string s2="naman";
 int start=0, end=s2.size()-1;

while(start<end)
{
    if(s2[start]!=s2[end])
    {
        cout<<"Not a palindrom";
        return 0;
    }
    start++, end--;
}
cout<<"it is the palindrom";

}

