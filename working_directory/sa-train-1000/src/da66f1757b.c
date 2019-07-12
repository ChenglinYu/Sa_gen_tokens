#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 65;              // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_1[64];          // Tag.BODY
    entity_8 = 79;              // Tag.BODY
    while(entity_8 < entity_6){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1[entity_8] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;               // Tag.BODY
    entity_9 = 68;              // Tag.BODY
    char entity_2[79];          // Tag.BODY
    char entity_0[14];          // Tag.BODY
    entity_3 = 78;              // Tag.BODY
    entity_2[entity_3] = 's';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0[entity_9] = 'g';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER