#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        float  f,max,min;
        cin>>f>>max>>min;
        float d= abs(max-f);
        float e= 2*min;
       
       
        cout<<ceil(d/e)<<endl;

    }
return 0;
}