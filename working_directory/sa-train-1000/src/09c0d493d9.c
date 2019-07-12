#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_2[11];          // Tag.BODY
    entity_9 = 9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_5 = 24;              // Tag.BODY
    char entity_8[57];          // Tag.BODY
    entity_6 = 55;              // Tag.BODY
    if (entity_3 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 21;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_5] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_9] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER