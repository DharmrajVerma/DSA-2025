#include<iostream>
using namespace std;
class Node{
        public:
        int val;
        Node* next;
        Node(int  v){
             val=v;
             next=NULL;
        }
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next= &b;
    b.next= &c;
    c.next= &d;
    
    cout<<a.val<<endl; 
    cout<<b.val<<endl;
    cout<<c.val<<endl;
    cout<<d.val<<endl;
     
    // cout<<a.next<<endl;
    // cout<<b.next<<endl;
    // cout<<c.next<<endl;
    // cout<<d.next<<endl;
}