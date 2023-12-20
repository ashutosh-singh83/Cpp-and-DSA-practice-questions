//all permutations of string in lexicographical order
#include<iostream>
using namespace std;
void permutation(string &str,int i){
    if(i==str.length()){
        cout<<str<<endl;
        return;
    }
    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        permutation(str,i+1);
        swap(str[j],str[i]);
    }
}
int main(){
    string str;
    cin>>str;
    cout<<endl;
    permutation(str,0);
    return 0;
}