#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_1[31];          // Tag.BODY
    entity_2 = 10;              // Tag.BODY
    entity_5 = 67;              // Tag.BODY
    while(entity_2 < entity_5){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_7[58];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 13;              // Tag.BODY
    entity_1[entity_2] = 'd';   // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_4] = 'u';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER