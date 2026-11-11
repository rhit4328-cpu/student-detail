#include <stdio.h>

int main() {
    int choice, roll, m1, m2, m3, m4, m5;
    int total;
    float average;
    char name[30], grade;

    while (1) {
        printf("\nSTUDENT MARKS MANAGEMENT SYSTEM\n");
        printf("1. Enter Student Details\n");
        printf("2. Calculate Result\n");
        printf("3. Display Result\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);

                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter 5 Subject Marks: ");
                scanf("%d%d%d%d%d",
                      &m1, &m2, &m3, &m4, &m5);
                break;

            case 2:
                total = m1 + m2 + m3 + m4 + m5;
                average = total / 5.0;

                if (average >= 90)
                    grade = 'A';
                else if (average >= 75)
                    grade = 'B';
                else if (average >= 60)
                    grade = 'C';
                else if (average >= 50)
                    grade = 'D';
                else
                    grade = 'F';

                printf("Result Calculated!\n");
                break;

            case 3:
                printf("\nSTUDENT RESULT\n");
                printf("Roll Number: %d\n", roll);
                printf("Name: %s\n", name);
                printf("Total: %d\n", total);
                printf("Average: %.2f\n", average);
                printf("Grade: %c\n", grade);

                if (m1 >= 35 && m2 >= 35 &&
                    m3 >= 35 && m4 >= 35 && m5 >= 35)
                    printf("Result: PASS\n");
                else
                    printf("Result: FAIL\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}