
*PseudoCode*:
```
INPUT char
IF 'a'<= char <= 'z':
  OUTPUT "Small Character"
IF 'A'<= char <= 'Z':
  OUTPUT "Capital Character"
IF '0'<= char <= '9':
  OUTPUT "Small Character"
ELSE:
  OUTPUT "Special Character:
```

```
/*
 *Name: Omer Shahid
 *Date: 9/9/2024
 *Desc: Check if  character is small, capital, a digit or a special character
 */

#include <stdio.h>

int main()
{
char character;
if('a'<=character<='z')
  printf("%c is small", character);
elseif('A'<=character<='Z')
  printf("%c is small", character);
elseif('0'<=character<='9')
  printf("%c is small", character);
else
  printf("%c is a special character", character);
```
