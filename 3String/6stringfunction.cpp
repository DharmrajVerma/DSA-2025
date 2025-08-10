#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout<<"enter the string ";
getline(cin,s);
s.push_back('b');
s.push_back('.');
s.push_back('t');
s.push_back('e');
s.push_back('c');
s.push_back('h');
int n=s.size();
for(int i=0;i<n;i++){
    cout<<s[i]<<endl;
}

cout<<"no of char "<<n;
}