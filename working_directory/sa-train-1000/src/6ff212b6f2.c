#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_1[38];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_2 = 39;              // Tag.BODY
    entity_9 = 31;              // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_2] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER