#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node(int x)
{
data=x;
next=NULL;
}
};
class queue{
private:
node*front;
node*rear;
public:
queue(){
front =rear=NULL;
}
int empty(void)
{
if(front == NULL)
{
return 1;
}
else{
return 0;
}
}
int peek(void)
{
if(front == NULL)
{
return 1;
}
else{
return 0;
}
}
void enqueue(int x)
{
node*p=new node(x);
if(front == NULL)
{
front =p;
rear=p;
}
else{
rear->next = p;
rear = p;
}
}
int dequeue(void)
{
if (empty())
{
cout << "\nQueue is empty";
return -1;
}
int x = front->data;
node *p = front;
front = front->next;
if (front == NULL)
{
rear = NULL;
}
delete p;
return x;
}
void display(void)
{
node *q = front;
if (empty())
{
cout << "\nQueue is empty";
return;
}
cout << "\nQueue elements: ";
while (q != NULL)
{
cout << "\t" << q->data;
q = q->next;
}
}
};

int main()
{
int x;
queue q;
q.enqueue(33);
q.enqueue(84);
q.enqueue(112);
q.enqueue(57);
q.enqueue(90);
q.enqueue(73);
q.display();
if (!q.empty())
{
x = q.dequeue();
cout << "\nRemoved: " << x;
}
q.display();
x = q.peek();
cout << "\nFront element is: " << x;
return 0;
}
PS D:\ishwari> g++ queue_using_LL.cpp
PS D:\ishwari> ./ queue_using_LL
Queue elements: 33 84 112 57 90 73
Removed: 33
Queue elements: 84 112 57 90 73
Front element is: 0
exited with code = 0 in 0.356 seconds