#ifndef HASHMAP_H
#define HASHMAP_H

#define TABLE_SIZE 101

typedef struct HashNode
{
    char id[10];
    void *student;
    struct HashNode *next;

} HashNode;

typedef struct
{
    HashNode *table[TABLE_SIZE];

} HashMap;

unsigned int hash(char *key);
void insertHash(HashMap *map, char *id, void *student);
void* searchHash(HashMap *map, char *id);

#endif