#include<bits/stdc++.h>
using namespace std;
long long f[100],f1[100];
long long  fib(long long int n){
    f[0]=0;
    f[1]=1;
    f1[0]=0;
    f1[1]=1;
    for(int i=2;i<=60;i++){
        f[i]=(f[i-1]+f[i-2])%10;
        f1[i]=(f1[i-1]+(f[i]*f[i])%10)%10;
    }

    return f1[n%60];
}
int main()
{
    long long n;
    cin>>n;
    cout<<fib(n)<<endl;
}
