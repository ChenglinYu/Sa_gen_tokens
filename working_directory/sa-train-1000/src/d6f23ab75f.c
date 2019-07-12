#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_4[9];           // Tag.BODY
    entity_7 = 2;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 42;              // Tag.BODY
    char entity_8[98];          // Tag.BODY
    char entity_9[49];          // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 36;              // Tag.BODY
    entity_3 = 36;              // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 1;               // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_3] = 'N';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_6){ // Tag.BODY
    entity_4[entity_0] = '4';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_7] = '8';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER