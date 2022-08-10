#include<bits/stdc++.h>
using namespace std;


/*
push1(int x) –> pushes x to first stack 
push2(int x) –> pushes x to second stack
pop1() –> pops an element from first stack and return the popped element 
pop2() –> pops an element from second stack and return the popped element
*/
#define N 100
struct twoStack{
private:
    int arr[N];
    int first=-1;
    int second=N/2-1;
public:
    void push1(int val){
        arr[++first]=val;
    }
    void push2(int val){
        arr[++second]=val;
    }

    int pop1(){
        if(first<0){
            cout<<"stack-1 is underflow\n";
            return -1;
        } 

        return arr[first--];

    }
     int pop2(){
        if(second<N/2){
            cout<<"stack:2 is underflow\n";
            return -1;
        } 

        return arr[second--];

    }
    void get_value(){
        cout<<"first half\n";
        for(int i=0;i<=first;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"second half\n";
        for(int i=N/2;i<=second;i++){
            cout<<arr[i]<<" ";
        }
    }


};
int main(){
    twoStack s1;
    s1.push1(2);
    s1.push2(3);
    s1.pop1();
    s1.push1(5);
    s1.push1(8);
    s1.get_value();
}

/*
  TIME COMPLEXITY : PUSH: O(1)
                    POP : O(1)
  SPACE COMPLEXITY:
              O(N)
*/
