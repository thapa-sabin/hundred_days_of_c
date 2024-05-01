#include <stdio.h>
#include <stdbool.h>

// Function definition

void addition();
void subraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void square();
void cube();
void squareroot();

int main () {
    printf("\tScientific Calculator V1.0");
    int choice;
    if (choice > 0 && choice <= 10) {
        printf("\n*****Press 0 to end the program*****\n");
        printf("Press 1 for Addition \n");
        printf("Press 2 for Subtraction \n");
        printf("Press 3 for Multiplication \n");
        printf("Press 4 for Division \n");
        printf("Press 5 for Modulus \n");
        printf("Press 6 for Power \n");
        printf("Press 7 for Factorial \n");
        printf("Press 8 for Square \n");
        printf("Press 9 for Cube \n");
        printf("Press 10 for Squareroot \n");

        while(true) {
            printf("\n\n Enter the operation you want to perform: ");
            scanf("%d",&choice);
        }

        switch(choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                modulus();
                break;
            case 6:
                power();
                break;
            case 7:
                factorial();
                break;
            case 8:
                squre();
                break;
            case 9:
                cube();
                break;
            case 10:
                squreroot();
                break;

            default:
                return 0;
        }
    }
    else {
        printf("\n*****Please enter a number between 0 to 10****\n");
    }
}
