#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string, int> p1;
    p1.first="Dharmraj Verma";
    p1.second=16;
     pair<string, int> p2;
    p2.first="Raghav";
    p2.second=17;
     pair<string, int> p3;
    p3.first="Dhurv";
    p3.second=18;
     pair<string, int> p4;
    p4.first="adiya";
    p4.second=19;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m.insert(p4);
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }


}
