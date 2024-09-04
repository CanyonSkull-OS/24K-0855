#include <stdio.h>
int main(){
	float x1,x2,y1,y2,gradient;
	//Example Values are (5,4),(3,2)
	printf("Enter Coordinates of Point 1: \n");
	scanf("%d%d", &x1, &y1);
	
	printf("Enter Coordinates of Point 2: \n");
	scanf("%d%d", &x2, &y2);
	
	gradient = (y2-y1)/(x2-x1);
	printf("The slope of these two points is: %.3f", gradient);
}