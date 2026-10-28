#include<iostream>
using namespace std;
const int MAX = 5;
class queue
{
private:
int a[MAX];
int front;
int rear;
public:
queue()
{
front = -1;
rear = -1;
}
int empty(void)
{
if (front == -1 && rear == -1)
{
return 1;
}
else
{
return 0;
}
}
int full(void)
{
if (rear == MAX - 1)
{
return 1;
}
else
{
return 0;
}
}
void enqueue(int x)
{
if (full())
{
cout << "\nQueue is full";
return;
}
if (front == -1 && rear == -1)
{
front++;
rear++;
}
else
{
rear++;
}
a[rear] = x;
}
int dequeue(void)
{
if (empty())
{
cout << "\nQueue is empty";
return -1;
}
int x = a[front];
if (front == rear)
{
front = -1;
rear = -1;
}
else
{
front++;
}
return x;
}
int peek(void)
{
if (empty())
{
cout << "\nQueue is empty";
return -1;
}
return a[front];
}
void display(void)
{
if (empty())
{
cout << "\nQueue is empty";
return;
}
cout << "\nQueue elements:";
for (int i = front; i <= rear; i++)
{
cout << "\t" << a[i];
}
}
};
int main()
{
int x;
queue q;
q.enqueue(50);
q.enqueue(18);
q.enqueue(27);
q.enqueue(35);
q.enqueue(89);
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
PS D:\ishwari> g++ queue_using_array.cpp
PS D:\ishwari> ./ queue_using_array
Queue elements: 50 18 27 35 89
Removed: 50
Queue elements: 18 27 35 89
Front element is: 18
Done exited with code = 0 in 0.591 seconds


