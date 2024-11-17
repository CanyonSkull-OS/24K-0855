#include <stdio.h>

struct flight{
    int flight_num;
    char dept_city[10];
    char dest_city[10];
    char date[10];
    int seats;
};

struct flight flights[3] = {
    {237, "KHI", "LHR", "15/12/24", 35},
    {246, "LHR", "ISL", "15/12/24", 30},
    {214, "ISL", "KHI", "15/12/24", 25}
};


int book_Seat(int flight_num);
int flight_details(int num);

int main(){
    int fli_num;
    printf("Enter Flight Number: ");
    scanf("%d", &fli_num);
    book_Seat(fli_num);
    flight_details(fli_num);
    return 0;
}

int book_Seat(int flight_num){
    char choice;
    int flag = 0;
    for (int i = 0; i < 3; i++){
        if (flight_num == flights[i].flight_num){
            printf("Number of seats available: %d\n"
            "Would you like to book a seat? (Y/N)\n", flights[i].seats);
            scanf(" %c", &choice);
            if (choice == 'y'){
                flag = 1;
                flights[i].seats--;
                printf("Seats Remaining: %d\n", flights[i].seats);
                break;
            }
            else{
                printf("\t\t\tEnding Program....\n");
            }
        }
    }
    if (!flag){
        printf("Invalid Choice\n");
        printf("\t\t\tEnding Program....\n");
    }
}

int flight_details(int num){
    for (int i = 0; i < 3; i++){
        if (num == flights[i].flight_num){
            printf("\n\nFlight Number: %d\n"
            "Departure City: %s\n"
            "Destination City: %s\n"
            "Date: %s\n"
            "Seats Available: %d\n", flights[i].flight_num, 
            flights[i].dept_city, flights[i].dest_city, flights[i].date,
            flights[i].seats);
        }
    }
}

