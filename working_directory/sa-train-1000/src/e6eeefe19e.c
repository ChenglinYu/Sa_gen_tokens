#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_0 = 68;              // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[88];          // Tag.BODY
    char entity_9[39];          // Tag.BODY
    entity_3 = 46;              // Tag.BODY
    entity_6 = 10;              // Tag.BODY
    while(entity_6 < entity_0){ // Tag.BODY
    entity_9[entity_3] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_6] = '3';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER