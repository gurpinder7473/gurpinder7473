#include <stdio.h>

int main() {
    int i;
    float marks[5];
    
  
    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i+1);
        scanf("%f", &marks[i]);
    }
    
    printf("\nMarks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %.2f\n", i+1, marks[i]);
    }
    
    return 0;
}
