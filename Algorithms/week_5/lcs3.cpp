#include<bits/stdc++.h>
using namespace std;
int LCS(int _One[],int _Second[],int _third[], int a, int b, int c) {
	vector<vector<vector<int>>> Longest(a + 1,vector<vector<int>>(b + 1,vector<int>(c + 1)));

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (i == 0 || j == 0 || k == 0) {
					Longest[i][j][k] = 0;
					continue;
				}
				else if (_One[i - 1] == _Second[j - 1] && _One[i - 1] == _third[k - 1]) {
					Longest[i][j][k] = Longest[i - 1][j - 1][k - 1] + 1;
					continue;
				}
				else {
					Longest[i][j][k] =
						max( max(Longest[i - 1][j][k], Longest[i][j - 1][k]),
							Longest[i][j][k - 1]);
				}
			}

		}
	}
	return Longest[a][b][c];
}
int main()
{
    int n,m;
    cin>>n;

    int a[n+2];
    string s1,s2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        //a[i]=rand()%10;
        //s1+=a[i]+'0';
    }
    cin>>m;
    int b[m+2];
    for(int i=0;i<m;i++){
        cin>>b[i];
        //s2+=b[i]+'0';
    }
    int p;
    cin>>p;
    int c[p+2];
    string s3;
    for(int i=0;i<p;i++){
        cin>>c[i];
       // s3+=c[i]+'0';
    }
  //cout<<s3<<endl;


  /*  int mat[n+3][m+3][p+3];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
                for(int k=0;k<=p;k++){
            if(i==0||j==0 || k==0) mat[i][j][k]=0;
            else if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1] ) mat[i][j][k]=mat[i-1][j-1][k-1]+1;
            else mat[i][j][k]=max(mat[i-1][j][k],max(mat[i][j-1][k],mat[i][j][k-1]));
        }
    }
    }*/
    cout<<LCS(a,b,c,n,m,p)<<endl;







}

