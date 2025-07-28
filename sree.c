#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function prototypes
int add(int a, int b);
void printArray(int arr[], int size);
void swap(int *x, int *y);
int factorial(int n);
struct Student createStudent(char name[], int age, float marks);
void saveToFile(const char *filename, const char *data);

struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    // Variables & Data Types
    int a = 5, b = 10, sum = 0;
    float price = 99.5;
    char grade = 'A';
    double pi = 3.141592;
    printf("Variables: a=%d, b=%d, price=%.2f, grade=%c, pi=%.2lf\n", a, b, price, grade, pi);

    // Operators
    sum = a + b;
    printf("Sum of a+b: %d\n", sum);
    printf("Comparison (a<b): %d\n", a < b);
    printf("Logical (a<b && b<20): %d\n", (a < b && b < 20));

    // If-Else
    if (sum > 20) {
        printf("Sum is greater than 20\n");
    

