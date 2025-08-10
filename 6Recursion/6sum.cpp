#include<iostream>
using namespace std;
int sum(int x){
    
     if (x==0){
        return x;
     }
     return  x+sum(x-1);
}
int main(){
    cout<<(sum(5));
}