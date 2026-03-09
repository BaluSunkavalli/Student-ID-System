#ifndef STUDENT_H
#define STUDENT_H

typedef struct Student
{
    char id[10];
    char name[50];
    struct Student *next;

} Student;

Student* createStudent(char id[], char name[]);
void addStudent(Student **head, char name[]);
void deleteStudent(Student **head, char id[]);
void displayStudents(Student *head);
Student* searchStudent(Student *head, char id[]);
void updateStudent(Student *head, char id[]);
void sortStudents(Student **head);

#endif