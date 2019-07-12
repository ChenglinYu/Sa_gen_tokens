#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_3[46];          // Tag.BODY
    entity_6 = 10;              // Tag.BODY
    entity_0 = 61;              // Tag.BODY
    if (entity_2 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 4;               // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_2){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_6] = 'a';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER