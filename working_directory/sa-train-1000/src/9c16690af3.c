#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_4 = 42;              // Tag.BODY
    entity_3 = 5;               // Tag.BODY
    char entity_1[64];          // Tag.BODY
    if (entity_5 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 28;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_9 = 62;              // Tag.BODY
    entity_1[entity_4] = 'I';   // Tag.BUFWRITE_COND_SAFE
    char entity_2[4];           // Tag.BODY
    char entity_6[45];          // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    entity_6[entity_8] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_9] = 'G';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER