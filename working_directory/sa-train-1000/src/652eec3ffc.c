#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_8[90];          // Tag.BODY
    entity_7 = 36;              // Tag.BODY
    entity_8[entity_7] = 'U';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 98;              // Tag.BODY
    entity_0 = 16;              // Tag.BODY
    char entity_5[38];          // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_0] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER