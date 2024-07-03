#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("zoo.txt");
    fout<<"Hello India";
    fout.close();

    ifstream fin;
    //file ko open karo
    fin.open("zoo.txt");
    //fr read karo
    char c;
    c=fin.get();
    while(!fin.eof())
    {
        cout<<c;
        fin>>c;
    };
    fin.close();

    vector<int>arr(5);
    cout<<"Enter the input: ";
    for(int i=0;i<5;i++)
    cin>>arr[i];

    ofstream fout;
    fout.open("zoo.txt");
    fout<<"Original data\n";
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";

    };
    
    fout<<"\nSorted data";
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout.close();

}