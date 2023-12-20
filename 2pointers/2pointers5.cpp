#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    vector<int> v1;
    for(int i=0;i<n;i++){
        v1.push_back(v[i]*v[i]);
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<v1.size()-1;i++){
        for(int j=i;j<v1.size();j++){
            if(v1[i]>v1[j]){
                int temp=v1[j];
                v1[j]=v1[i];
                v1[i]=temp;
            }
        }
    }
    cout<<"The square of the sorted array is :"<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    return 0;

}