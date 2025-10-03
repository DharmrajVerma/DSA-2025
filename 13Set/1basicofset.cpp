#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.erase(6);
    int target=4;
    //s.found() -> it searches in the set ,and if
    // it is not found then it returns the lastelment
    if(s.find(target) != s.end()){
        cout<<"target element found "<<endl;
    }
    for(int x : s){
        cout<<x<<" ";
    }
} 