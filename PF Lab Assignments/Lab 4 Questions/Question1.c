/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Desc: Check if number is a multiple of 3
 */


#include <stdio.h>

int main()
{
int n;
printf("Enter Number: ");
scanf("%d", &n);
if(n%3==0)
  printf("%d is a multiple of 3", n);
else
  printf("%d is not a multiple of 3", n);
return 0;
}