#include <stdio.h>
#include <string.h>


typedef struct travel_packages{
    char name[20];
    char* dest;
    char* duration;
    float cost;
    int seats;
} trv_pkg;


trv_pkg package[3] = {
    {"Tropical Escape", "Hawaii", "7 days", 1500.99, 20},
    {"European Tour", "Paris, France", "10 days", 2500.50, 15},
    {"Asian Adventure", "Tokyo, Japan", "5 days", 1200.00, 30}
};

int display_packages();
int book_package();

int main(){
  int choice;
    while(1){
        printf("1: Book Package\n"
        "2: Display Available Packages\n"
        "3: Exit\n"
        "Enter Choice: ");
        scanf(" %d", &choice);


        switch (choice){
            case 1:
                book_package();
                break;
            case 2:
                display_packages();
                break;
            case 3:
                printf("\t\t\t\tExiting Program\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}


int book_package(){
    int found = 0;
    char name[20];
    printf("Enter Package Name: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    for (int i = 0; i < 3; i++){
        if (strcmp(package[i].name, name)== 0){
            found = 1;
            printf("\nPackage Name: %s\n"
            "Destination: %s\n"
            "Duration: %s\n"
            "Cost: %.2f\n"
            "Seats: %d\n", package[i].name, package[i].dest,
            package[i].duration, package[i].cost, package[i].seats);
            package[i].seats--;
            printf("\t\t\t\tPackage Booked\n\n");
        }
    }
    if (!found)
        printf("\nPackage not in List\n\n");
}



int display_packages(){
    for (int i = 0; i < 3; i++){
        printf("\nPackage Name: %s\n"
        "Destination: %s\n"
        "Duration: %s\n"
        "Cost: %.2f\n"
        "Seats: %d\n", package[i].name, package[i].dest,
        package[i].duration, package[i].cost, package[i].seats);
    }
    printf("\n");
}
