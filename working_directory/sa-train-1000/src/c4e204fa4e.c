#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_4[12];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[57];          // Tag.BODY
    entity_1 = 92;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    entity_0 = 2;               // Tag.BODY
    if (entity_6 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 66;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_6){ // Tag.BODY
    entity_4[entity_0] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_9] = 'J';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER