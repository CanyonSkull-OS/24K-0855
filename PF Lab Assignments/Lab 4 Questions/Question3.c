/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Desc: Check if  character is small, capital, a digit or a special character
 */

#include <stdio.h>

int main()
{
	char character;
	
	printf("Enter Character: \n");
	scanf(" %c", &character);
	
	if('a'<=character && character<='z')
	  printf("%c is small", character);
	else if('A'<=character && character<='Z')
	  printf("%c is capital", character);
	else if('0'<=character && character<='9')
	  printf("%c is a digit", character);
	else
	  printf("%c is a special character", character);
	return 0;
}