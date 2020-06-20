#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v1;
vector<int>v;
void siftdown(int i){
   /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }*/
    int minindx=i;
    int l=2*i+1;
    if(l<v.size() && v[l]<v[minindx]) minindx=l;
    int r=2*i+2;
    if(r<v.size() && v[r]<v[minindx]) minindx=r;
    if(i!=minindx){
        swap(v[i],v[minindx]);
        v1.push_back(make_pair(i,minindx));
        siftdown(minindx);
    }


}









int main()
{
    int n;
    cin>>n;
    //vector<int>v(n);
    for(int i=0;i<n;i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=v.size()/2;i>=0;i--){
        siftdown(i);
    }

    cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++) cout<<v1[i].first<<" "<<v1[i].second<<endl;


}
