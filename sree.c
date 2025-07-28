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
    } else if (sum == 15) {
        printf("Sum is 15\n");
    } else {
        printf("Sum is something else\n");
    }

    // Loops (For, While, Do-While)
    printf("\nFor Loop (1 to 5): ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    printf("\nWhile Loop (5 to 1): ");
    int i = 5;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }

    printf("\nDo-While Loop (1 to 3): ");
    int j = 1;
    do {
        printf("%d ", j);
        j++;
    } while (j <= 3);
    // Arrays
    int arr[5] = {1, 2, 3, 4, 5};
    printf("\nArray elements: ");
    printArray(arr, 5);

    // Strings
    char str1[20] = "Hello";
    char str2[20] = "World";
    strcat(str1, str2);
    printf("\nConcatenated String: %s", str1);
    printf("\nString Length: %lu", strlen(str1));

    // Pointers
    int x = 100, y = 200;
    printf("\nBefore Swap: x=%d, y=%d", x, y);
    swap(&x, &y);
    printf("\nAfter Swap: x=%d, y=%d", x, y);

    // Functions
    printf("\nFactorial of 5: %d", factorial(5));

    // Structures
    struct Student s1 = createStudent("Alice", 20, 85.5);
  printf("\nStudent Info: Name=%s, Age=%d, Marks=%.2f", s1.name, s1.age, s1.marks);

    // Dynamic Memory Allocation
    int *ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("\nMemory allocation failed.");
        return 1;
    }
    printf("\nDynamic Array: ");
    for (int k = 0; k < 5; k++) {
        ptr[k] = k * 2;
        printf("%d ", ptr[k]);
    }
    free(ptr);

    // File Handling
    saveToFile("output.txt", "This is a test file.\nHello C Programming!");

    // Switch Case
    int choice = 2;
    switch (choice) {
        case 1: printf("\nChoice is 1"); break;
        case 2: printf("\nChoice is 2"); break;
        default: printf("\nInvalid Choice"); break;
    }

    // Nested Loops (Pattern)
    printf("\nPattern:\n");
    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= r; c++) {
            printf("*");
 

