#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[90];          // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_9[93];          // Tag.BODY
    entity_8 = 98;              // Tag.BODY
    entity_0 = 74;              // Tag.BODY
    entity_4 = 90;              // Tag.BODY
    while(entity_8 < entity_4){ // Tag.BODY
    entity_2[entity_0] = 'G';   // Tag.BUFWRITE_TAUT_SAFE
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_8] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER