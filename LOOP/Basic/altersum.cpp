#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enetr the number ";
    cin>>n;
   
   if(n%2==0){ 
    sum=-(n/2);
    cout<<"sum is"<<sum;
   }
   else{
    sum=n-(n/2);
     cout<<"sum is "<<sum;
   }
   
} 