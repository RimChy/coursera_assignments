#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
vector<int>result;

void inorder( int key[], int left[], int right[],int index)
{
   // vector<int>result;
    if(index==-1) return;
    inorder(key, left, right, left[index]);
    result.push_back(key[index]);
    inorder(key, left, right, right[index]);


}

bool IsBinarySearchTree(int key[],int left[],int right[],int nodes) {
    //Implement correct algorithm here
    if (nodes > 1) {
        inorder(key,left,right,0);
        for (int i = 1; i < result.size(); i++) {
            if (result[i] < result[i - 1]) return false;
        }
    }
    return true;
}

int main() {
    int nodes;
    cin >> nodes;
    int key[nodes+1],left[nodes+1],right[nodes+1];

    for (int i = 0; i < nodes; ++i) {

        cin >> key[i] >> left[i] >> right[i];

    }
  //inorder(key,left,right,0);
   //for(int i=0;i<result.size();i++) cout<<result[i]<<" ";
    if (IsBinarySearchTree(key,left,right,nodes)==true) {
        cout << "CORRECT" << endl;
    } else {
        cout << "INCORRECT" << endl;
    }
    return 0;
}
