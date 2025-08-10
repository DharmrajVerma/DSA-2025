#include<iostream>
using namespace std;
int pow(int b,int p){
    if(p==0) return 1;
    int ans=b*pow(b,p-1);
    return ans;

}
int main(){

    cout<<pow(2,5);
}