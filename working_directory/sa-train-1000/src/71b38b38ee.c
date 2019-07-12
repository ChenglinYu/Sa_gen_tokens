#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_1[0];           // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6 = 19;              // Tag.BODY
    char entity_2[25];          // Tag.BODY
    entity_3 = 89;              // Tag.BODY
    entity_0 = 14;              // Tag.BODY
    if (entity_9 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 76;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_9){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_0] = 'w';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_3] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER