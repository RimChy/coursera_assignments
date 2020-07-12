#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int coin[]={1,3,4};
    int dp[4][n+3];
    for(int j=1;j<=n;j++) dp[0][j]=j;
    for(int i=1;i<3;i++){
        for(int j=1;j<=n;j++){
                //if(i==0) dp[i][j]=j;
            if(j>coin[i]){
                dp[i][j]=min(dp[i][j-coin[i]]+1,dp[i-1][j]);
            }
            else if(j==coin[i]) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j];
           // cout<<dp[i][j]<<" ";
        }
       // cout<<endl;
    }
    cout<<dp[2][n]<<endl;
}
