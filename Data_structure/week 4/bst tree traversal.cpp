#include<bits/stdc++.h>
using namespace std;

void Printpreorder(int key[], int left[], int right[], int index)
{
    if(index==-1)
        return;

    cout<<key[index]<<" ";

    Printpreorder(key, left, right, left[index]);
    Printpreorder(key, left, right, right[index]);


}

void Printinorder( int key[], int left[], int right[],int index)
{
    if(index==-1)
        return;
    Printinorder(key, left, right, left[index]);
    cout<<key[index]<<" ";
    Printinorder(key, left, right, right[index]);

}

void Printpostorder(int key[], int left[], int right[], int index)
{
    if(index==-1)
        return;

    Printpostorder(key, left, right, left[index]);
    Printpostorder(key, left, right, right[index]);

    cout<<key[index]<<" ";

}

int main()
{


    int n;
    cin>>n;
    int key[n+1],left[n+1],right[n+1];
    for(int i=0; i<n; i++)
        cin>>key[i]>>left[i]>>right[i];

    Printinorder(key, left, right, 0);
    cout<<endl;
    Printpreorder(key, left, right, 0);
    cout<<endl;
    Printpostorder(key, left, right, 0);
    cout<<endl;

}
