#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 32;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 93;              // Tag.BODY
    char entity_1[87];          // Tag.BODY
    while(entity_7 < entity_6){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[23];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1[entity_7] = 'r';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 9;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 16;              // Tag.BODY
    entity_2[entity_8] = 'b';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_3[49];          // Tag.BODY
    entity_3[entity_0] = 'g';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER