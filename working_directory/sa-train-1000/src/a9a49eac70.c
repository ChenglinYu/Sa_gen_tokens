#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[24];          // Tag.BODY
    char entity_5[69];          // Tag.BODY
    entity_9 = 99;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_6 = 26;              // Tag.BODY
    entity_7 = 47;              // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_5[entity_7] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;               // Tag.BODY
    char entity_0[51];          // Tag.BODY
    entity_4 = 4;               // Tag.BODY
    entity_0[entity_4] = 'j';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER