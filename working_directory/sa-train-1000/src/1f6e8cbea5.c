#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_1[98];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_6 = 92;              // Tag.BODY
    entity_0 = 93;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 98;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[94];          // Tag.BODY
    entity_1[entity_6] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8 = 21;              // Tag.BODY
    char entity_4[47];          // Tag.BODY
    entity_9[entity_8] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 24;              // Tag.BODY
    entity_4[entity_7] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER