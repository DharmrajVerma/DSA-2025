#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(26,0);
    string s="dharmraj";
    int max=0,idx=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii =int(ch);
        v[ascii-97]++;
    }
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
            idx=i;
        }
    }
    cout<<"frequency of words "<<max<<" "<<"charcter is "<<char(idx+97);
}
