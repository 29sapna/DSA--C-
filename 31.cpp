#include<iostream>
using namespace std;
int main(){
    // char str[100];
    // cout<<"Enter a String"<<endl;
    // cin.get(str,100);
    // cout<<str;

    string str;
    cout<<"Enter a string"<<endl;
    getline(cin, str);
    for(int i=0; i<str.length();i++){
        if(str[i] == 'a' || str[i]=='A' || str[i]=='E'|| str[i]== 'e'||str[i]=='I'||str[i]=='i'||str[i]=='o'|| str[i]=='O'||str[i]== 'u'||str[i]=='U'){
            continue;
        }
        else{
            cout<<str[i];
        }
    }
}