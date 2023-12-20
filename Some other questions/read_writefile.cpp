#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream hout("Sample.txt");
    string st;
    cout<<"enter name :"<<endl;
    cin>>st;
    hout<<st<<endl;

/*ifstream hin("Sample.txt");
    string content;
    hin>>content;
    cout<<"The name is : "<<content<<endl;
    hin.close();*/
    
}