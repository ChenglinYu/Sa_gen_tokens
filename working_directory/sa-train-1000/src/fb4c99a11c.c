#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_1[8];           // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 92;              // Tag.BODY
    entity_6 = 92;              // Tag.BODY
    while(entity_6 < entity_5){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_6] = 'G';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER