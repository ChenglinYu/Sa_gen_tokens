#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_5 = 28;              // Tag.BODY
    char entity_8[7];           // Tag.BODY
    entity_4 = 41;              // Tag.BODY
    while(entity_4 < entity_5){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_4] = 'f';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER