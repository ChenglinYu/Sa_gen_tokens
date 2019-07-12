#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 8;               // Tag.BODY
    char entity_4[81];          // Tag.BODY
    entity_5 = 41;              // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_7[22];          // Tag.BODY
    entity_4[entity_0] = 'W';   // Tag.BUFWRITE_COND_SAFE
    int entity_9;               // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    char entity_8[38];          // Tag.BODY
    entity_8[entity_6] = 'h';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 61;              // Tag.BODY
    entity_7[entity_9] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER