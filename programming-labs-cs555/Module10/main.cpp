// Author @Clark Jason Ngo
/*
 * C++ Program to Implement Queue using Linked List
 */

/*
*		PSEUDO CODE
*/

/* 1st Program */
// create empty queue
// add node to the back of the queue using enqueue
// add node to the back of the queue using enqueue
// remove node from the front of the queue using dequeue and assign it to a new node
// if node has value
// 		print out node's value

/* 2nd Program */
// create empty stack
// add student number and student age as a node and push at the top of the stack
// add student number and student age as a node and push at the top of the stack
// remove the node from the top of the stack and assign it to a new node
// if node has value
// 		print out node's value

#include <iostream>
using namespace std;

/*
 *
 * 1st Program
 *
 * /

/*
	QUEUE NODE
*/

// class QueueNode that hold and float and a pointer.
class QueueNode {
    public:
        float value;
        QueueNode* next;
};

// Create a New QueueNode and takes a float value as a parameter
QueueNode* newQueueNode(float value)
{
		QueueNode* node = new QueueNode();		// create a new node
		node->value = value;				// assign parameter value to new node's "value" data member
		node->next = NULL;					// assign NULL value to new node's "next" data member
		return node;								// return node with value and pointer
}

/*
	QUEUE
*/

// class Queue includes pointer front that points to the front most node of the queue
// and pointer back that points to the back node most of the queue
class Queue {
    public:
	    QueueNode *front, *back;
};

// Create an Empty Queue
Queue* createQueue()
{
		Queue* queue = new Queue();  				// initialize an empty queue
		queue->front = NULL;								// initialize front pointers with NULL
		queue->back = NULL;									// initialize back pointers with NULL
		return queue;												// return created queue
}

// The function to a new node in the back of the queue with the value
// it will be added to the back following the FIFO rule
// 1st parameter as queue object
// 2nd parameter as float value
void enQueue(Queue* queue, float value)
{
		// create a new node
		QueueNode* node = newQueueNode(value);

		// if back pointer points to NULL, it means queue is empty
		// this is the first node in the queue
		if (queue->back == NULL) {
				queue->front = node;	// front pointer will point to first node
				queue->back = node;		// back pointer will point to first node as well
				return;							  // exit the function
		}

		queue->back->next = node;	// have the back most node point to the new node
		queue->back = node;				// make the new node the back most node
}

// Function to remove a node in front of the queue
// it will be removed from the front following the FIFO rule
// return the value of the removed node
// parameter as queue object
QueueNode* deQueue(Queue* queue)
{
	// If queue is empty, return NULL.
	// No node to remove
	if (queue->front == NULL)
			return NULL;

	QueueNode* node = queue->front;	// front pointer would take the front most node
	delete(node);								// delete the front most node

	queue->front = queue->front->next;	// front pointer will point to the next front node


	if (queue->front == NULL)		// this means the only node was removed and front is now pointing to NULL
			queue->back = NULL;			// have back pointer to point to NULL as well
	return node;								// return the removed node
}

/*
 *
 * 2nd Program
 *
 * /

/*
	STACK NODE
*/

// class QueueNode that hold and two integers and a pointer.
class StackNode {
    public:
        int number;				// student number
				int age;					// student ag
        StackNode* next;
};

// Create a New QueueNode and takes a two integer values as a parameter
StackNode* newStackNode(int number, int age)
{
		StackNode* node = new StackNode();		// create a new node
		node->number = number;			// assign parameter value to new node's "number" data member
		node->age = age;						// assign parameter value to new node's "number" data member
		node->next = NULL;					// assign NULL value to new node's "next" data member
		return node;								// return node with value and pointer
}


/*
	STACK
*/

// class Stack has a top pointer
class Stack {
    public:
	    StackNode *top;
};

// Create an Empty Stack
Stack* createStack()
{
		Stack* stack = new Stack();  				// initialize an empty queue
		stack->top = NULL;							  	// initialize top pointers with NULL
		return stack;												// return created queue
}

void push(Stack* stack, int number, int age)
{
		// create a new node
		StackNode* node = newStackNode(number, age);

		// if back pointer points to NULL, it means stack is empty
		// this is the first node in the stack
		if (stack->top == NULL) {
				stack->top = node;		// top pointer will point to first node
				return;							  // exit the function
		}

		stack->top->next = node;	// have the top node point to the new node
		stack->top = node;				// make the new node the top node
}

StackNode* pop(Stack* stack)
{
	// If stack is empty, return NULL.
	// No node to remove
	if (stack->top == NULL)
			return NULL;

	StackNode* node = stack->top;	// front pointer would take the top node
	delete(node);						  		// delete the front top node

	stack->top = stack->top->next;	// top pointer will point to the next second top node

	return node;								// return the removed node
}

// Driver code
int main()
{
		Queue* myQueue = createQueue();		// create empty queue
		enQueue(myQueue, 10);							// add node to the back of the queue
		enQueue(myQueue, 20);							// add node to the back of the queue
		QueueNode* nodeQueue = deQueue(myQueue);	// remove node from the front of the queue
		if (nodeQueue != NULL)						// if node has value
				cout << "Dequeued item is " << nodeQueue->value;
		cout << endl;

		Stack* myStack = createStack();		// create empty stack
		push(myStack, 1001, 28); // add student number and student age as a node and push at the top of the stack
		push(myStack, 1021, 30); // add student number and student age as a node and push at the top of the stack
		StackNode* nodeStack = pop(myStack);	// remove the node from the top of the stack
		if (nodeStack != NULL)	 // if node has value
				cout << "Popped item is " << nodeStack->number;
		cout << endl;
		return 0;
}

// Sample Output:
// Dequeued item is 10
// Popped item is 102
