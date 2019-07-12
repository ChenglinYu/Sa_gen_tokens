#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[66];          // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_2[98];          // Tag.BODY
    entity_8 = 7;               // Tag.BODY
    char entity_6[13];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 31;              // Tag.BODY
    entity_6[entity_8] = 'U';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 66;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3 = rand();          // Tag.BODY
    entity_4 = 18;              // Tag.BODY
    if (entity_3 < entity_1){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2[entity_4] = 'e';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 11;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_7] = 'U';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER