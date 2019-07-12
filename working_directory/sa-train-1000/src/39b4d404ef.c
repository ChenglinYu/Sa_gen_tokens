#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = 16;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_3[16];          // Tag.BODY
    entity_9 = 51;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 12;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;               // Tag.BODY
    char entity_0[45];          // Tag.BODY
    entity_4 = 31;              // Tag.BODY
    entity_0[entity_4] = 'q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER