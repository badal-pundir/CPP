#include <iostream>
#include <vector>
using namespace std;

// Creating a node.
struct Node
{
    int data;
    Node *next;
    Node(int data_param, Node *p_next_param) : data(data_param), next(p_next_param) {};
};

void convertArr2LL(Node *&head, vector<int> &arr)
{
    head = new Node(arr[0], nullptr);
    Node *mover = head;

    for (int i = 1; i < static_cast<int>(arr.size()); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
}

void printList(Node *head)
{
    Node *curr_node = head;
    while (curr_node != nullptr)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
}

Node *reverse(Node *head2)
{
    Node *prev = nullptr;
    Node *temp = head2;

    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    Node* mover = prev;
    while(mover){
        cout<<mover->data<<" ";
        mover = mover -> next;
    }
    cout<<endl;
    return prev;
}
bool isPalindrome(Node *head)
{
    Node *prev = NULL;
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *head2 = nullptr;

    if (fast == NULL)
    {
        head2 = slow;
        prev->next = NULL;
    }
    else
    {
        head2 = slow->next;
        prev->next = NULL;
    }
    // while(mover){
    //     cout<<mover->data<<" ";
    //     mover = mover -> next;
    // }
    // cout<<endl;

    head2 = reverse(head2);

    Node* mover = head;
    Node* mover2 = head2;
    while (mover && mover2)
    {
        if (mover->data != mover2->data)
        {
            return false;
        }
        mover = mover -> next;
        mover2 = mover2 -> next;
    }

    return true;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 1};
    // Node* head = new Node(data,  nullptr);

    Node *head = nullptr;
    convertArr2LL(head, arr);
    // printList(head);
    if(isPalindrome(head)) cout<< "ture";
    else cout<<"false";

    return 0;
}