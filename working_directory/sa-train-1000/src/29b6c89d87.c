#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_3 = 33;              // Tag.BODY
    char entity_8[49];          // Tag.BODY
    entity_6 = 31;              // Tag.BODY
    if (entity_1 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 26;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_3] = 'w';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER