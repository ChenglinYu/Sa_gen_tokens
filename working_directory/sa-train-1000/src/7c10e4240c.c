#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_0[91];          // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    entity_5 = 39;              // Tag.BODY
    if (entity_9 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 57;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'S';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER