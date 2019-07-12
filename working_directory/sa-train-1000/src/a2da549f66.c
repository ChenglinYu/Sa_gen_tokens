#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    char entity_1[51];          // Tag.BODY
    entity_3 = 98;              // Tag.BODY
    char entity_0[78];          // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_4 = 83;              // Tag.BODY
    entity_9 = 25;              // Tag.BODY
    while(entity_3 < entity_4){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[64];          // Tag.BODY
    entity_0[entity_3] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_7 = 52;              // Tag.BODY
    entity_1[entity_9] = 'V';   // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_7] = 'k';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER