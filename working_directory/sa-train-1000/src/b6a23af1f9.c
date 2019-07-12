#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_0[86];          // Tag.BODY
    entity_8 = 34;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    entity_3 = 60;              // Tag.BODY
    if (entity_9 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 11;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'N';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER