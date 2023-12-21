#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];

    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((a[i]+b[j])%2!=0){
                cnt++;
                break;
            }
            break;
            
    }
    }
    cout<<cnt<<endl;

return 0;
}