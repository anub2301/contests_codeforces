#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt=0;
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            cnt++;
        }
    }
    if(n%2==0){
        if(cnt<n/2){
            cout<<n/2<<endl;
        }
        else{
            cout<<n<<endl;
        }

    }
    else{
        if(cnt<(n+1)/2){
            cout<<(n-1)/2<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
return 0;
}