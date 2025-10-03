#include<iostream>
using namespace std;
#include<queue>
//diplay of queue
void display(queue<int> & q){
     int n=q.size();
     for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
     }
     cout<<endl;
}



// display of queue  using recusion
void recdisplay(queue<int> q){
    if(q.empty()) return;
    int x= q.front();
    q.pop();
    cout<<x<<" ";
    recdisplay(q);
    q.push(x);    
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
display(q);
q.push(100);
recdisplay(q);
cout<<endl;
display(q);

}