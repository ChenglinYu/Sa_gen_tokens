#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_0 = 64;              // Tag.BODY
    char entity_4[76];          // Tag.BODY
    entity_5 = 94;              // Tag.BODY
    char entity_9[20];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_2 = 63;              // Tag.BODY
    entity_3 = 58;              // Tag.BODY
    char entity_8[42];          // Tag.BODY
    if (entity_1 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 61;              // Tag.BODY
    entity_9[entity_0] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    entity_8[entity_5] = 'z';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_4[entity_2] = 'u';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER