#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_3[94];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 41;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 87;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_8){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 70;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_6){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_1] = 'Z';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER