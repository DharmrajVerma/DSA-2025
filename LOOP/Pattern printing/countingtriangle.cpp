#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of row";
    cin>>n;
    /*for(int i=1;i<=n;i++){               //1
        for(int j=1;j<=i;j++){             //12
            cout<<j;                       //123
        }                                  //1234
        cout<<endl;
    }*/
    for(int i=1;i<=n;i++){                 //1
        for(int j=1;j<=i;j++){             //22
            cout<<i;                       //333
        }                                  //4444
        cout<<endl;
    }

}
 