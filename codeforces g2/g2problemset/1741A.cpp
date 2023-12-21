#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a;
        cin>>b;
        for(int i=0;i<50;i++){
            
            if(((a[i]=='S'&&b[i]=='L')||(a[i]=='S'&&b[i]=='M')||(a[i]=='M'&&b[i]=='L'))){
                cout<<"<"<<endl;
                break;
            }
              
            else if(((a[i]=='M'&&b[i]=='S')||(a[i]=='L'&&b[i]=='S')||(a[i]=='L'&&b[i]=='M'))){
                cout<<">"<<endl;
                break;
            }
            
            else if(((a[i]=='L'&&b[i]=='L')||(a[i]=='S'&&b[i]=='S')||(a[i]=='M'&&b[i]=='M'))&&(a.size()==b.size())) {
                cout<<"="<<endl;
                break;
            }
        }
    }
return 0;
}