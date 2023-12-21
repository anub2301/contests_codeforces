#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n-2;i++){

        if((s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C')||(s[i]=='A'&&s[i+1]=='C'&&s[i+2]=='B')||(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='C')||(s[i]=='B'&&s[i+1]=='C'&&s[i+2]=='A')||(s[i]=='C'&&s[i+1]=='B'&&s[i+2]=='A')||(s[i]=='C'&&s[i+1]=='A'&&s[i+2]=='B')){
            cout<<"YES"<<endl;
            break;

        }
        else{
            cout<<"NO"<<endl;
            break;
            
        }

    }
return 0;
}