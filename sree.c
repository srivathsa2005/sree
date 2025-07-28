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


