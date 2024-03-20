#include<bits/stdc++.h>
using namespace std;


class MyHashSet{
    private:
        vector<bool> set;
    public:
    MyHashSet()
    {
        set.resize(1000001, false);
    }
    void add(int key)
    {
        set[key] = true;
    }
    void remove(int key)
    {
        set[key] = false;
    }
    bool contains(int key)
    {
        return set[key];
    }

};


int main()
{
    MyHashSet myHashSet;
    myHashSet.add(1);      
    myHashSet.add(2);      
    cout<<myHashSet.contains(1)<<endl;
    cout<<myHashSet.contains(3)<<endl;
    myHashSet.add(2);     
    cout<<myHashSet.contains(2)<<endl;
    myHashSet.remove(2);   
    cout<<myHashSet.contains(2)<<endl; 
    return 0;
}