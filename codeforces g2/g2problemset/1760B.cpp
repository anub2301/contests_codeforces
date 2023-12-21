#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++){
        cin>>s[i];
        }
        
        sort(s,s+n);
        cout<<int (s[n-1])-96<<endl;
    }

return 0;
}