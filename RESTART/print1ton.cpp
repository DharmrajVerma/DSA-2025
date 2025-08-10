#include<iostream>
using namespace std;
void print (int s,int e){
    if(s>e) return;
    else{
        cout<<s<<endl;
         print(s+1,e);
    }
}
int main(){
    print(1,10);
}