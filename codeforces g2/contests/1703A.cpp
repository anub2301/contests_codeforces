#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        for(int i =0;i<s.size();i++){
            if(s[i]== 'Y','y','e','E','s','S'){
                cout<<"YES"<<endl;
                break;
                
            }
            
            else{
                cout<<"NO"<<endl;
                
            }
            break;

        }
    }
return 0;
}