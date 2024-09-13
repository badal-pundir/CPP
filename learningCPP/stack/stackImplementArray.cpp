// Implemneting stack using array
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
class Stack{
    private:
        int top;
    public:
        int a[MAX];
        Stack(): top(-1){};
        Stack(int val_param): top(val_param){};
        bool push(int val_param);
        int pop();
        int peek();
        bool isEmpty();
        bool isFull();

};

bool
Stack::push(int val_param)
{
    // isFull();
    if(top >= (MAX - 1)) {
        cout<<" Stack OverFlow";
    }
    else{
        a[++top] = val_param;
        cout<<val_param<<" pushed into stack\n";
        return true;
    }
    return false;
}

int Stack::pop()
{
    if(top < 0){
        cout<<" Stack UnderFlow";
        return INT_MIN;
    }
    else{
        int x = a[top--];
        return x;
    }
    return 0;
}

bool Stack::isEmpty()
{
    if(top < 0)
        return true;
    return false;
}

int Stack::peek()
{
    if(top < 0) {
        cout<<"Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isFull()
{
    if(top == MAX - 1) return true;
    return false;
}

int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    // cout<< s.pop()<< " popped from stack\n";
    while (!s.isEmpty())
    {
        cout<< s.peek()<< " ";
        s.pop();
    }
    cout<<"\n"<< s.peek();
    return 0;
}
