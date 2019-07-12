#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_3[28];          // Tag.BODY
    entity_0 = 61;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_2 = 83;              // Tag.BODY
    if (entity_1 < entity_0){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 93;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 32;              // Tag.BODY
    entity_3[entity_2] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[43];          // Tag.BODY
    entity_9[entity_7] = 'H';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER