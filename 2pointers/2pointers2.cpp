#include<iostream>
#include<vector>
using namespace std;
void sortarr01(vector<int> &v,int n){
    int left_ptr=0;
    int right_ptr=n-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1&&v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        else if(v[left_ptr]==0){
            left_ptr++;
        }
        else{
            right_ptr--;
        }

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
    sortarr01(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}