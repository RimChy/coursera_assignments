#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,flag=0;
    cin>>n;

    x=(n/2);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a;
        mp[a]++;
    }
    //cout<<x<<endl;
    for(auto it: mp){
       if(it.second >x){
               // cout<<it.second<<endl;
            flag=1;
            break;
       }
    }
    if(flag==1) cout<<1<<endl;
    else cout<<0<<endl;
}
