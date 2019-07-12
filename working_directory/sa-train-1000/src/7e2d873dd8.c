#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 34;              // Tag.BODY
    entity_8 = 1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_7[78];          // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    if (entity_9 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 1;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_8] = 'o';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER