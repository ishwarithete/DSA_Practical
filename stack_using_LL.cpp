#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int value) {
data = value;
next = NULL;
}
};
class Stack {
private:
Node* top;
public:
Stack() {
top = NULL;
}
bool isEmpty() {
return top == NULL;
}
void push(int value) {
Node* newNode = new Node(value);
newNode->next = top;
top = newNode;
cout << value << "\n";
}
int pop() {
if (isEmpty()) {
cout << "Cannot pop from an empty stack.\n";
return -1;
}
Node* temp = top;
int poppedValue = top->data;
top = top->next;
delete temp;
return poppedValue;
}
int peek() {
if (isEmpty()) {
cout << "Stack is empty.\n";
return -1;
}
return top->data;
}
~Stack() {
while (!isEmpty()) {
pop();
}
}
};
int main() {
Stack s;
s.push(22);
s.push(18);
s.push(55);
s.push(70);
cout << "Top element: " << s.peek() << "\n\n";
cout << s.pop() << "\n";
cout << s.pop() << "\n";
cout << "Top element after pops: " << s.peek() << "\n\n";
cout << s.pop() << "\n";
s.pop();
return 0;
}
PS D:\ishwari> g++ stack_using_LL.cpp
PS D:\ishwari> ./ stack_using_LL
22
18
55
70
Top element: 70
70
55
Top element after pops: 18
18
exited with code = 0 in 0.347 seconds