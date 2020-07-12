#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,m;
    cin>>d>>m;
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    int cur=0,num=0,flag=1,i=1;
    a[n+1]=d;
    while(i<=n+1){
        if(a[i]-a[cur]<=m && a[i+1]-a[cur]>m && i+1<=n+1){
                cur=i;
                num++;
        }
        else if(a[i]-a[cur]>m){
            flag=0;
            break;
        }
       i++;
       //cout<<cur<<endl;

    }
    if(flag==0) cout<<-1<<endl;
    else cout<<num<<endl;


}
