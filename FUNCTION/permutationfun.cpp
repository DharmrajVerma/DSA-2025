#include<iostream>
using namespace std;
int fact(int c){
  int f=1;
  for(int i=1;i<=c;i++){
    f=f*i;  
  }
  return f;
}
int permutation(int n,int r){
  int perm=fact(n)/(fact(n-r));
  return perm;

}
int combination(int n,int r){
  int comb=fact(n)/(fact(n-r)*fact(r));
  return comb;
}
int main(){
  int n,r;
  cout<<"enter the value of n ";
  cin>>n;
  cout<<"enter the value of r ";
  cin>>r;
  cout<<" permutation is "<<permutation(n,r);
  cout<<" combination is "<<combination(n,r);
//   cout<<combination(6,4);
 }