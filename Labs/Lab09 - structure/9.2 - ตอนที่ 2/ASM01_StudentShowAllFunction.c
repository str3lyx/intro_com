#include <stdio.h>
#include <string.h>

struct Student
{
    char id[14];
    char name[61];
    float gpa;
};

typedef struct Student Student;

void showStudents(Student std[], int n)
{
    int i;
    printf("----------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %s\n", std[i].id);
        printf("Name: %s\n", std[i].name);
        printf("GPA: %.2f\n", std[i].gpa);
        printf("----------------------------\n");
    }
}

int main()
{
    const int size = 4;
    Student *std = malloc(sizeof(Student) * size);

    printf("Enter new data:\n\n");
    int i;
    for(i=0;i<size;i++)
    {
        printf("Student #%d\n", i+1);
        fflush(stdin);
        printf("Enter Name: "); gets(std[i].name);
        fflush(stdin);
        printf("Enter ID: "); gets(std[i].id);
        printf("Enter GPA: "); scanf(" %f", &std[i].gpa);
    }

    printf("\nAll students:\n\n");
    showStudents(std, size);

    return 0;
}
