// checks the no. is palindrome or not
// palindrome means it is same from both sides
#include<iostream>
using namespace std;
bool ispalindrome(int num,int &temp){
    if(num>=0&&num<=9){
        int lastDigitofTemp=temp%10;
        temp/=10;
        return(num==lastDigitofTemp);

    }
    bool result=(ispalindrome(num/10,temp)&&(num%10==temp%10));
    temp/=10;
    return result;
}
int main(){
    int num=142;
    int anothernum=num;
    cout<<ispalindrome(num,anothernum)<<endl;
    return 0;


}