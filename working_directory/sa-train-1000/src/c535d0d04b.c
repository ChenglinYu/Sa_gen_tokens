#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_2[93];          // Tag.BODY
    entity_7 = 72;              // Tag.BODY
    entity_1 = 35;              // Tag.BODY
    if (entity_9 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 65;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_1] = 'A';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER