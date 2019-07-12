#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[94];          // Tag.BODY
    entity_3 = 72;              // Tag.BODY
    entity_5 = 92;              // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_8[84];          // Tag.BODY
    char entity_2[72];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1[entity_5] = 'l';   // Tag.BUFWRITE_COND_SAFE
    entity_9 = 75;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_8[entity_9] = 'v';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 77;              // Tag.BODY
    entity_2[entity_0] = 'b';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER