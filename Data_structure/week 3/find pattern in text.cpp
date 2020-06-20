#include<bits/stdc++.h>
using namespace std;
string text,pattern;

int d=256,q=5,m,h,p,c=0;
void find_h()
{
     h=1;
    for(int i=1; i<m; i++)
    {
        h=(h*d)%q;

    }
  //cout<<"the value of h is"<<h<<endl;

}
void find_hash()
{
     p=0;
    for(int i=0; i<m; i++)
    {
        p=(p*d+pattern[i])%q;
    }
    //cout<<"the value of pattern is"<<p<<endl;
}
vector<int> find_value(string text)
{
    vector<int>v;
    int l=text.size(),t=0,j;
    for(int i=0; i<l; i++)
    {
        if(i<=m-1)
            t=(t*d+text[i])%q;
        else
        {
            t=(d*(t-text[i-m]*h)+text[i])%q;
            if(t<0)
                t+=q;
        }
       // cout<<"the value of index"<<i<<"is"<<t<<endl;
        if(i>=m-1 && t==p)
        {
            for( j=0; j<m; j++)
            {
                if(pattern[j]!=text[i+j+1-m])
                    break;
            }
            if(j==m){
               // cout<<"pattern is found at index"<<i-m+1<<endl;
                               v.push_back(i-m+1);
               // c++;
            }
        }
    }
    return v;
}
int main()
{
    cin>>pattern>>text;
    vector<int>v;
    m=pattern.size();
    find_h();
    find_hash();
    v=find_value(text);
   // cout<<c<<endl;
   for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
   cout<<endl;
}

