#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
struct stack
{
  int stack[MAX_SIZE];
  int top;
} s;
void push(int item)
{
  if (s.top == MAX_SIZE - 1)
  {
    printf("Stack overflow!\n");
    return;
  }
  s.stack[++s.top] = item;
}
int pop()
{
  if (s.top == -1)
  {
    printf("Stack underflow!\n");
    return ' ';
  }
  return s.stack[s.top--];
}
void display()
{
  if (s.top == -1)
  {
    printf("Stack is empty!\n");
    return;
  }
  for (int i = 0; i <= s.top; i++)
  {
    printf("%d ", s.stack[i]);
  }
  printf("\n");
}
int main()
{
  s.top = -1;
  push(24);
  push(12);
  push(93);
  push(72);
  display();
  printf("Popped: %d\n", pop());
  printf("Popped: %d\n", pop());
  display();

  return 0;
}

