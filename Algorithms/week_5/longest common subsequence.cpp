#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int a[n+1];
    string s1,s2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i]+'0';
    }
    cin>>m;
    int b[m+1];
    for(int i=0;i<m;i++){
        cin>>b[i];
        s2+=b[i]+'0';
    }
    int p;
    cin>>p;
    int c[p+1];
    string s3;
    for(int i=0;i<p;i++){
        cin>>c[i];
        s3+=c[i]+'0';
    }


    int mat[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0) mat[i][j]=0;
            else if(s1[i-1]==s2[j-1]) mat[i][j]=mat[i-1][j-1]+1;
            else mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
        }
    }
    //cout<< mat[n][m]<<endl;
    int i=n,j=m,k=0;
         string s;
         while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]) {
                s+=s1[i-1];
                i--;j--;
            }
            else if(mat[i-1][j]>=mat[i][j-1]) i--;
            else j--;
         }
       //  cout<<"Case "<<p+1<<": ";
        // while(--k>=0) printf("%c ",ans[k]);
        reverse(s.begin(),s.end());
       //cout<<s<<endl;
        int mat2[p+2][s.size()+2];
        for(int i=0;i<=p;i++){
        for(int j=0;j<=s.size();j++){
            if(i==0||j==0) mat2[i][j]=0;
            else if(s3[i-1]==s[j-1]) mat2[i][j]=mat2[i-1][j-1]+1;
            else mat2[i][j]=max(mat2[i-1][j],mat2[i][j-1]);
        }
    }
    cout<<mat2[p][s.size()]<<endl;



}

