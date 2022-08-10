#include<bits/stdc++.h>
using namespace std;

//build queue using two stack 

//Logic: 
/*
    1. enqueue -> when enqeue is there you have to enter that elemeent from back
     side. 
    2. dequeue-> when a dequeue happen you have to remove one element form 
    front side.
*/
struct queue_imple{
private:
    stack<int> s1 ,s2;
public:
    void enqueue(int val){
        s1.push(val);
    }

    void dequeue(){
        if(s1.empty()==true){
            cout<<"queue is empty"; //error
        }
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            s2.pop(); //pop out target element 
            //now all queue return push into s1 
            while(s2.size()){
                s1.push(s2.top());
                s2.pop();
            }
        }
    }

    void print_s1(){
       stack<int>temp , temp2;
       temp=s1;

       while(temp.size()){
            temp2.push(temp.top());
            temp.pop();
       }
       while(temp2.size()){
        cout<<temp2.top()<<" ";
        temp2.pop();
       }
    }

};
int main(){
   struct queue_imple q1;
    q1.enqueue(3);
    q1.enqueue(4);
    q1.dequeue();
    q1.enqueue(5);
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.print_s1();
}
