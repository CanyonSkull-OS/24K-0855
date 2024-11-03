#include <stdio.h>
#include <string.h>

int main(){
    char src[20], dest[20];
    int n;


    printf("Enter Source String: ");
    scanf("%s", &src);

    printf("Enter Destination String: ");
    scanf("%s", &dest);

    printf("Enter number of characters to append: ");
    scanf("%d", &n);

    strncat(dest, src, n);

    printf("Appended String: %s", dest);


    
    
    return 0;
}