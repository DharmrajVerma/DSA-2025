// REVERSE HALF OF THE STRING 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string ";
    cin>>s;
    cout<<"your input string is "<<s<<endl;
    // reverse(s.begin(),s.begin()+(s.size()/2));
    // cout<<"yours half reverse string is "<<s<<endl;
    // REVERSE SECOND HALF OF THE STRNG
    
    reverse(s.begin()+(s.size()/2),s.end());
    cout<<"after reverse of second half of string "<<s;


}