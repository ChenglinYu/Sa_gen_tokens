#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_0[53];          // Tag.BODY
    entity_9 = 7;               // Tag.BODY
    entity_5 = 49;              // Tag.BODY
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0[entity_5] = 'w';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 49;              // Tag.BODY
    char entity_1[27];          // Tag.BODY
    entity_1[entity_3] = 'T';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER