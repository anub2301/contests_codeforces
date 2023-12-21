#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float p1,p2,a1,a2,b1,b2;
        cin>>p1>>p2>>a1>>a2>>b1>>b2;
        float op =sqrt((p1*p1)+(p2*p2));
        float oa =sqrt((a1*a1)+(a2*a2));
        float ob =sqrt((b1*b1)+(b2*b2));
        float ap = sqrt(((p1-a1)*(p1-a1)+(p2-a2)*(p2-a2)));
        float bp = sqrt(((p1-b1)*(p1-b1)+(p2-b2)*(p2-b2)));
        float ab = sqrt(((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)));

        if(op<ab&&op>min(ap,bp))
        cout<<max(min(ap,bp),ab/2)<<endl;

        else {
            cout<<ab/2;

        }
        

    }
return 0;
}