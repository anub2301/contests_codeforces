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
    sort (a,a+n);
    if(n==1){
        cout<<0<<endl;
        continue;
    }
 
    int max=0;
    for(int i=0;i<n/2;i++){
        max+=(a[n-i-1]-a[i]);
    }
    cout<<max<<endl;
    }
return 0;
}