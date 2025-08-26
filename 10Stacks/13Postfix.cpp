#include<iostream>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2, char ch){
    if(ch=='+') return val1+val2;
    else if(ch== '-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch== '/') return val1/val2;
}
int main(){
    string s="2+6*4/8-3";
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]);
        }
        else{
            if(op.size()==0 || s[i]>prior(op.top()) ){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && s[i]<=prior(op.top())){
                    char ch=op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
            }
        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans= solve(val1,val2,ch);
        val.push(ans);
        
    }
    cout<<val.top();
    

}