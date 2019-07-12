#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    char entity_2[86];          // Tag.BODY
    char entity_4[38];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_8 = 10;              // Tag.BODY
    entity_9 = 81;              // Tag.BODY
    entity_1 = 14;              // Tag.BODY
    while(entity_1 < entity_9){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_0[8];           // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2[entity_8] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_1] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 70;              // Tag.BODY
    entity_0[entity_6] = 'o';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER