#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_7[52];          // Tag.BODY
    char entity_9[89];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5 = 8;               // Tag.BODY
    entity_3 = 11;              // Tag.BODY
    entity_0 = 57;              // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_9[entity_3] = '3';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER