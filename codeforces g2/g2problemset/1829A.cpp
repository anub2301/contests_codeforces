#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt =0;
        char s[10];
        for(int i=0;i<10;i++){
            cin>>s[i];
        }
        
        char s1[10] = {'c','o','d','e','f','o','r','c','e','s'};
        for(int i=0;i<10;i++){
            if(s[i]!=s1[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
return 0;
}