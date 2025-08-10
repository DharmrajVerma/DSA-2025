// NO OF DIGIT IN GIVEN NUMBER USING STRING FUNCTION
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number ";
    cin>>n;
    string s=to_string(n);
    cout<<"No of digit is "<<s.size();
}