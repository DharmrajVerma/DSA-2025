#include<iostream>
using namespace std;
void swap(int a,int b){
int temp=a;
a=b;
b=temp;
return;
}
int main(){
    int n,m;
    cout<<"enter the value of first number ";
    cin>>n;
    cout<<"enter the value of second number ";
    cin>>m;
    cout<<"before swapping "<<n<<"   "<<m<<endl;
    swap(n,m);
    cout<<"after swapping "<<n<<"   "<<m<<endl;

}