#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int n= s.size();
        string s1;
        int m = s1.size();
        cin>>s1;
        for(int i=0;i<n-m;i++){
            for(int j=0;j<m-1;j++){
                if(s1[i]==s[i+j]){
                    cout<<"YES"<<endl;
                    break;
                }
                else{
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
    }
return 0;
}