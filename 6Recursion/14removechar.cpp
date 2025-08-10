//this program is  remove the charcter using for loop
#include<iostream>
using namespace std;
int main(){
    string s="Dharmraj Verma";
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i] != ' '){
            ans=ans+s[i];
        }
        // else{
        //     ans=ans+s[i];
        // }
    }
    cout<<ans;
}