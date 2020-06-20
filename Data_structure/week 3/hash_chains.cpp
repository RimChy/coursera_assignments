//eiita korte giye ami moira gesi

#include<bits/stdc++.h>
using namespace std;

class Hash
{
    int BUCKET;    // No. of buckets

    // Pointer to an array containing buckets
    list<string> *table;
public:
    Hash(int V);  // Constructor

    // inserts a key into hash table
    void insertItem(string s,int m);

    // deletes a key from hash table
    void deleteItem(string s,int m);

    bool findItem(string s,int m);

    // hash function to map values to key
    int hashFunction(string s,int m) {
        static const size_t multiplier = 263;
    static const size_t prime = 1000000007;
    unsigned long long hash = 0;
    for (int i = static_cast<int> (s.size()) - 1; i >= 0; --i)
        hash = (hash * multiplier + s[i]) % prime;
    return hash % m;
    }

    void displayHash(int n);
};

Hash::Hash(int b)
{
    this->BUCKET = b;
    table = new list<string>[BUCKET];
}

void Hash::insertItem(string key,int m)
{
    int index = hashFunction(key,m);
    list<string>::iterator it;
    for(auto it=table[index].begin();it!=table[index].end();it++){
        if(*it==key) return;
    }


            table[index].push_back(key);
}

void Hash::deleteItem(string key,int m)
{
  // get the hash index of key
  int index = hashFunction(key,m);

  // find the key in (inex)th list
  list <string> :: iterator i;
  for (i = table[index].begin();
           i != table[index].end(); i++) {
    if (*i == key) break;
  }

  // if key is found in hash table, remove it
  if (i != table[index].end())
    table[index].erase(i);
}
bool Hash::findItem(string key,int m){
    int index=hashFunction(key,m);
    list<string>::iterator it;
    bool flag=false;
    for(it=table[index].begin();it!=table[index].end();it++){
        if(*it==key){
           flag=true;
           break;

        }
    }
    return flag;
}

// function to display hash table
void Hash::displayHash(int n) {
    list<string>::reverse_iterator it;
    for (it=table[n].rbegin();it!=table[n].rend();it++)
      cout  << *it<<" ";
    cout << endl;

}

// Driver program
int main()
{
  // array that contains keys to be mapped
  int n,m;
  cin>>m>>n;

  // insert the keys into the hash table
  Hash h(m);   // 7 is count of buckets in
               // hash table
while(n--){
 string s;
 cin>>s;
 if(s=="add"){
    string s1;
    cin>>s1;
    h.insertItem(s1,m);
    // h.displayHash();
 }
  else if(s=="del"){
    string s1;
    cin>>s1;
    h.deleteItem(s1,m);
   //  h.displayHash();
  }
  else if(s=="find"){
    string s1;
    cin>>s1;
    if(h.findItem(s1,m)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  else{
    int n;
    cin>>n;
    h.displayHash(n);

  }

  // display the Hash table

               }

  return 0;
}
