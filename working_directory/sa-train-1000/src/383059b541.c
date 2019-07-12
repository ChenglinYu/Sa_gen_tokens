#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_4[58];          // Tag.BODY
    entity_5 = 43;              // Tag.BODY
    entity_3 = 2;               // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_2[24];          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 37;              // Tag.BODY
    entity_4[entity_5] = 's';   // Tag.BUFWRITE_COND_SAFE
    char entity_8[90];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 21;              // Tag.BODY
    entity_2[entity_9] = 'w';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8[entity_7] = 'x';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER