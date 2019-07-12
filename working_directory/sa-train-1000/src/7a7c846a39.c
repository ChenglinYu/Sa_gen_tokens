#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_8[13];          // Tag.BODY
    char entity_4[18];          // Tag.BODY
    entity_6 = 96;              // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3 = 9;               // Tag.BODY
    entity_1 = 26;              // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_4[entity_1] = 'j';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_8[entity_6] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 11;              // Tag.BODY
    char entity_9[66];          // Tag.BODY
    entity_9[entity_7] = 'y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER