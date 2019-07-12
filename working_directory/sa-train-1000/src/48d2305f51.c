#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 17;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_0[86];          // Tag.BODY
    char entity_2[61];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_9 = 61;              // Tag.BODY
    entity_3 = 51;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_2[entity_9] = 'p';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_4 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 49;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_6] = 'M';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER