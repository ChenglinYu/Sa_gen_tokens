#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 78;              // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_8 = 52;              // Tag.BODY
    entity_2 = 98;              // Tag.BODY
    char entity_9[49];          // Tag.BODY
    char entity_0[77];          // Tag.BODY
    entity_0[entity_1] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_3 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 61;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_8] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER