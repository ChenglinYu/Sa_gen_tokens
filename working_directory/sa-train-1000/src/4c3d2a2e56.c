#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_8[84];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 44;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_7 = 58;              // Tag.BODY
    char entity_3[84];          // Tag.BODY
    entity_5 = 15;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_0[6];           // Tag.BODY
    entity_1 = 65;              // Tag.BODY
    if (entity_9 < entity_1){   // Tag.BODY
    entity_8[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_9 = 14;              // Tag.BODY
    entity_0[entity_7] = '5';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_5] = '3';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER