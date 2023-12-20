#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool isIsomorphic(string s1,string s2){
    //checking size
    if(s1.size()!=s2.size()){
        return false;

    }
    //making 2 freq arrays and assigning with -1
    vector<int> f1(128,-1);
    vector<int> f2(128,-1);
    //if num at pos and num at pos have same value assign it with their index otherwise return false
    for(int i=0;i<s1.size();i++){
        if(f1[s1[i]]!=f2[s2[i]]){
            return false;
   
        }else{
            f1[s1[i]]=f2[s2[i]]=i;

        }
        
    }
    return true;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    bool a=isIsomorphic(s1,s2);
    a?cout<<"yes":cout<<"No";

}