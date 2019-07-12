#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_5[68];          // Tag.BODY
    entity_6 = 7;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    if (entity_3 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_3 = 18;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_8 < entity_3){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_8] = 'G';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER