#include <stdio.h>

int main(){
	int weekdays = 60, attendance, assignment_scores, exam_result;
	float final_grade = 0;
	
	printf("Enter Attendance Percentage: ");
	scanf("%d", &attendance);
	
	printf("Enter Assignment Scores: ");
	scanf("%d", &assignment_scores);
	
	printf("Enter Overall Exam Results: ");
	scanf("%d", &exam_result);
	

	if (attendance>=60){
		if (assignment_scores>40){
			if (exam_result>40){
				final_grade = 0.3*attendance +
				0.3*assignment_scores + 0.4*exam_result;
			}
		}
	}
	
	printf("Your overall score is %.2f\n", final_grade);
	
	if (final_grade!=0){
		if (final_grade>50){
			if (final_grade>60){
				if (final_grade>65){
					if (final_grade>75){
						if (final_grade>85)
							printf("Your final grade is A");
					}
					else
						printf("Your final grade is B");
				}
				else
					printf("Your final grade is C");
			}
			else
				printf("Your final grade is D");
		}
		else
			printf("Your final grade is E");
	}
	else
		printf("Your final grade is F");
}