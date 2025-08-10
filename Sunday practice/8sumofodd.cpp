#include<iostream>
using namespace std;
int sumofodd(int a,int b){
    if(a>b) return 0;
    if(a%2!=0) return a+sumofodd(a+1,b);
    else return sumofodd(a+1,b);
}
int main(){
    cout<<sumofodd(2,7);
}