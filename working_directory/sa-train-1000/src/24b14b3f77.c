#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    entity_4 = 32;              // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 55;              // Tag.BODY
    entity_9 = 76;              // Tag.BODY
    char entity_3[64];          // Tag.BODY
    char entity_6[54];          // Tag.BODY
    while(entity_7 < entity_9){ // Tag.BODY
    entity_3[entity_4] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_8[49];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_6[entity_7] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 44;              // Tag.BODY
    entity_8[entity_2] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER