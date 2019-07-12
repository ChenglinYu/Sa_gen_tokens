#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    char entity_3[48];          // Tag.BODY
    entity_0 = 63;              // Tag.BODY
    entity_8 = 37;              // Tag.BODY
    if (entity_2 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 41;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 40;              // Tag.BODY
    char entity_4[98];          // Tag.BODY
    entity_3[entity_0] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_5] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER