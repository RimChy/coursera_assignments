#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int F[70],f[70],f1[70][70];
    F[0]=0,F[1]=1,f[0]=0,f[1]=1;

    for (int i=2;i<=60;i++){
            F[i]=(F[i-1]%10+F[i-2]%10)%10;
            f[i]=(f[i-1]+F[i])%10;


    }
      long long int n,m;
      //cout<<f[10]<<endl;
    cin>>m>>n;
    if(m==n) cout<<F[n%60]<<endl;
    else{
            if(m!=0){
    if(f[n%60]%10<f[(m-1)%60]%10){
        cout<<(f[n%60]%10+10)-(f[(m-1)%60]%10)<<endl;
    }
    else{
            cout<<f[n%60]%10-(f[(m-1)%60]%10)<<endl;
    }
            }
            else {
                 if(f[n%60]%10<f[m%60]%10){
        cout<<(f[n%60]%10+10)-(f[m%60]%10)<<endl;
    }
    else{
            cout<<f[n%60]%10-(f[m%60]%10)<<endl;
    }
            }
    }

}
