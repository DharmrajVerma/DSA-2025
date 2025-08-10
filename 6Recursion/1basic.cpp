#include<iostream>
using namespace std;
void gm(int n){
    if (n==0) return;
    cout<<"good morning"<<endl;
    gm(n-1);

}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    gm(n);
}