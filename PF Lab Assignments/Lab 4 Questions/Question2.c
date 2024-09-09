/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Desc: Creating a calculator with basic operations
 */

#include <stdio.h>
int main()
{
int num1, num2;
char op;
float Ans;

printf("Enter num1, num2 and operator: \n");
scanf(" %d %d %c", &num1, &num2, &op);
switch(op)
{
case '+':
  Ans = num1 + num2;
  break;
case '-':
  Ans = num1 - num2;
  break;
case '*':
  Ans = num1 * num2;
  break;
case '/':
  Ans = num1 / num2;
  break;
default:
  printf("Invalid Operator");
}
printf("%.2f is your Answer", Ans);
return 0;
}

