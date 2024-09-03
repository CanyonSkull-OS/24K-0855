#include <stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter Integer: \n");
scanf("%d %d", &num1, &num2);
num3 = num2;
num2 = num1;
num1 = num3;
printf("Swapped integers:\n%d\n%d", num1, num2);
return 0;
}