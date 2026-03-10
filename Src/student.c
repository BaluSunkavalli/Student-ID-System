#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

extern char* generateID();

Student* createStudent(char id[], char name[])
{
    Student *newNode = malloc(sizeof(Student));

    strcpy(newNode->id,id);
    strcpy(newNode->name,name);

    newNode->next=NULL;

    return newNode;
}

void addStudent(Student **head, char name[])
{
    char *id = generateID();

    Student *node = createStudent(id,name);

    node->next=*head;
    *head=node;

    printf("Student Added: %s %s\n",id,name);
}

Student* searchStudent(Student *head, char id[])
{
    while(head)
    {
        if(strcmp(head->id,id)==0)
            return head;

        head=head->next;
    }

    return NULL;
}

void deleteStudent(Student **head, char id[])
{
    Student *temp=*head,*prev=NULL;

    while(temp)
    {
        if(strcmp(temp->id,id)==0)
        {
            if(prev==NULL)
                *head=temp->next;
            else
                prev->next=temp->next;

            free(temp);
            printf("Student Deleted\n");
            return;
        }

        prev=temp;
        temp=temp->next;
    }

    printf("Student Not Found\n");
}

void displayStudents(Student *head)
{
    while(head)
    {
        printf("%s %s\n",head->id,head->name);
        head=head->next;
    }
}

void updateStudent(Student *head, char id[])
{
    Student *s = searchStudent(head,id);

    if(s)
    {
        printf("Enter new name: ");
        scanf("%s",s->name);
    }
}

void sortStudents(Student **head)
{
    Student *i,*j;

    char id[10],name[50];

    for(i=*head;i;i=i->next)
    {
        for(j=i->next;j;j=j->next)
        {
            if(strcmp(i->name,j->name)>0)
            {
                strcpy(id,i->id);
                strcpy(name,i->name);

                strcpy(i->id,j->id);
                strcpy(i->name,j->name);

                strcpy(j->id,id);
                strcpy(j->name,name);
            }
        }
    }
}