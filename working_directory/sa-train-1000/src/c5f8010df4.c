#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_9 = 66;              // Tag.BODY
    char entity_2[24];          // Tag.BODY
    entity_8 = 92;              // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_5[33];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_2[entity_8] = 'i';   // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 33;              // Tag.BODY
    entity_5[entity_4] = 'l';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER