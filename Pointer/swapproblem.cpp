#include<iostream>
using namespace std;
void swap(int* a,int*   b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int n,m;
    cout<<"enetr the first value ";
    cin>>n;
    cout<<"enetr the second value ";
    cin>>m;
    cout<<"the value of n and m before swapping "<<n<<"  "<<m<<endl;
    int *a=&n;
    int *b=&m;

    swap(n,m);
    
    cout<<"the value of n and m after swapping "<<n<<"  "<<m;
}