// bubble sort
#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){//n-1 passes
        bool flag=false;
        for(int j=0;j<n-1-i;j++){//n-1-i comparisons
                if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }

        }
        if(flag==false) break;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubbleSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}