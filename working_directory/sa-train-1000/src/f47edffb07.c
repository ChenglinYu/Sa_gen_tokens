#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_9 = 13;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[28];          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_1[11];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    entity_6 = 68;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 82;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 58;              // Tag.BODY
    entity_1[entity_6] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_8[9];           // Tag.BODY
    entity_5[entity_9] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_7] = 'U';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER