#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int cnt =1;
    int a[n];
    int i=0;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    for( int i=0,j=1;i<n,j<n;i++,j++){
        if(a[i]!=a[j]){
            cnt++;
        }

    }
    if(cnt>=k){
        cout<<"YES"<<endl;
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}