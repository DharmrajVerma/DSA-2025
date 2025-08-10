#include<iostream>
using namespace std;
int noofway(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return noofway(n-1)+noofway(n-2);
}
int main(){
    cout<<noofway(5);
}
