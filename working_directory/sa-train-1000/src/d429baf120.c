#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_0[96];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 86;              // Tag.BODY
    entity_7 = 72;              // Tag.BODY
    if (entity_4 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 3;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_9[93];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0[entity_7] = '4';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 36;              // Tag.BODY
    entity_9[entity_3] = 'H';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER