#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enetr the string ";
    getline(cin,s);
    int count=0;
    for(int i=0;s[i] != '\0';i++){
        count++;
    }
    cout<<"no of charcter is "<<count;

    
}
