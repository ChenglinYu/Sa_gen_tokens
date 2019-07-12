#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    entity_9 = 72;              // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[86];          // Tag.BODY
    entity_2 = 59;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 79;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_2] = 'K';   // Tag.BUFWRITE_COND_SAFE
    int entity_8;               // Tag.BODY
    char entity_3[29];          // Tag.BODY
    entity_8 = 58;              // Tag.BODY
    entity_3[entity_8] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER