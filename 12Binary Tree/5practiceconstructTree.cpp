#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val=v;
        left=NULL;
        right=NULL;
    }
};
Node* Construction(int arr[], int n){
    queue<Node*> q;
    Node * root= new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size() > 0 && i<n){
        Node *temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i] != -1000) l=new Node(arr[i]);
        else l=NULL;
        if(j !=n && arr[j] != -1000) r= new Node(arr[j]);
        else r=NULL;
        temp->left= l;
        temp->right=r; 
        if(l != NULL) q.push(l);
        if(r != NULL)  q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
int main(){

}