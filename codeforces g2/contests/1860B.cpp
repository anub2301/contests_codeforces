#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,k,a1,ak;
        
        cin>>m>>k>>a1>>ak;
        if(a1==0&&ak==0){
            if(m%k!=0){
            cout<<m/k+(11-k*(m/k))/1;
            }
            else{
                cout<<m/k<<endl;
            }
            cout<<endl;
        }
        else if(a1!=0&&ak!=0){
            if(ak*k+a1>=m){
            cout<<0<<endl;
            }
            else{
                int p=(a1+ak*k);
                cout<<(((m-p)/k)+((m-p)-(m-p)/k))<<endl;
            }
        }
    }
return 0;
}