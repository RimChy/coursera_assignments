#include<bits/stdc++.h>
using namespace std;
int optimal_solution(vector<int>v,long long w,vector<bool>used)
{
    vector<vector<int>>dp(v.size()+1,vector<int>(w+1));
    for(int i=0;i<v.size();i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(j>=v[i]) dp[i][j]=max(dp[i-1][j-v[i]]+v[i],dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    int k=w,j=v.size();
    for(int i=v.size()-1;i>=1;i--){
        if(dp[i][k]==dp[i-1][k-v[i]]+v[i]){
            used[i]=true;
            k-=v[i];
        }
    }
    return dp[v.size()-1][w];

}
vector<int> remove_elements(vector<bool>used,vector<int>v)
{
    for(int i=1;i<used.size();i++){
          if(used[i]==true) {
            v.erase(v.begin()+i);
          }
    }
    return v;
}
int partition(vector<int>v,long long sum,vector<bool>used)
{
    long long w=sum/3;
    int ret=1;
    for(int i=0;i<3;i++){
        int x=optimal_solution(v,w,used);
        if(x!=w){
            ret=0;
            break;
        }
        v=remove_elements(used,v);



    }
    if (ret==0) return 0;
    else return 1;

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    long long sum=0;
    v.push_back(0);
    for(int i=1;i<=n;i++) {
            cin>>v[i];
            sum+=v[i];
    }
    vector<bool>used(n+1);
    if(sum%3!=0) cout<<0<<endl;
    else {
           cout<<partition(v,sum,used)<<endl;    }
}
