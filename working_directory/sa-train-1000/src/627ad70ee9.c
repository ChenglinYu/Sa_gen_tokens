#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_3 = 32;              // Tag.BODY
    entity_8 = 70;              // Tag.BODY
    char entity_7[67];          // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 52;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_3] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER