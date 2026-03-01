#include<iostream>
#include<vector>
#include<stack>
using namespace std;

 class Stack{
     public:

     int *arr;
     int size;
     int top;


Stack( int size){
    this->size = size;
    arr = new int[size];
    top = -1;


    
}
 void push(int elemnet ){
    if( size-top>0){
        top++;
        arr[top]= elemnet;

    }else{
         cout<<"stack overflow ";

    }
 }

 void pop(){
    if(top>0){
        top--;


    }else{
         cout<<"underflow ";


    }

 }
 int peek(){
    if(top> 0){
        return arr[top];

    }else{
        cout<<"stack is empty ";
        return -1;

        
    }
 }
 };



 int main(){
    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    cout<<st.peek()<<endl;
    


 }