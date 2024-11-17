#include <stdio.h>
#include <math.h>

struct points{
    int x;
    int y;
};


struct points p1;
struct points p2;

float points_dist_calc(struct points p1, struct points p2);
int rect_bound(struct points, struct points);


int main(){
    printf("Enter x and y coordinates for point 1: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter x and y coordinates for point 2: ");
    scanf("%d %d", &p2.x, &p2.y);
    printf("\n%.2f\n", points_dist_calc(p1,p2));
    if (rect_bound(p1, p2)){
        printf("Points lie within (1,1) and (10,10)\n");
    }
    else{
        printf("Points do not lie within (1,1) and (10,10)\n");
    }
    return 0;
}


float points_dist_calc(struct points p1, struct points p2){
    float answer = sqrt(pow(p2.x-p1.x, 2)+pow(p2.y-p1.y, 2));
    return answer;
}

struct points min = {1,1};
struct points max = {10,10};

int rect_bound(struct points p1, struct points p2){
    if((p1.x >= min.x && p1.x <= max.x && p1.y >= min.y && p1.y <= max.y) &&
        (p2.x >= min.x && p2.x <= max.x && p2.y >= min.y && p2.y <= max.y)){
        return 1;
    }
    return 0;
}

