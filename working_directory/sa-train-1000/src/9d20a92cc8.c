#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_9[26];          // Tag.BODY
    entity_3 = 19;              // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_1[87];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 81;              // Tag.BODY
    entity_4 = 92;              // Tag.BODY
    entity_2 = 0;               // Tag.BODY
    entity_9[entity_4] = 'h';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[32];          // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_1[entity_3] = 'r';   // Tag.BUFWRITE_TAUT_SAFE
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_7] = '3';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER