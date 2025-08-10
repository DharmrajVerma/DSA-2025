#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter the charcter ";
    cin>>c;
    int b;
    b=(int)c;
    if((b>=65 && b<=90) || (b>=97 && b<=122)){
        if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'){
            cout<<"enter charcter is vowel ";
        }
        else{
            cout<<"enetr charcter is constant";
        }
    }
    else{
        cout<<"enetr char is not alphabet ";
    }
}