#include<iostream>
using namespace std;
class queue{
    public:
    int arr[5];
    int n= sizeof(arr)/sizeof(arr[0]);
    int rear,front;
    queue(){
        rear=0;
        front=0;
    }
    void push(int v){
        if(rear==n) { 
            cout<<"queue is full ";
            return;
        }
        else{
            arr[rear]=v;
            rear++;
        }
    }
    void pop(){
        if(front==rear){ cout<<"Queue is empty ";
             return;
        }
        else{
            front++;
        }
    }
    void display(){
          if(front==rear){ cout<<"Queue is empty ";
             return;
        }
        for(int i= front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.pop();
    q.display();

}