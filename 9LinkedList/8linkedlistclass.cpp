#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val=v;
        next=NULL;
    }
};
class linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;
    linkedlist(){
        head=tail= NULL;
        size=0;
    }
     
    void display( ){
        Node * temp=head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
        cout<<size<<endl;
    }
    void insertathead(int v){
        Node *n=new Node(v);
        
        if(size==0){
            head=tail=n;
            size++;
        }
        else{
           n->next=head;
           head=n;
           size++;
        }
    }
    void insertatend(int v){
        Node * n=new Node(v);
        if(size==0){
            head=tail=n;
            size++;
        }
        else{
            tail->next=n;
            tail=n;
            size++;
        }
    }
    void isertatindex(int v,int idx){
        
        if(idx<0 || idx >size) cout<<" invalid index "<<endl;
        else if(idx==0)  insertathead(v);
        else if(idx==size) insertatend(v);
        else {
            Node *n =new Node(v);
            Node * temp=head;
            for(int i=076gtfrdes3wsdf7890-\][poiuiop[]-0oij9oikm09iji0-9] ;i<idx-1;i++){
                temp=temp->next;
            }
            n->next=temp->next;
            temp->next=n;
            size++;
        }
           
        
    }


};
int main(){
    linkedlist ll;

    ll.insertathead(30);
    ll.insertathead(40);
    ll.insertathead(50);
    ll.insertathead(60);
    ll.insertathead(70);
    ll.display();
    ll.insertatend(100);
    ll.display();
    ll.isertatindex(200,3);
    ll.display();
    ll.isertatindex(200,0);
    ll.display();
    
}