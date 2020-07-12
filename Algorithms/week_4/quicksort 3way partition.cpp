#include<bits/stdc++.h>
using namespace std;
struct point{
    int m1;
    int m2;
};
point partition_(int a[],int l,int h){
    int x=a[l],i=l,j=l;
    while(i<=h){
        if(a[i]>x){
            swap(a[i],a[h]);
            h--;

        }
        else if(a[i]<x){
                swap(a[i],a[j]);
            i++;
            j++;
        }
        else {
            i++;
        }
    }

    //return ;
    point p={j,h};
    return p;



}
void quicksort(int a[],int l,int h){

    if (l < h)
    {

        point pi = partition_(a,l,h);


        // Separately sort elements before
        // partition and after partition
        quicksort(a, l, pi.m1-1);
        quicksort(a, pi .m2+1, h);
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int l,h;
    point p;
    for(int i=0;i<n;i++) cin>>a[i];
    //p=partition_(a,n);

     quicksort(a,0,n-1);
     for(int i=0;i<n;i++) cout<<a[i]<<" ";
     cout<<endl;
    //cout<<l<<" "<<h<<endl;
    //for(int i=0;i<n;i++) cout<<a[i]<<endl;

}
