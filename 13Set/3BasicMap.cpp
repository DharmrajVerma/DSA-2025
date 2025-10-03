#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["Harsh"]=16;
    m["Dharmraj Verma"]=17;
    m["Dhruv"]=18;
    m["Lovnish"]=19;
    m["Devansh"]=20;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}