#include <stdio.h>

int main() {
    int marks[5]; // Array to hold marks for 5 subjects
    int totalMarks = 0;
    float percentage;
    char grade;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i <=4; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i]; 
    }

    // Calculate percentage
    percentage = (totalMarks / 5.0); 

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F'; 
    }

    // Output results
    printf("\nTotal Marks: %d out of 500\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
