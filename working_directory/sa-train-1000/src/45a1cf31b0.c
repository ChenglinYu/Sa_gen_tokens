#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_0[98];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_4 = 34;              // Tag.BODY
    entity_2 = 48;              // Tag.BODY
    entity_6 = rand();          // Tag.BODY
    if (entity_6 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_6 = 39;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 16;              // Tag.BODY
    entity_0[entity_4] = 'T';   // Tag.BUFWRITE_COND_SAFE
    char entity_8[11];          // Tag.BODY
    entity_8[entity_1] = 'U';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER