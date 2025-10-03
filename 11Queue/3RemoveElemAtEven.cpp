#include<iostream>
#include<queue>
using namespace std;
void display( queue<int> &q){
    cout<<endl<<"<------------------------------------>"<<endl;
    int n= q.size();
    for(int i=0;i<q.size();i++){
        int x= q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
     cout<<endl<<"<----------------------------------->"<<endl;
}
void RemoveAtEven(queue<int> &q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            q.pop();
        }
        else{
            int x=q.front();
            q.push(x);
            q.pop();
        }
    }
}
int main(){
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);
q.push(80);
q.push(90);
q.push(100);
display(q);
RemoveAtEven(q);
display(q);
}