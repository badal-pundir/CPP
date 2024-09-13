// linked list queue implmentation
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int new_data): data(new_data), next(nullptr){};
        Node(int new_data, Node* new_pointer) {
            this -> data = new_data;
            this -> next = new_pointer;
        }
};

class Queue {
    Node *front, *rear;

    public:
        Queue() { front = rear = nullptr;}

        bool isEmpty() {
            if(front == nullptr) {
                return true;
            }
            return false;
        }

        void enqueue(int new_data) {
            Node* new_node = new Node(new_data);
            if(this -> isEmpty()) {
                front = rear = new_node;
                return;
            }
            rear -> next = new_node;
            rear = new_node;            
        }

        void dequeue() {
            if(this -> isEmpty()) {
                cout<< "Queue is Empty\n";
                return ;
            }
            Node* temp = front;
            front = front -> next;

            if(front == nullptr) // if front becomes nullptr
                rear = nullptr;

            delete temp;
        }

        int getFront() {
            if(this -> isEmpty()) {
                cout<<"Queue is Empty\n";
                return INT_MIN;
            }
            return front -> data;
        }

        int getRear() {
            if(this -> isEmpty()) {
                cout<<"Queue is Empty\n";
                return INT_MIN;
            }

            return rear -> data;
        }
};

int main(void) {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);

    // Display the front and rear elements of the queue
    cout << "Queue Front: " << q.getFront() << endl;
    cout << "Queue Rear: " << q.getRear() << endl;

    
    // Dequeue elements from the queue
    q.dequeue();
    q.dequeue();

    // Enqueue more elements into the queue
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Dequeue an element from the queue
    q.dequeue();

    // Display the front and rear elements of the queue
    cout << "Queue Front: " << q.getFront() << endl;
    cout << "Queue Rear: " << q.getRear() << endl << endl;
}