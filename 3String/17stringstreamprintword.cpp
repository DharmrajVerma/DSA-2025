// print word in seprate line using stringstream class
#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s="dharmraj verma is beginner for DSA";
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        cout<<temp<<endl;
    }
}
