#include<iostream>
#include<string>
using namespace std;
void convert_int_to_string(){
    int n=1234;
    string s= to_string(n);
    string a = "567";
    string b=s+a;
    cout<<b<<endl;
    cout<<b.size()<<endl;
   
}
int main(){
    string a="dharmraj ";
    string b="verma";
    string c=a+b;
    string d=b+a;
    cout<<c<<endl;
    cout<<d<<endl;
    convert_int_to_string();


}