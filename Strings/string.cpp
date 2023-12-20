#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="Rishabh";
    
    
    
    string abc(str);
    cout<<str<<endl;
    string s(5,'n');
    cout<<s<<endl;
    cout<<abc<<endl;
    string s1;
    getline(cin,s);
    cout<<s<<endl;
    cout<<str.append(s)<<endl;
    cout<<str+s<<endl;
    cout<<str.assign("Ashutosh")<<endl;
    cout<<str.at(3)<<endl;
    cout<<str[3]<<endl;
    str.clear();
    cout<<str<<endl;
    string s2="abc",s3="xyz";
    cout<<s2.compare(s3)<<endl;
    cout<<s3.compare(s2)<<endl;
    if(str.empty()){
        cout<<"String is empty"<<endl;
    }
    string s4="aeroplane";
    s4.erase(3,3);
    cout<<s4<<endl;
    s4.insert(3,"opl");
    cout<<s4<<endl;
    cout<<s4.find("opl")<<endl;
    cout<<s4.length()<<endl;
    s4.resize(6);
    cout<<s4<<endl;
    cout<<s4.size()<<endl;
    cout<<s4.substr(3,3)<<endl;
    string s5="108";
    int x=stoi(s5);
    cout<<x<<endl;
    cout<<to_string(x)+"2"<<endl;
    sort(s4.begin(),s4.end());
    cout<<s4<<endl;


    
}