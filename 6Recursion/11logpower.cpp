#include<iostream>
using namespace std;
int pow(int n,int b){
    if(n==0) return 1;
    if(n%2==0) return pow(n/2,b)*pow(n/2,b);
    else return pow(n/2,b)*pow(n/2,b)*b;
}
int main(){
    cout<<pow(3,5);
}