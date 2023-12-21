#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=a[i]-i;j<n+1;j=j+a[i]){
                if(a[i]*a[j]==i+j){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}