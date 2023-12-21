#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int ans =1;
        int a[p];
        for(int i=0;i<p;i++){
            cin>>a[i];
        }
        sort(a,a+p);
        a[0]=a[0]+1;

        for(int i=0;i<p;i++){
            ans *=a[i];
        }
        cout<<ans<<endl;
    }
return 0;
}