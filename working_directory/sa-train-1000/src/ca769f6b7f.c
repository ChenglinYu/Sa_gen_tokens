#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[39];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 16;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_6 = 39;              // Tag.BODY
    if (entity_8 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 22;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_9] = 'R';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER