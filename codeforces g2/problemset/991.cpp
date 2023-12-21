#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    float avg=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        avg=(avg+a[i])/n;
    }
    sort(a,a+n);
    while(avg<4.5){
        for(int i=0;i<n;i++){
            avg=(avg*n-a[i]+5)/n;
            
    }
    }
    cout<<cnt<<endl;
return 0;
}