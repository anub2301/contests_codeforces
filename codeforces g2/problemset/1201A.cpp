#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,sum=0;
    cin>>n>>m;
    string s[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
        }
    }
    int a[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=1;k<n;k++){
                if(s[i][j]==s[i+k][j]){
                    sum+=a[j];

                }
                else{
                    sum+=a[j];
                }
            }
        }
    }
    cout<<sum<<endl;

return 0;
}