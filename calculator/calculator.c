#include <stdio.h>
#include <stdlib.h>
// #include <stdbool.h>
#include <math.h>

#define note "Enter a valid operation"

// Function definition
void addition();
void subtraction();
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

    while(1) {
        printf("\n\nEnter the operation you want to perform: ");
        scanf("%d",&choice);

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
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;

        default:
            printf("\n***** %s *****\n",note);
        }
    }
    printf("\n*****Please enter a number between 0 to 10****\n");
}

void addition() {
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The sum of %d and %d is %d\n", a, b, a+b);
}

void subtraction() {
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The diffrence of %d and %d is %d\n", a, b, a-b);
}

void multiplication() {
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The multiple of %d and %d is %d\n", a, b, a*b);
}

void division() {
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d %d",&a,&b);
    // Performing type conversion
    printf("The division of %d and %d is %f\n", a, b, (float)a/(float)b);
}

void modulus() {
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The remainder of %d and %d is %d\n", a, b, a%b);
}

void factorial() {
    int n, factorial;
    printf("Enter the number you want to get the factorial of: ");
    scanf("%d",&n);
    factorial = 1;
    for (int i = 1; i<= n; i++) {
        factorial *= i;
    }
    printf("\nThe factorial of %d is %d",n,factorial);
}

void power() {
    double b;
    double p;
    printf("\nEnter the base and the power digits: ");
    scanf("%lf %lf",&b,&p);
    // From math.h library
    double e=pow(b,p);
    printf("\nThe power of %lf is %lf",b,e);
}

void square() {
    double b;
    printf("\nEnter the number you want to square: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("\nThe square of %lf is %lf",b,p);
}

void cube() {
    double b;
    printf("\nEnter the number you want to cube: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("\nThe cube of %lf is %lf",b,p);
}

void squareroot() {
    double b;
    printf("\nEnter the number you want the square root of: ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("\nThe cube of %lf is %lf",b,s);
}
