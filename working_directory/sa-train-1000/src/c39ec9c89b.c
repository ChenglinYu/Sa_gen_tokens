#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 44;              // Tag.BODY
    char entity_2[22];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_8 = 34;              // Tag.BODY
    if (entity_7 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 12;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_7){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_0] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER