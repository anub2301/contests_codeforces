#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
        
    }
    else{
        if(n%8==1){
            cout<<8 ;
        }
        if(n%8==2){
            cout<<4 ;
        }
        if(n%8==3){
            cout<<2 ;
        }
        if(n%8==4){
            cout<<6 ;
        }
        if(n%8==5){
            cout<<8 ;
        }
        if(n%8==6){
            cout<< 4;
        }if(n%8==7){
            cout<<2 ;
        }if(n%8==0){
            cout<< 6;
        }
    }
return 0;
}