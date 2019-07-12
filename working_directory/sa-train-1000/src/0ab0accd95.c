#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    char entity_4[61];          // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_0 = 82;              // Tag.BODY
    entity_8 = 0;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    if (entity_9 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 36;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_9){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_0] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER