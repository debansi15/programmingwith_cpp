#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    if (a<b){
        if(a<c){
            cout<<a<<" is youngest";
        }
        else{  //(c<a)
            cout<<c<<" is youngest";
        }
    }
    else{  //(b<a)
        if(b<c){
            cout<<b<<" is youngest";
        }
        else{   //(c<b)
            cout<<c<<" is youngest";
        }
    }
    
}