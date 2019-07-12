#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2 = 79;              // Tag.BODY
    char entity_4[90];          // Tag.BODY
    entity_6 = 82;              // Tag.BODY
    entity_8 = 85;              // Tag.BODY
    entity_4[entity_2] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_9[63];          // Tag.BODY
    if (entity_7 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 9;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_7){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_6] = 'h';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER