#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    vector<int> v;
    int cnt =0;
    for(int i=0;i<n;i++){
        while(a[i]%3==0){
            a[i]/=3;
            cnt++;
        }
        v.push_back(cnt);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
return 0;
}