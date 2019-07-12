#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 12;              // Tag.BODY
    char entity_0[65];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 46;              // Tag.BODY
    entity_7 = 37;              // Tag.BODY
    char entity_1[54];          // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 95;              // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 'V';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[22];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 23;              // Tag.BODY
    entity_4[entity_3] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_8] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER