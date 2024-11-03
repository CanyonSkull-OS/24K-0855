#include <stdio.h>
#include <string.h>

int main(){
    char list[5][20] = {"Omer", "Aashir", "maham", "racecar"};
    int num;


    for (int i = 0; i < 4; i++){
        num = 0;
        for (int j = 0; j < strlen(list[i])/2; j++){
            if (list[i][j] == list[i][strlen(list[i])-j-1]){
                num++;
            }
        }
        if (num == strlen(list[i])/2){
            printf("%s is a palindrome\n", list[i]);
        }
        else{
            printf("%s is not a  palindrome\n", list[i]);
        }
    }
    return 0;
}
