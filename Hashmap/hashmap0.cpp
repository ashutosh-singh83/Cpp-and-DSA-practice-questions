#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Hashing{
    vector<list<int>> hashtable;
    int buckets;
    public:
    Hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }
    int hashvalue(int key){
        return key%buckets;//division method
    }
    void addKey(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator searchKey(int key){
        int idx=hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);

    }
    void deleteKey(int key){
        int idx=hashvalue(key);
        if(searchKey(key)!=hashtable[idx].end()){//key is present
            hashtable[idx].erase(searchKey(key));
            cout<<key<<"is deleted";

        }
        else{
            cout<<"key is not present"<<endl;
        }
    }


};
int main(){
    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(6);
    h.addKey(56);
    h.deleteKey(56);
    return 0;
}
