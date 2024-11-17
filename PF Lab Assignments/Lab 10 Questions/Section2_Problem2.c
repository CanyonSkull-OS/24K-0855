#include <stdio.h>
#include <string.h>

struct movie{
    char title[20];
    char genre[10];
    char director[10];
    int release_year;
    float rating;
};

struct movie movies[100];
int movie_count = 0;

void add_movie();
void search_by_genre();
void display_movie_details();

int main(){
    int choice;

    while (1) {
        printf("\nMovie Management System\n");
        printf("1. Add New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display Movie Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
                    case 1:
                        add_movie();
                        break;
                    case 2:
                        search_by_genre();
                        break;
                    case 3:
                        display_movie_details();
                        break;
                    case 4:
                        printf("\t\t\t\tExiting program...\n");
                        return 0;
                    default:
                        printf("Invalid choice. Please try again.\n");
                        break;
                }
    }
}


void add_movie(){
    if (movie_count >= 100){
        printf("Movie List full.\n");
        return;
    }

    getchar();
    printf("Enter Title: ");
    fgets(movies[movie_count].title,
    sizeof(movies[movie_count].title), stdin);
    movies[movie_count].title[strcspn(movies[movie_count].title, "\n")] = '\0';

    printf("Enter Genre: ");
    fgets(movies[movie_count].genre,
    sizeof(movies[movie_count].genre), stdin);

    printf("Enter Director: ");
    fgets(movies[movie_count].director,
    sizeof(movies[movie_count].director), stdin);
    movies[movie_count].director[strcspn(movies[movie_count].director, "\n")] = '\0';

    printf("Enter Release Year: ");
    scanf("%d", &movies[movie_count].release_year);

    printf("Enter Rating: ");
    scanf("%f", &movies[movie_count].rating);

    movie_count++;
    printf("Movie Added\n");
    return;
}

void search_by_genre(){
    char search_genre[20];
    int found = 0;

    printf("Enter Genre to search: ");
    getchar();
    fgets(search_genre, sizeof(search_genre), stdin);
    printf("\n");
    for (int i = 0; i < movie_count; i++){
        if (strcmp(movies[i].genre, search_genre) == 0){
            printf("%s\n", movies[i].title);
            found = 1;
        }
    }

    if(!found){
        printf("No movies in %s", search_genre);
    }
}


void display_movie_details(){
    int found = 0;
    char name[20];
    printf("Enter Movie Title: ");
    getchar();
    fgets(name, sizeof(char)*20, stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < movie_count; i++){
        if (strcmp(movies[i].title,name) == 0){
            printf("Genre: %s"
            "Director: %s\n"
            "Release Year: %d\n"
            "Rating: %.1f\n\n", movies[i].genre,
            movies[i].director, movies[i].release_year,
            movies[i].rating);
            found = 1;
        }
    }
    if (!found){
        printf("%s is not in list\n", name);
    }
}