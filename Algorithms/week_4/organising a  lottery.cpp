#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,char>>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,'l'));
        v.push_back(make_pair(b,'r'));
    }
    int a[m+1];
    for(int i=0;i<m;i++){
        //int a;
        cin>>a[i];
        v.push_back(make_pair(a[i],'p'));
    }
    sort(v.begin(),v.end());
    int p=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second=='l') p++;
        else if(v[i].second=='r') p--;
        else mp[v[i].first]=p;
    }
    for(int i=0;i<m;i++){
        cout<<mp[a[i]]<<" ";
    }
    cout<<endl;
}
