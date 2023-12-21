#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
      map<string,int >cnt;
      for(int i=0;i<n;i++){
        string s;
        cin>>s;

        int previously_appeared = cnt[s];
        cnt[s]++;
        if(cnt[s]==1)cout<<"OK\n";
        else{
            cout<<s<<previously_appeared<<"\n";
        }
      }
return 0;
}