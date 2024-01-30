#include <stdio.h>
#include <string.h>
#include <math.h>
char B[100];
int Btop = -1;
char temp[100];
int Ttop = -1;

void push(int index, char element)
{
  if (index == 0)
  {
    printf("Adding element to B:%c\n", element);
    B[++Btop] = element;
  }
  if (index == 1)
  {
    printf("Adding element to temp:%c\n", element);
    temp[++Ttop] = element;
  }
}

char pop(int index)
{
  if (index == 0)
  {
    printf("Item Removed from B:%c\n", B[Btop]);
    return B[Btop--];
  }
  if (index == 1)
  {
    push(0, temp[Ttop]);
    printf("Item Removed from temp:%c\n", temp[Ttop]);
    return temp[Ttop--];
  }
}

int auth(char x)
{
  if (x == '(' || x == ')')
  {
    return 0;
  }
  else if (x == '=')
  {
    return 1;
  }
  else if (x == '+' || x == '-')
  {
    return 2;
  }
  else if (x == '*' || x == '/' || x == '%')
  {
    return 3;
  }
  else if (x == '^')
  {
    return 4;
  }
  else
  {
    return -1;
  }
}
int eval(char *exp, int len)
{
  int res;
  int i = 0;
  int nums[100];
  int topNum = -1;

  while (i < len)
  {
    if (auth(exp[i]) == -1)
    {
      nums[++topNum] = exp[i] - '0';
    }
    else
    {
      int num2 = nums[topNum--];
      int num1 = nums[topNum--];

      switch (exp[i])
      {
      case '+':
        res = num1 + num2;
        break;
      case '-':
        res = num1 - num2;
        break;
      case '*':
        res = num1 * num2;
        break;
      case '/':
        res = num1 / num2;
        break;
      case '%':
        res = num1 % num2;
        break;
      case '^':
        res = num1^num2;
        break;
      default:
        break;
      }
      nums[++topNum] = res;
    }
    i++;
  }
  return nums[topNum];
}

int main()
{
  char eq[100];
  printf("Enter an equation:");
  scanf("%s", &eq);
  temp[++Ttop] = '(';
  strcat(eq, ")");
  for (int i = 0; i < strlen(eq); i++)
  {
    printf("Assessing Char:%c\n", eq[i]);
    if (auth(eq[i]) == -1)
    {
      push(0, eq[i]);
    }
    else if (eq[i] == '(')
    {
      push(1, eq[i]);
    }
    else if (eq[i] == ')')
    {
      while (temp[Ttop] != '(')
      {
        pop(1);
      }
      Ttop--;
    }
    else
    {
      if (auth(eq[i]) <= auth(temp[Ttop]))
      {

        while (auth(eq[i]) <= auth(temp[Ttop]))
        {
          pop(1);
        }
        printf("%d", strlen(eq));
      }
      push(1, eq[i]);
    }
  }
  while (Ttop >= 0)
  {
    pop(1);
  }
  printf("Temporary Stack:%s\n", temp);
  printf("Polish Notation/Postfix is:%s\n", B);
  printf("Evaluation: %d\n", eval(&B, strlen(B)));
}

