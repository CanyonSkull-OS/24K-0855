#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* recursive_rvrsd_str(char* str);

int main(){
    char string[20];
    printf("Enter String: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    recursive_rvrsd_str(string);

    return 0;
}


char* recursive_rvrsd_str(char* str){
    static int index = 0;
    if (index != strlen(str)+1){
        printf("%c", str[strlen(str)-index]);
        index++;
        return recursive_rvrsd_str(str);
    }
    else{
        return str;
    }
}