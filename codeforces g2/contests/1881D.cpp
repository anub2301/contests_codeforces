#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]==a[0]){
                cout<<"YES"<<endl;
            }
            else{
                for(int i=0;i<=n/2;i++){
                
                    if(a[n-1-i]/a[i]==a[n-1]/a[0]){
                        cout<<"YES"<<endl;
                        
                    }
                    break;
                    if(a[n-1-i]/a[i]!=a[n-1]/a[0]){
                        cout<<"NO"<<endl;
                        
                    }
                    break;
                }
            }
            break;
        }
    }
return 0;
}