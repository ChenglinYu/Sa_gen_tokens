#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 70;              // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_5[22];          // Tag.BODY
    char entity_6[8];           // Tag.BODY
    entity_2 = 87;              // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_7 = 25;              // Tag.BODY
    entity_9 = 62;              // Tag.BODY
    char entity_0[37];          // Tag.BODY
    while(entity_9 < entity_7){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_4] = 'O';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_9] = 'p';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_2] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER