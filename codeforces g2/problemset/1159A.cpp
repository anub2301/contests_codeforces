#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=n;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){
            cnt--;
        }
        else{
            cnt++;
        }
    }
    cout<<cnt<<endl;
return 0;
}