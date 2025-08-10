#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no you want ";
    cin>>n;
    cout<<"entr the element  ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array element is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    int s;
    cout<<"enter the no you want to search ";
    cin>>s;
    int flag=false;
    
    for(int i=0;i<n;i++){
        if(s==arr[i]){
            flag=true;
        }
    }
    if(flag==true){
        cout<<"enter element is found ";

    }
    else{
        cout<<"enetr elemnt is not found ";
    }


}