#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter no.of rows:";
    cin>>m;
    int n;
    cout<<"Enter no. of cols:";
    cin>>n;
    
 for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==6){
                  cout<<"* ";
            }
            else{
                cout<<"  ";
            }
            
        }
          cout<<endl;
    }
        
    }   

