#include <iostream>
using namespace std;
const int MAX = 5;
class Stack
{
private:
int a[MAX];
int top;
public:
Stack()
{
top = -1;
}
void push(int x)
{
top++;
a[top] = x;
}
int pop(void)
{
int x = a[top];
top--;
return x;
}
int peek(void)
{
return a[top];
}
int full(void)
{
if (top == MAX - 1)
{
return 1;
}
else
{
return 0;
}
}
int empty(void)
{
if (top == -1)
{
return 1;
}
else
{
return 0;
}
}
void display(void)
{
for (int i = top; i >= 0; i--)
{
cout << endl << a[i];
}
}
};
int main()
{
int x;
Stack s;
if (!s.full()) s.push(44);
if (!s.full()) s.push(78);
if (!s.full()) s.push(56);
if (!s.full()) s.push(27);
if (!s.full()) s.push(100);
if (!s.full()) s.push(45);
cout << "Stack elements:";
s.display();
if (!s.empty())
{
x = s.pop();
cout << endl << "Removed: " << x;
}
cout << endl << "Stack after pop:";
s.display();
if (!s.empty())
{
x = s.peek();
cout << endl << "Top element is: " << x;
}
}
return 0;
PS D:\ishwari> g++ stack_using_array.cpp
PS D:\ishwari> ./ stack_using_array
Stack elements:
100
27
56
78
44
Removed: 100
Stack after pop:
27
56
78
44
Top element is: 27
exited with code = 0 in 0.368 seconds