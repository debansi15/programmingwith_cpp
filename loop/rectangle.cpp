#include<iostream>
using namespace std;
int main(){
    int l,b,a,p;
    cout<<"Enter l:";
    cin>>l;
    cout<<"Enter b:";
    cin>>b;
    a=l*b;
    p=2*(l+b);
    cout<<"Area is:"<<a<<endl;
    cout<<"Perimeter is:"<<p<<endl;

    if(a>p){
        cout<<"Area is greater";
    }
    else{
        cout<<"Perimeter is greater";
    }

}