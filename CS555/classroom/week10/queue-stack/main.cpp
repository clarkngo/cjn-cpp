#include <iostream>
using namespace std;

class Node{
    public:
        float val;
        Node *next;
    Node(float val)
    {
        this->val = val;
        this->next = NULL;
    }

};

class Stack{
    public:
        Node *top;
        int size;
        Stack(){
            this->top = NULL;
        }
        void insertNode(float val){
            Node* node = new Node(val);
            if (this->top == NULL)
            {
                this->top = node;
                return;
            }
            node->next = this->top;
            this->top = node;
            size++;
        }

        Node* removeNode()
        {
            if (this->top == NULL)
                return NULL;

            Node* node = this->top;
            delete(node);
10 9 8
            this->top = this->top->next;

            return node;
        }

        float peekTop()
        {
            if (this->top == NULL)
                return NULL;
            return this->top->val;
        }
};

class Queue{
    public:
        Node *front;
        Node *back;
        int size;
        Queue(){
            this->front = NULL;
            this->back = NULL;
        }
        void insertNode(float val){
            Node *node = new Node(val);

            if(this->back == NULL){
                this->front = node;
                this->back = node;

            }else{
                this->back->next = node;
                this->back = node;
            }
            size++;
        }

        Node* removeNode()
        {
            if (this->front == NULL)
                return NULL;

            Node* node = this->front;
            delete(node);

            this->front = this->front->next;

            if (this->front == NULL)
                this->back = NULL;
            return node;
        }

        void printNodes()
        {
            Node *dummy_node = new Node(-1);
            dummy_node = this->front;

            while (dummy_node != NULL)
            {
                cout << dummy_node->val << endl;
                dummy_node = dummy_node->next;
            }
        }
};

int main(){
    Queue queue;
    queue.insertNode(10);
    queue.insertNode(9);
    queue.insertNode(8);
    queue.printNodes();
    queue.removeNode();
    queue.printNodes();

    Stack stack;
    stack.insertNode(10);
    stack.insertNode(9);
    stack.insertNode(8);
    cout << stack.peekTop() << endl;
    stack.removeNode();
    cout << stack.peekTop() << endl;
    stack.removeNode();
    cout << stack.peekTop() << endl;
    stack.removeNode();
    cout << stack.peekTop() << endl;
    return 0;
}