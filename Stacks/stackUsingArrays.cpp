//stack implementation using arrays
#include<iostream>
#include<climits>
using namespace std;
class Stack{
    int capacity;
    int top;
    int*arr;
    public:
    Stack(int c){
        capacity=c;
        arr=new int[c];//dynamic memory allocation
        top=-1;

    }
    void push(int data){
        if(this->top==capacity-1){
            cout<<"overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top]=data;
    }
    int pop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        this->top--;

    }
    int getTop(){
        if(this->top==-1){
            cout<<"underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }
    int size(){
        return this->top+1;
    }
    bool isFull(){
        return this->top==this->capacity-1;
    }
    bool isEmpty(){
        return this->top==-1;
    }
};
int main(){
    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    
    cout<<st.getTop()<<endl;
}
