#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[46];          // Tag.BODY
    char entity_8[72];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 14;              // Tag.BODY
    entity_6 = 75;              // Tag.BODY
    entity_9 = 30;              // Tag.BODY
    while(entity_6 < entity_9){ // Tag.BODY
    entity_4[entity_5] = 'P';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = '8';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER