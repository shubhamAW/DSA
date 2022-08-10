#include<iostream>
using namespace std;

//design stack using array 

#define N 1000
class stack{
private:
    int top;
    int arr[N];
public:
    stack(){
        top=-1;
    }
    //get push
    void push(int val){
        if(top>=N-1){
            cout<<"stack is overflow\n";
        }else{
            arr[++top]=val;
        }
    }
    //get pop out 
    int pop(){
        if(top<0){
            cout<<"\nstack is underflow\n";
            return -1;
        }else{
         return arr[top--];
        }
        return -1;
    }
    //is empty
    bool isEmpty(){
        if(top<0) return true;
        else return false;
    }
    //get top value
    int get_top(){
        return arr[top];
    }
};

int main(){
    class stack s1;
    s1.push(2);
    s1.push(3);
    cout<<s1.get_top()<<endl;
    cout<<s1.isEmpty()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.get_top()<<endl;
    cout<<s1.pop();
    cout<<s1.pop();
    cout<<s1.pop();
    cout<<s1.pop();
}
