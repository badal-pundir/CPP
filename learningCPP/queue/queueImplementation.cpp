// Array implementation
#include<bits/stdc++.h>
using namespace std;

struct Queue {
    int front, rear, capacity;
    int* queue;

    Queue(int c) {
        front = 0;
        rear = -1;
        capacity = c;
        queue = new int[c];
    }
    ~Queue() { delete[] queue;}

    void queueEnqueue(int data) {
        if(rear == capacity - 1) {
            cout<<"Queue is full\n";
            return;
        }

        queue[++rear] = data;
    }

    void queueDequeue() {
        if(front > rear) {
            cout<< "Queue is empty\n";
            return;
        }

        for(int i = 0 ; i < rear; i++) {
            queue[i] = queue[i + 1];
        }
        rear--;
    }

    void queueDisplay() {
        if(front > rear) {
            cout<<"Queue is Empty\n";
        }
        for(int i = 0 ; i<= rear; i++) {
            cout<< queue[i] <<"<---";
        }
        cout<<"\n";
    }

    void queueFront() {
        if(rear == -1) {
            cout<<"Queue is Empty\n";
            return;
        }
        cout<<"Front Element is: "<< queue[front];
    }
};

int main() {
    Queue q(4);
    q.queueDisplay();

    q.queueEnqueue(10);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);

    q.queueDisplay();
    
    q.queueEnqueue(60);
    q.queueDisplay();

    q.queueDequeue();
    q.queueDisplay();

    q.queueFront();
    return 0;
}



