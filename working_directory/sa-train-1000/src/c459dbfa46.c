#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_2[11];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_1[7];           // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_8 = 76;              // Tag.BODY
    entity_9 = 15;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 75;              // Tag.BODY
    char entity_6[88];          // Tag.BODY
    entity_7 = 92;              // Tag.BODY
    entity_2[entity_9] = 'L';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_0 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 33;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_6[entity_5] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_8] = 'Z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER