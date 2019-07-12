#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 39;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_2 = 97;              // Tag.BODY
    char entity_5[65];          // Tag.BODY
    if (entity_3 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 53;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_5[entity_6] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 38;              // Tag.BODY
    char entity_9[43];          // Tag.BODY
    entity_9[entity_4] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER