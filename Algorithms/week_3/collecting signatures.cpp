#include<bits/stdc++.h>
using namespace std;
struct point{
    int x;
    int y;
};
bool  comp(point a,point b){
    return a.y<b.y;}
int main()
{
    int n;
    cin>>n;
    point p[n+1];
    int a,b;
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    sort(p,p+n,comp);
    vector<int>v1;
    int x1=p[0].y;
    v1.push_back(x1);
    //for(int i=0;i<n;i++) cout<<v[i].first<<" "<<v[i].second<<endl;

    for(int i=1;i<n;i++){
      if(x1<p[i].x || x1>p[i].y){
        x1=p[i].y;
        v1.push_back(x1);
      }

    }
   cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
    cout<<endl;
}
