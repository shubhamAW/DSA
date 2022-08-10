#include<bits/stdc++.h>
using namespace std;
//implement stack using STL
//functions 
//1. push() -> push element into stack
//2. pop() -> pop (remove) element form stack
//3. empty() -> check whether stack is empty or not (returns bool value)
//4. top() -> function return top element of stack
//5. size() -> return the current size of stack.

int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"top is :"<<s.top()<<endl;
    cout<<"size of stack :"<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
