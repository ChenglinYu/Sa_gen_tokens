#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0 = 49;              // Tag.BODY
    entity_5 = 37;              // Tag.BODY
    char entity_8[37];          // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_0] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER