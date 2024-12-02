#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct list_s - structure pour une liste chaînée
 * @str: chaîne de caractères (mallocée)
 * @len: longueur de la chaîne
 * @next: pointeur vers le nœud suivant
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif 
