#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_0 = 23;              // Tag.BODY
    char entity_2[64];          // Tag.BODY
    entity_3 = 35;              // Tag.BODY
    while(entity_0 < entity_3){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_6[52];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 44;              // Tag.BODY
    entity_2[entity_0] = 'E';   // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_5] = 'W';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER