#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    

int t;
cin>>t;
while(t--){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int sum =0;
    for(int i=0;i<s1.size();i++){
        sum+=abs(s1[i]-s2[i]);
    }
    cout<<sum<<endl;
}

return 0;
}