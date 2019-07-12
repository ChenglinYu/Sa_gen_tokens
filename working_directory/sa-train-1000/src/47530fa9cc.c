#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4 = 78;              // Tag.BODY
    entity_0 = 7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_3[58];          // Tag.BODY
    entity_8 = 31;              // Tag.BODY
    char entity_2[36];          // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    entity_2[entity_0] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_3[entity_4] = 's';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7 = 61;              // Tag.BODY
    char entity_1[31];          // Tag.BODY
    entity_1[entity_7] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER