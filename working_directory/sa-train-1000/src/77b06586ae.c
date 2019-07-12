#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_9[92];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = rand();          // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    entity_4 = 81;              // Tag.BODY
    if (entity_5 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_5 = 82;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_0] = 'l';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER