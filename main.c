#include <stdio.h>
#include <string.h>
#include "student.h"
#include "benchmark.h"

int main(int argc,char *argv[])
{
    Student *head=NULL;

    if(argc<2)
    {
        printf("Commands:\n");
        printf("add <name>\n");
        printf("list\n");
        printf("search <id>\n");
        printf("delete <id>\n");
        printf("benchmark\n");
        return 0;
    }

    if(strcmp(argv[1],"add")==0)
    {
        addStudent(&head,argv[2]);
    }

    else if(strcmp(argv[1],"list")==0)
    {
        displayStudents(head);
    }

    else if(strcmp(argv[1],"search")==0)
    {
        Student *s = searchStudent(head,argv[2]);

        if(s)
            printf("%s %s\n",s->id,s->name);
        else
            printf("Not found\n");
    }

    else if(strcmp(argv[1],"delete")==0)
    {
        deleteStudent(&head,argv[2]);
    }

    else if(strcmp(argv[1],"benchmark")==0)
    {
        benchmarkLookup();
    }

}