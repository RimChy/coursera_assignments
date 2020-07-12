#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n/10,y=n%10;
    if(y==0) cout<<x<<endl;
    else{
        if(y>=5){
            cout<<x+1+y-5<<endl;
        }
        else cout<<x+y<<endl;
    }
}
