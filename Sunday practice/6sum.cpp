#include<iostream>
using namespace std;
int sum(int n,int m){
    if(n>m) return 0;
    int s =m+sum(n,m-1);
    return s;
}
int main(){
    cout<<sum(2,5);
}