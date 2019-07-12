#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[66];          // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[49];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_2[86];          // Tag.BODY
    entity_7 = 97;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 26;              // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_3 = 63;              // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    if (entity_5 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 22;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_5){ // Tag.BODY
    entity_1[entity_3] = 'P';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4[entity_7] = '1';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'p';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER