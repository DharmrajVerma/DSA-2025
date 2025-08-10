// REVERSE TYHE SUBSTRING OF THE GIVEN POSITION(2 TO 5 POSITION)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enetr the string ";
    cin>>s;
    cout<<"your enetr string "<<s<<endl;
    reverse(s.begin()+2,s.begin()+6);
    cout<<"after reverse string "<<s;


} 