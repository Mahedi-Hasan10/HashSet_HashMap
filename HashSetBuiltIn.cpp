#include<bits/stdc++.h>
using namespace std;


int main()
{
   unordered_set<int> hashSet;
   hashSet.insert(1);
   hashSet.insert(2);
   hashSet.insert(3);
   hashSet.insert(4);
   for(auto it = hashSet.begin(); it != hashSet.end();it++)
   {
    cout<<*it<<" ";
   }
   cout<<endl;
    cout << "The size of hash set is: " << hashSet.size() << endl; 
    hashSet.clear();
    if (hashSet.empty()) {
        cout << "hash set is empty now!" << endl;
    }
    return 0;
}