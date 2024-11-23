/*Creating Different files for player, bowler, and batter.
This will make it easier to update, read and delete them independantly.
I deserve extra weightage for the amount of braincells i lost while 
coding this*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; // seemer, pacer, spinner// N/A
    char arm[10]; //left or right
    struct player ply;
};

struct bat {
    char type[10]; // top order, middle order, lower order
    char handed[8]; //lefty or righty
    struct bowl ply2;
};

int addPlayer(struct player ply, FILE* ptrply);
int addBowl(struct bowl bowler, FILE* ptrbowl);
int addBat(struct bat batter, FILE* ptrbat);

int getPlayers(FILE* ptrply);
int getBowlers(FILE* ptrbowl);
int getBatters(FILE* ptrbat);

int updatePlayer(struct player ply, FILE* ptrply);
int updateBowler(struct bowl bowler, FILE* ptrbowl);
int updateBatter(struct bat batter, FILE* ptrbat);

int deletePlayer(struct player ply, FILE* ptrply);
int deleteBowler(struct bowl bowler, FILE* ptrbowl);
int deleteBatter(struct bat batter, FILE* ptrbat);

struct player newply;
struct bowl newbowl;
struct bat newbat;

int main() {
    int choice;
    FILE* ptrply = fopen("players.txt", "a+");
    FILE* ptrbowl = fopen("bowlers.txt", "a+");
    FILE* ptrbat = fopen("batters.txt", "a+");

    while (1) {
        printf("1: Add Player\n"
               "2: Add Bowler\n"
               "3: Add Batter\n"
               "4: Get Players\n"
               "5: Get Bowlers\n"
               "6: Get Batters\n"
               "7: Update Player\n"
               "8: Update Bowler\n"
               "9: Update Batter\n"
               "10: Delete Player\n"
               "11: Delete Bowler\n"
               "12: Delete Batter\n"
               "13: Exit\n\n"
               "Enter Choice: ");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                addPlayer(newply, ptrply);
                break;
            case 2:
                addBowl(newbowl, ptrbowl);
                break;
            case 3:
                addBat(newbat, ptrbat);
                break;
            case 4:
                getPlayers(ptrply);
                break;
            case 5:
                getBowlers(ptrbowl);
                break;
            case 6:
                getBatters(ptrbat);
                break;
            case 7:
                updatePlayer(newply, ptrply);
                break;
            case 8:
                updateBowler(newbowl, ptrbowl);
                break;
            case 9:
                updateBatter(newbat, ptrbat);
                break;
            case 10:
                deletePlayer(newply, ptrply);
                break;
            case 11:
                deleteBowler(newbowl, ptrbowl);
                break;
            case 12:
                deleteBatter(newbat, ptrbat);
                break;
            case 13:
                printf("\t\t\t\tExiting\n");
                fclose(ptrply);
                fclose(ptrbowl);
                fclose(ptrbat);
                return 0;
            default:
                printf("\nTry Again\n");
                break;
        }
    }

    return 0;
}

int addPlayer(struct player ply, FILE* ptrply) {
    printf("Enter Name and Team: ");
    scanf(" %s %s", &ply.name, &ply.team);

    fprintf(ptrply, "%s\t%s\n", ply.name, ply.team);
    return 1;
}

int addBowl(struct bowl bowler, FILE* ptrbowl) {
    printf("Enter Bowler Name and Team: ");
    scanf(" %s %s", &bowler.ply.name, &bowler.ply.team);
    printf("Enter Bowler Type and Arm: ");
    scanf(" %s %s", &bowler.type, &bowler.arm);

    fprintf(ptrbowl, "%s\t%s : %s\t%s\n", bowler.ply.name, bowler.ply.team, bowler.type, bowler.arm);
    return 1;
}

int addBat(struct bat batter, FILE* ptrbat) {
    printf("Enter Batter Name and Team: ");
    scanf(" %s %s", &batter.ply2.ply.name, &batter.ply2.ply.team);
    printf("Enter Bowling Type and Arm: ");
    scanf(" %s %s", &batter.ply2.type, &batter.ply2.arm);
    printf("Enter Batting BatType and Hand: ");
    scanf(" %s %s", &batter.type, &batter.handed);

    fprintf(ptrbat, "%s\t%s : %s\t%s : %s\t%s\n", batter.ply2.ply.name, batter.ply2.ply.team, batter.ply2.type, batter.ply2.arm, batter.type, batter.handed);
    return 1;
}


int getPlayers(FILE* ptrply){
    char line[100];
    printf("\t\tName\tTeam\n\n");
    while (fgets(line, 100, ptrply)) {
        printf("\t\t%s\n", line);
    }
    rewind(ptrply);
    return 0;
}

int getBowlers(FILE* ptrbowl){
    char line[100];
    printf("\t\tName\tTeam\tType\tArm\n\n");
    while (fgets(line, 100, ptrbowl)) {
        printf("\t\t%s\n", line);
    }
    rewind(ptrbowl);
    return 0;
}

int getBatters(FILE* ptrbat){
    char line[100];
    printf("\t\tName\tTeam\tType\tArm\tType\tHand\n\n");
    while (fgets(line, 100, ptrbat)) {
        printf("\t\t%s\n", line);
    }
    rewind(ptrbat);
    return 0; 
}



int updatePlayer(struct player ply, FILE* ptrply){
    int flag = 0;
    FILE* tmp = fopen("temp_players.txt", "w");
    char line[20], name[20];
    printf("Enter name of Player to update: ");
    scanf(" %s", &name);

    printf("Enter new name and team for player %s: ", name);
    scanf(" %s %s", &ply.name, ply.team);

    while (fgets(line, 20, ptrply)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
        else{
            fprintf(tmp, "%s\t%s\n", ply.name, ply.team);
            flag = 1;
        }
    }

    if (flag = 0){
        printf("Name not found\n\n");
        return 0;
    }

    fclose(ptrply);
    fclose(tmp);
    remove("players.txt");
    rename("temp_players.txt", "players.txt");
    ptrply = fopen("players.txt", "a+");
    printf("\n");
    return 0;
}

int updateBowler(struct bowl bowler, FILE* ptrbowl){
    int flag = 0;
    FILE* tmp = fopen("temp_bowlers.txt", "w");
    char line[100], name[20];
    printf("Enter name of Bowler to update: ");
    scanf(" %s", &name);

    printf("Enter new name and team for player %s: ", name);
    scanf(" %s %s", &bowler.ply.name, bowler.ply.team);
    printf("Enter new Type and Arm: ");
    scanf(" %s %s", &bowler.type, &bowler.arm);

    while (fgets(line, 100, ptrbowl)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
        else{
            fprintf(tmp, "%s\t%s : %s \t%s\n", 
            bowler.ply.name, bowler.ply.team, bowler.type, bowler.arm);
            flag = 1;
        }
    }

    if (flag = 0){
        printf("Name not found\n\n");
        return 0;
    }

    fclose(ptrbowl);
    fclose(tmp);
    remove("bowlers.txt");
    rename("temp_bowlers.txt", "bowlers.txt");
    ptrbowl = fopen("bowlers.txt", "a+");
    printf("\n");
    return 0;
}


int updateBatter(struct bat batter, FILE* ptrbat){
    int flag = 0;
    FILE* tmp = fopen("temp_batters.txt", "w");
    char line[150], name[20];
    printf("Enter name of Batter to update: ");
    scanf(" %s", &name);

    printf("Enter new name and team for player %s: ", name);
    scanf(" %s %s", &batter.ply2.ply.name, batter.ply2.ply.team);
    printf("Enter new Type and Arm: ");
    scanf(" %s %s", &batter.ply2.type, &batter.ply2.arm);
    printf("Enter new Type and Handed: ");
    scanf(" %s %s", &batter.type, &batter.handed);

    while (fgets(line, 150, ptrbat)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
        else{
            fprintf(tmp, "%s\t%s : %s\t%s : %s\t%s\n", 
            batter.ply2.ply.name, batter.ply2.ply.team, 
            batter.ply2.type, batter.ply2.arm, batter.type, 
            batter.handed);
            flag = 1;
        }
    }

    if (flag = 0){
        printf("Name not found\n\n");
        return 0;
    }

    fclose(ptrbat);
    fclose(tmp);
    remove("batters.txt");
    rename("temp_batters.txt", "batters.txt");
    ptrbat = fopen("batters.txt", "a+");
    printf("\n");
    return 0;
}


int deletePlayer(struct player ply, FILE* ptrply){
    FILE* tmp = fopen("temp_players.txt", "w");
    char line[100], name[20];
    printf("Enter name of Player to Delete: ");
    scanf(" %s", &name);
    while (fgets(line, 100, ptrply)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
    }

    fclose(tmp);
    fclose(ptrply);
    remove("players.txt");
    rename("temp_players.txt", "players.txt");
    ptrply = fopen("players.txt", "a+");
    printf("\n");
    return 0;
}


int deleteBowler(struct bowl bowler, FILE* ptrbowl){
    FILE* tmp = fopen("temp_bowlers.txt", "w");
    char line[100], name[20];
    printf("Enter name of Bowler to Delete: ");
    scanf(" %s", &name);
    while (fgets(line, 100, ptrbowl)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
    }

    fclose(tmp);
    fclose(ptrbowl);
    remove("bowlers.txt");
    rename("temp_bowlers.txt", "bowlers.txt");
    ptrbowl = fopen("bowlers.txt", "a+");
    printf("\n");
    return 0;
}


int deleteBatter(struct bat batter, FILE* ptrbat){
    FILE* tmp = fopen("temp_batters.txt", "w");
    char line[100], name[20];
    printf("Enter name of Batter to Delete: ");
    scanf(" %s", &name);
    while (fgets(line, 100, ptrbat)){
        if (strstr(line, name) == NULL){
            fputs(line, tmp);
        }
    }

    fclose(tmp);
    fclose(ptrbat);
    remove("batters.txt");
    rename("temp_batters.txt", "batters.txt");
    ptrbat = fopen("batters.txt", "a+");
    printf("\n");
    return 0;
}