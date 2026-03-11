#include <stdio.h>
#include <assert.h>
#include "../Inc/student.h"

int main()
{
    Student *head = NULL;

    addStudent(&head, "Balu", "Satya");

    assert(head != NULL);

    printf("Test passed\n");

    return 0;
}