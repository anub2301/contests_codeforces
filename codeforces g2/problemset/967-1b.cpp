#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A,B,i=0,sum;
    cin>>n>>A>>B;
    int size_of_hole[n];
    sum=0;
   for(int i=0;i<n;i++)
    {
        cin>>size_of_hole[i];
        sum += size_of_hole[i];
    }
    int cnt=0,store_water=0;
    sort(size_of_hole+1,size_of_hole+n);
    store_water = (size_of_hole[0]*A)/sum;
    for(int i=n-1;i>0;i--)
    {
        store_water = (size_of_hole[0]*A)/sum;
        if(store_water >= B) break;
        else{
        sum -= size_of_hole[i];
        cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}