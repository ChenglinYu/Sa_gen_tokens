#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 71;              // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[53];          // Tag.BODY
    entity_0 = 84;              // Tag.BODY
    while(entity_0 < entity_6){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[53];          // Tag.BODY
    entity_4[entity_0] = 'm';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;               // Tag.BODY
    entity_9 = 51;              // Tag.BODY
    entity_5[entity_9] = '5';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER