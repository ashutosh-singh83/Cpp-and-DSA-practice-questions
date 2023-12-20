#include<iostream>
using namespace std;
 int main(){
    char c;
    cout<<"Enter any alphabet\n";
    cin>>c;
    int islowercase,isuppercase;
    islowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isuppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(islowercase||isuppercase){
        cout<<"Vowel";
    }else{
        cout<<"Consonants";
    }return 0;


}
 