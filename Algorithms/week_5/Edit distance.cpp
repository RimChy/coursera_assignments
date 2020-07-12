#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int m,n;


int dist(string s1,string s2,int i, int j)
{

    int dp[m+1][n+1];

    for( j=0; j<=n; j++)

        dp[0][j] = j;
    for(i=0; i<=m; i++)
        dp[i][0] = i;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1];


            else
                dp[i][j] = 1 + min(dp[i][j-1],
                                   min(dp[i-1][j],
                                       dp[i-1][j-1]));
        }
    }

    return dp[m][n];
}


int main()
{

  int t;
  //cin>>t;
  //for(int k=0;k<t;k++){
    cin>>s1>>s2;
    m=s1.size(),n=s2.size();

    cout<<dist(s1,s2,m,n)<<endl;
  //}

    return 0;
}


