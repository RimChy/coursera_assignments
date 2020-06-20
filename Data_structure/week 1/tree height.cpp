#include <bits/stdc++.h>

using namespace std;
int n;
int parent[100001],cache[100001];
int path_len(int i)
{
    int parentt=parent[i];
    if(parentt==-1) return 1;
    if(cache[i]) return cache[i];

    cache[i] = 1 + path_len(parent[i]);
    return cache[i];


}
int main()
{
    //int n;
    cin>>n;
  //  int parent[n+1];
  int x=0,maxx=0;
    for(int i=0;i<n;i++) cin>>parent[i];
    for(int i=0;i<n;i++){
        x=path_len(i);
        maxx=max(maxx,x);

    }
    cout<<maxx<<endl;


}
