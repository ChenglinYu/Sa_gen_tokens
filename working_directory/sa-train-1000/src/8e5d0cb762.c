#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_2[79];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_1 = 56;              // Tag.BODY
    entity_7 = 68;              // Tag.BODY
    entity_9 = 47;              // Tag.BODY
    char entity_0[31];          // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0[entity_1] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2[entity_9] = 't';   // Tag.BUFWRITE_TAUT_SAFE
    entity_5 = 11;              // Tag.BODY
    char entity_6[31];          // Tag.BODY
    entity_6[entity_5] = 'T';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER