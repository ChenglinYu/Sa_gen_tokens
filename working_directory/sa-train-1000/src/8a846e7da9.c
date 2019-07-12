#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = 82;              // Tag.BODY
    entity_1 = 46;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_5[86];          // Tag.BODY
    if (entity_9 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 48;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_0] = '7';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER