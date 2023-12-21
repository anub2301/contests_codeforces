#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x=0,y=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(k<=n){
    x=a[n-k]-a[n-k-1]+1;
    y=a[n-k]-a[n-k-1]+1;
    cout<<x<<" "<<y<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
return 0;
}