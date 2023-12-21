#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,sum=0,cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        

    }
    while(sum<=k){
        cnt++;
    }

return 0;
}