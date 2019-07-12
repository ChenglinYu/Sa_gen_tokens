#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_5[38];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 94;              // Tag.BODY
    entity_3 = 33;              // Tag.BODY
    entity_9 = 12;              // Tag.BODY
    entity_8 = 24;              // Tag.BODY
    char entity_7[64];          // Tag.BODY
    char entity_2[93];          // Tag.BODY
    entity_5[entity_1] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_8 < entity_3){ // Tag.BODY
    entity_7[entity_9] = 'g';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = '4';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER