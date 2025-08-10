#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void change(vector<int> &a ){
    a[0]=100;
    //display(a);
}
int main(){
    vector<int> v;
    v.push_back(64);
    v.push_back(61);
    v.push_back(16);
    v.push_back(60);
    v.push_back(46);
    v.push_back(69);
    v.push_back(36);
    display(v);
    change(v);
    display(v);
   
}