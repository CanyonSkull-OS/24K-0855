#include <stdio.h>
#include <stdlib.h>

struct Book{
    char title[50];
    char author[20];
    int publicationYear;

};

struct Library{
    struct Book* Books;
};

struct Library Lib;

struct Library fillBookDetails(struct Library Lib, int booknum);
void printLibrary(struct Library Lib);

int numBooks;

int main(){
    printf("Enter Number of Books: ");
    scanf(" %d", &numBooks);
    Lib.Books = malloc(sizeof(struct Book)*numBooks);
    for (int i = 0; i < numBooks; i++){
        fillBookDetails(Lib, i);
    }
    printf("\nLibrary Filled\n");
    printLibrary(Lib);

    return 0;
}

struct Library fillBookDetails(struct Library Lib, int booknum){
    printf("\t\t\t\tDetails for Book %d\n", booknum+1);
    printf("Enter Title: ");
    getchar();
    fgets(Lib.Books[booknum].title, sizeof(int)*50, stdin);
    printf("Enter Author: ");
    fgets(Lib.Books[booknum].author, sizeof(int)*20, stdin);
    printf("Enter Publication Year: ");
    scanf(" %d", &Lib.Books[booknum].publicationYear);
    return Lib;
}

void printLibrary(struct Library Lib){
    for (int i = 0; i < numBooks; i++){
        printf("\t\t\t\tBook %d Details\n", i+1);
        printf("Title: %s\n", Lib.Books[i].title);
        printf("Author: %s\n", Lib.Books[i].author);
        printf("Publication Year: %d\n", Lib.Books[i].publicationYear);
        printf("\n");
    }
}


