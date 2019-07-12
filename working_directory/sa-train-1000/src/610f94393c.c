#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_2[87];          // Tag.BODY
    char entity_8[63];          // Tag.BODY
    entity_6 = 99;              // Tag.BODY
    entity_3 = 66;              // Tag.BODY
    entity_7 = 81;              // Tag.BODY
    while(entity_7 < entity_3){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    entity_8[entity_6] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_2[entity_7] = 'l';   // Tag.BUFWRITE_COND_SAFE
    int entity_1;               // Tag.BODY
    entity_1 = 27;              // Tag.BODY
    char entity_0[62];          // Tag.BODY
    entity_0[entity_1] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER