#include <stdio.h>

#define conversion 0.001

float convert_m_to_km(int meters);

int main(){
    int m;
    while (1){
        printf("Enter Meters: ");
        scanf(" %d", &m);
        if (m == 0){
            printf("\t\t\t\tExiting Porgram..\n");
            return 0;
        }
        convert_m_to_km(m);
        
    }
}

float convert_m_to_km(int meters){
    static int count = 0;
    float answer = meters * conversion;
    count++;
    printf("Number of times the convert function was called: %d\n", count);
    return answer;
}