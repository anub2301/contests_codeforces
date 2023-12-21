#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,x,y;
    int cnt=0;
    cin>>a>>b>>x>>y;
    for(int w=1,h=1;w<=a,h<=b;w++,h++){

        if(w/h==a/b){
            cnt++;
        }
        
    }
    cout<<cnt<<endl;
return 0;
}