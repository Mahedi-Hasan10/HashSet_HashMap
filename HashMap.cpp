#include<bits/stdc++.h>
using namespace std;

class MyHashMap {
private:
    vector<int> map;
public:
    MyHashMap() {
        map.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
    }
};


int main()
{
    MyHashMap myMap;
    myMap.put(1,1);
    myMap.put(2,2);
    myMap.put(3,3);
    cout<<myMap.get(2)<<endl;
    cout<<myMap.get(4)<<endl;
    myMap.remove(3);
    cout<<myMap.get(3)<<endl;
    
    return 0;
}