#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        if(b>c+h){
            cout<<b-(c+h)<<endl;
        }
        else if(b<(c+h)){
            cout<<max(c,h)-b<<endl;
        }
        else if(b==c+h){
            cout<<b+min(c,h)<<endl;
        }
    }
return 0;
}