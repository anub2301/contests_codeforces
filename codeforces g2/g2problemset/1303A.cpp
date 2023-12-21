#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        int l ,r;
        string s;
        cin>>s;
        int n = s.size();
        for(int i=l;i<r;i++){
            if(s[l]=='1'&&s[r]=='r'){
                if(s[i]=='0'){
                    s.erase(i);
                    cnt++;
                }
            }
        }

        cout<<cnt<<endl;
        break;

    }
return 0;
}