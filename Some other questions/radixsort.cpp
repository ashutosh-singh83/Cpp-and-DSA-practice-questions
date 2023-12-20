#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int> &v,int pos){
    int n=v.size();
    
    //freq array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }
    //calc cumulative frequency
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }
    //sorted ans array
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }

}
void radixsort(vector<int> &v){
    int n=v.size();
    int maxele=-99;
    for(int i=0;i<n;i++){
        maxele=max(v[i],maxele);
    }
    for(int pos=1;(maxele/pos)>0;pos*=10){
        countsort(v,pos);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radixsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}