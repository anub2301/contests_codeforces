#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int p=a+b+c;
    int q=2*(a+b);
    int r=2*(b+c);
    int s=2*(a+c);
    cout<<min(p,min(q,min(r,s)));
return 0;
}