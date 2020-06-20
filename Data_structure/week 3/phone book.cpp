#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,string>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="add"){
            int m;
            string s1;
            cin>>m>>s1;
            mp[m]=s1;
        }
        else if(s=="del"){
            int m;
            cin>>m;
            mp[m]="";
        }
        else {
            int m;
            cin>>m;
            if(mp[m]!="") cout<<mp[m]<<endl;
            else cout<<"not found"<<endl;
        }
    }
}
