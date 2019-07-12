#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_3 = 36;              // Tag.BODY
    entity_5 = 11;              // Tag.BODY
    entity_9 = 87;              // Tag.BODY
    char entity_2[78];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0 = 6;               // Tag.BODY
    char entity_6[81];          // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_1[31];          // Tag.BODY
    entity_6[entity_3] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    if (entity_8 < entity_5){   // Tag.BODY
    entity_2[entity_0] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_8 = 17;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_9] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER