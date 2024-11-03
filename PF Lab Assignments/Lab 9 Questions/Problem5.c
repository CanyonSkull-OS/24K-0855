#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);

    return 0;
}

void reverseString(char *str){
    int len = strlen(str);
    char str2[len + 1];
    
    for (int i = 0; i < len; i++){
        str2[i] = str[len-1-i];
    }
    str2[len] = '\0';

    printf("\nNormal String:\n%s", str);
    printf("Reversed String: %s \n", str2);
}