#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double capacity;
    cin>>n>>capacity;
    double w,vi;
    vector<pair<double ,double>>v;
    for(int i=0;i<n;i++){
        cin>>vi>>w;
        v.push_back(make_pair((vi/w),w));
    }
    sort(v.begin(),v.end());
    double sum=0;
    for(int i=v.size()-1;i>=0;i--){
            //cout<<v[i].first<<" "<<v[i].second<<endl;
            if(v[i].second<capacity){
              sum+=(v[i].first*v[i].second);
              capacity-=v[i].second;
            }
           else{
                sum+=(v[i].first*capacity);
                break;

            }
            //cout<<sum<<capacity<<endl;

    }
    cout<<fixed<<setprecision(4)<<sum<<endl;


}
