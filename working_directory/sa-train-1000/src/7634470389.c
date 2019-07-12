#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    char entity_5[87];          // Tag.BODY
    entity_0 = 91;              // Tag.BODY
    entity_6 = 49;              // Tag.BODY
    if (entity_3 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 9;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_6] = 'S';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER