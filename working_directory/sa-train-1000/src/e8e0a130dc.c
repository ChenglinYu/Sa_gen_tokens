#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_4 = 69;              // Tag.BODY
    entity_3 = 80;              // Tag.BODY
    char entity_1[56];          // Tag.BODY
    entity_6 = 67;              // Tag.BODY
    char entity_7[7];           // Tag.BODY
    entity_7[entity_4] = 'u';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_6] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;               // Tag.BODY
    entity_9 = 27;              // Tag.BODY
    char entity_0[99];          // Tag.BODY
    entity_0[entity_9] = 'y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER