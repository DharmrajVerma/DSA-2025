#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enetr the string ";
    getline(cin,s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    cout<<"no of charcter "<<i;
}
