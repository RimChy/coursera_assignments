#include<bits/stdc++.h>
using namespace std;
long long max_pairwise_result(const vector<long long int>&v){
    long long int n=v.size();
    long long int indx1=-1,indx2=-1;
     for(long long int i=0;i<n;i++){
        if(v[i]>v[indx1] || indx1==-1)
            indx1=i;
     }
     for(long long int i=0;i<n;i++){
        if(i!=indx1 && (indx2==-1 || v[i]>v[indx2])){
                indx2=i;
           }
     }
     long long result=v[indx1]*v[indx2];
     return result;
}

/*long long max_pairwise_result2(const vector<int>&v){
    long long result=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]*v[j]>result) result=v[i]*v[j];
        }
    }
    return result;
}*/
int main()
{
    /*while(true){
        int n=rand() %10+2;
        cout<<n<<endl;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(rand()%10);

        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        long long res1=max_pairwise_result(v),res2=max_pairwise_result2(v);
        if(res1!=res2){
            cout<<res1<<" "<<res2<<endl;
            break;
        }
        else cout<<"ok"<<endl;
    }*/

    long long int n;
    cin>>n;
    vector<long long int>v;
    long long int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<max_pairwise_result(v)<<endl;
}
