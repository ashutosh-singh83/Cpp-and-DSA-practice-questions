//next greater element
//for finding previous greater element(pge) or pse just reverse the original array and also output array
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge(vector<int> &v){
    int n=v.size();
    vector<int> output(n,-1);//if not initialized by -1 then at end all places remained in stack will be replaced by -1
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty()&& v[i]>v[st.top()]){//for next smaller element change the sign only
            output[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    return output;
}
int main(){
    vector<int> v={1,3,8,5,3,7,4};
    vector<int> res=nge(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}