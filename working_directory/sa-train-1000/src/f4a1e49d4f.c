#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    entity_5 = 2;               // Tag.BODY
    char entity_0[0];           // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_6[8];           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_9 = 93;              // Tag.BODY
    char entity_7[91];          // Tag.BODY
    entity_6[entity_5] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 0;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 35;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_2){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'q';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_9] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER