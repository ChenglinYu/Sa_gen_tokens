#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_2[65];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 66;              // Tag.BODY
    entity_4 = 45;              // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    if (entity_7 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[98];          // Tag.BODY
    char entity_0[98];          // Tag.BODY
    entity_2[entity_6] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = 58;              // Tag.BODY
    entity_5 = 92;              // Tag.BODY
    entity_0[entity_8] = 'o';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER