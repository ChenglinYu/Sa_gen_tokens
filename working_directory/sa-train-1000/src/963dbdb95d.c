#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_2[89];          // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_6 = 18;              // Tag.BODY
    char entity_8[1];           // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3 = 69;              // Tag.BODY
    entity_8[entity_3] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 38;              // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_6] = 'M';   // Tag.BUFWRITE_COND_SAFE
    int entity_7;               // Tag.BODY
    char entity_1[69];          // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    entity_1[entity_7] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER