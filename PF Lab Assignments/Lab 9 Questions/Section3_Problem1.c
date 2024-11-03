#include <stdio.h>
#include <string.h>

int main(){
    char str[10];
    char str_list[][10] = {"Omer", "Aaraiz", "Asad", "Aashir"};
    int found = 0;

    printf("Enter String: ");
    scanf("%s", &str);

    for (int i = 0; i < 4; i++){
        if (strcmp(str, str_list[i]) == 0){
            found = 1;
            printf("Found");
            break;
        }
    }
    if (!found){
        printf("Not Found");
    }
    
    return 0;
}