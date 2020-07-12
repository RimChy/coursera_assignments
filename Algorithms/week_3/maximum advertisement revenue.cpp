#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long  a[n+1],b[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=(a[i]*b[i]);
    }
    cout<<sum<<endl;
}
