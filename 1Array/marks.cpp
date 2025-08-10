#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of no of student ";
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cout<<"enter the marks of student "<<i+1<<" ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<" marks of student "<<i+1<<" is ";
        cout<<arr[i];
        cout<<endl;
    }
    int m=arr[0];
    cout<<endl<<"the student who get less than 50 "<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<50){
            cout<<i+1;
            cout<<endl;
        }

    }


}