#include<bits/stdc++.h>
using namespace std;
int main()
{
    int capacity,n;
    cin>>capacity>>n;
    vector<int>v;
    int a[n+1];
    //v.push_back(0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
       // v.push_back(a);
    }
    //vector<vector<int>>dp;
    vector<vector<int>>  dp(n + 1,vector<int>(capacity + 1)); // eikhane array use kori nai karon onek somoy onk big value er jnno crash kore
    for(int i=0;i<=n;i++){
        for(int j=0;j<=capacity;j++){
           if(i==0 || j==0) dp[i][j]=0;
            else if(j>=a[i]) {
                    //cout<<i-a[j]<<endl;
                    dp[i][j]=max(dp[i-1][j-a[i]]+a[i],dp[i-1][j]);
            }
            else dp[i][j]=dp[i-1][j];
          // cout<<dp[i][j]<<" ";
          // cout<<i<<endl;

        }
        //cout<<endl;
    }
    cout<<dp[n][capacity]<<endl;
}
