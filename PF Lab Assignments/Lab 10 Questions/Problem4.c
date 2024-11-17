#include <stdio.h>
#include <string.h>

struct cars{
    char make[10];
    char model[10];
    int year;
    float price;
    int mileage;
};

struct cars car[100];
int car_count = 0;


void add_car();
void display_cars();
int search_make();
int search_model();


int main(){
    int choice;
    while(1){
        printf("1: Add Car\n"
        "2: Display Available Cars\n"
        "3: Search Car by Make\n"
        "4: Search Car by Model\n"
        "5: Exit..\n"
        "Enter Choice: ");
        scanf(" %d", &choice);


        switch (choice){
            case 1:
                add_car();
                break;
            case 2:
                display_cars();
                break;
            case 3:
                search_make();
                break;
            case 4:
                search_model();
                break;
            case 5:
                printf("\t\t\t\tExiting Program\n");
                return 0;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}

void add_car(){
    printf("Enter Make: ");
    scanf(" %s", &car[car_count].make);
    printf("Enter Model: ");
    scanf(" %s", &car[car_count].model);
    printf("Enter Year: ");
    scanf(" %d", &car[car_count].year);
    printf("Enter Price: ");
    scanf(" %f", &car[car_count].price);
    printf("Enter Mileage: ");
    scanf(" %d", &car[car_count].mileage);

    car_count++;
    printf("Car Added to list\n");
}


void display_cars(){
    for (int i = 0; i < car_count; i++){
        printf("\nMake: %s\n"
        "Model: %s\n"
        "Year: %d\n"
        "Price: %.2f\n"
        "Mileage: %d\n\n",
        car[i].make, car[i].model, car[i].year, 
        car[i].price, car[i].mileage);
    }
}

int search_make(){
    int found = 0;
    char make[10];
    printf("Enter Make to search: ");
    scanf(" %s", &make);
    for (int i = 0; i < car_count; i++){
        if (strcmp(car[i].make, make) == 0){
            printf("\nModel: %s\n"
            "Year: %d\n\n", car[i].model, car[i].year);
            found = 1;
        }
    }
    if (!found){
        printf("Car does not exist\n\n");
        return 0;
    }
    return 1;
}

int search_model(){
    int found = 0;
    char model[10];
    printf("Enter Model to search: ");
    scanf(" %s", &model);
    for (int i = 0; i < car_count; i++){
        if (strcmp(car[i].model, model) == 0){
            printf("\nMake: %s\n"
            "Year: %d\n\n", car[i].make, car[i].year);
            found = 1;
        }
    }
    if (!found){
        printf("Car does not exist\n\n");
        return 0;
    }
    return 1;
}