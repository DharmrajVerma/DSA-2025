#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;
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
        head=NULL;
        tail=NULL;
        size=0;
    }
    void display(){
        Node * temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;

        }
        cout<<endl;
    }
    void insertathead(int v){
        Node * n= new Node(v);
        if(size==0){
            head=tail=n;
           
        }
        else{
            n->next=head;
            head=n;
        }
         size++;
    }
    void insertattail(int v){
        Node*n=new Node(v);
        if(size==0){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        size++;
        
    }
    void insertatindex(int v,int idx){
        if(idx<0 || idx>size) cout<<"invalid index";
        else if(idx==0) insertathead(v);
        else if(idx==size) insertattail(v);
        else{
            Node *n = new Node(v);
            Node * temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;

            }
            n->next=temp->next;
            temp->next=n;
            size++;
        }

    }
    void getidx(int idx){
        Node * temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        cout<<endl<<temp->val<<endl;
    }
    void deleteathead(){
        if(size==0) cout<<"size is already zero";
        else{
            head=head->next;
            size--;
        }
    }
    void deleteattail(){
        if(size==0) cout<<"size is alerady zero";
        else{
            Node* temp= head;
            while(temp->next->next != NULL){
                temp=temp->next;
                
            }
            tail=temp;
            size--;
        }
    }
};
int main(){
    linkedlist ll;
    ll.insertathead(50);
    ll.insertathead(40);
    ll.insertathead(30);
    ll.insertathead(20);
    ll.insertathead(10);
    ll.display();
    ll.insertattail(60);
    ll.insertattail(70);
    ll.insertattail(80);
    ll.insertattail(90);
    ll.display();
    ll.insertatindex(200,4);
    ll.display();
    ll.getidx(5);
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
}
