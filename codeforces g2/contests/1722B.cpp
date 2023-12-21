#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        string s2;
        n=s1.size();
        n=s2.size();
        cin>>s1;
        cin>>s2;
        int cnt = 0;
       
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='R'){
                if(s2[i]!='R'){
                    cout<<"NO"<<endl;
                    break;
                }
                else if(s2[i]=='R'){
                    cout<<"NO"<<endl;
                    break;
                }
            }
            else{
                cout<<"YES"<<endl;
                break;
                
                }
                
           
        }
    }
return 0;
}