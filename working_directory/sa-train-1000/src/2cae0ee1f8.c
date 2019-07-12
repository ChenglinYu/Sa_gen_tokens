#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_2 = 49;              // Tag.BODY
    entity_3 = 22;              // Tag.BODY
    char entity_7[98];          // Tag.BODY
    if (entity_9 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_2] = 'D';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER