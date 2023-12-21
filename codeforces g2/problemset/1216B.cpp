#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortrev(const pair<int ,int> &a, const pair<int ,int > &b){
    return (a.first>b.first);

}


int main(){

    int n;
    cin>>n;
    vector <pair<int ,int>> a;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(make_pair(temp, (i+1)));

    }
    sort(a.begin(),a.end(),sortrev);
    int shots = 0;
    for(int i=0;i<n;i++){
        shots+= (a[i].first)*i+1;
    }
    cout<<shots<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].second<<" ";
    }
    cout<<endl;
return 0;
}