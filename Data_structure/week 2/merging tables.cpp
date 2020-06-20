#include<bits/stdc++.h>
using namespace std;
int n,m,lines[100000],maxx,parent[100000],rankk[100000]={1};

int main()
{
    int x=1,p=0;
    while(x++<100){
        x*=x;
        if(x<10) continue;
        if(x>50) break;
        p++;
    }
    cout<<p<<endl;
}
/*int getParent(int table){
    if(table != parent[table]){
	parent[table] =  getParent(parent[table]);
    }
    return parent[table];
}

bool merge(int destination,int source){

   int  realDestination= getParent(destination),realSource=getParent(source);

    if (realDestination == realSource)
        return false;


    if (rankk[realDestination] < rankk[realSource]){
        parent[realDestination] = realSource;
        lines[realSource] += lines[realDestination];
        lines[realDestination] = 0;
    }
    else{
        parent[realSource] = realDestination;
        lines[realDestination] += lines[realSource];
        lines[realSource] = 0;
        if (rankk[realDestination] == rankk[realSource])
            rankk[realDestination] += 1;
    }
    maxx = max(maxx,max( lines[realSource], lines[realDestination]));

    return true;
}





int main()
{
    int n,m;
    cin>>n>>m;
    maxx=0;
    for(int i=0;i<n;i++) {
        cin>>lines[i];
        if(lines[i]>maxx) maxx=lines[i];
    }
    for(int i=0;i<n;i++) parent[i]=i;
    int dest,source;
    for(int i=0;i<m;i++){
        cin>>dest>>source;
        merge(dest-1,source-1);
        cout<<maxx<<endl;
    }

}*/
