#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[84];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_7 = 56;              // Tag.BODY
    entity_1 = 14;              // Tag.BODY
    char entity_9[12];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 3;               // Tag.BODY
    if (entity_4 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0[entity_5] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 69;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER