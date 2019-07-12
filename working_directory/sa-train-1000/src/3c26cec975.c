#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[31];          // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_8 = 52;              // Tag.BODY
    if (entity_9 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 82;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_9){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_2] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER