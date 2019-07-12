#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_6[7];           // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 76;              // Tag.BODY
    entity_3 = 41;              // Tag.BODY
    char entity_2[94];          // Tag.BODY
    entity_8 = 72;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_8] = 'm';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[7];           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_6[entity_1] = 'J';   // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 17;              // Tag.BODY
    entity_0[entity_5] = 'R';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER