#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 14;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_5[71];          // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    if (entity_9 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 58;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = 'H';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER