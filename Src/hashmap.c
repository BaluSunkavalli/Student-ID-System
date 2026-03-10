#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashmap.h"

unsigned int hash(char *key)
{
    unsigned int h=0;

    while(*key)
        h=(h*31)+*key++;

    return h % TABLE_SIZE;
}

void insertHash(HashMap *map, char *id, void *student)
{
    unsigned int index = hash(id);

    HashNode *node = malloc(sizeof(HashNode));

    strcpy(node->id,id);
    node->student=student;

    node->next=map->table[index];
    map->table[index]=node;
}

void* searchHash(HashMap *map, char *id)
{
    unsigned int index = hash(id);

    HashNode *temp = map->table[index];

    while(temp)
    {
        if(strcmp(temp->id,id)==0)
            return temp->student;

        temp=temp->next;
    }

    return NULL;
}