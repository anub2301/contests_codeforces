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
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{                                
            for(int i=0,j=1;i<n,j<n;i++,j++)
            { 
                if(a[i]==a[j])
                {
                    cout<<"NO"<<endl;
                    break;
                }
                else
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
    }
return 0;
}