#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+b[i]==a[j]&&a[j]+b[j]==a[i]){
                cout<<"YES"<<endl;
                break;
            }
            
            else{
            cout<<"NO"<<endl;
            break;
        }
        }
        break;
    }
return 0;
}