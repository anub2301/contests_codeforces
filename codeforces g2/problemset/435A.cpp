#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int  n,m;
    float sum=0;
    cin>>n>>m;
    int  a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<ceil(sum/m)<<endl;

return 0;
}