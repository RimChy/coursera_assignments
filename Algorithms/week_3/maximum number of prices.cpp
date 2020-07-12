#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    int sum=0,i=1;
    while(sum<n){
            sum+=i;
        if(n-sum<=i){
            v.push_back(n-sum+i);
            break;
        }
        else v.push_back(i);
        i++;

    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;

}
