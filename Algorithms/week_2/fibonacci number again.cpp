#include<bits/stdc++.h>
using namespace std;
int F[10000005];
int fib(long long int m){
    F[0]=0;
    F[1]=1;
    int i=2,l=0;
    while(true){
        F[i]=(F[i-1]+F[i-2])%m;
        if(F[i]==1 && F[i-1]==0){
            l=i-1;
            break;
        }
        else i++;
    }
    return l;
}
int main()
{
    long long int k,m;
    cin>>k>>m;
    long long x=k%fib(m);
    cout<<F[x]<<endl;
        //int x=fib(n)%m;
    //cout<<x<<endl;
}
