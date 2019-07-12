#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    char entity_2[13];          // Tag.BODY
    entity_1 = 86;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[93];          // Tag.BODY
    entity_7 = 71;              // Tag.BODY
    entity_3 = 2;               // Tag.BODY
    if (entity_4 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 31;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_3] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    int entity_9;               // Tag.BODY
    char entity_5[90];          // Tag.BODY
    entity_8[entity_1] = 'U';   // Tag.BUFWRITE_COND_SAFE
    entity_9 = 19;              // Tag.BODY
    entity_5[entity_9] = 'F';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER