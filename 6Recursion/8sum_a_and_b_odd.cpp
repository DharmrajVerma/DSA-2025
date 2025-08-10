#include<iostream>
using namespace std;
int sum(int a,int b){
  if(a>b) return 0;
  if(a%2 != 0) return a+sum(a+1,b);
  else return sum(a+1,b);
}
int main(){
  cout<<sum(1,5);
}