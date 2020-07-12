#include<bits/stdc++.h>
using namespace std;
long long F[47];
long long fib(int n){
    F[0]=0;
    F[1]=1;
    for(int i=2;i<=60;i++){
        F[i]=(F[i-1]+F[i-2])%10;
    }
    return F[n%60];

}
//last digit of nth fibo 60 ta prjnto sequence thake
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
}
