#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_0[11];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 29;              // Tag.BODY
    entity_0[entity_8] = 'k';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_7 = 44;              // Tag.BODY
    entity_9 = 81;              // Tag.BODY
    char entity_1[32];          // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_9] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER