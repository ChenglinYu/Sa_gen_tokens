#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    char entity_0[25];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_6 = 91;              // Tag.BODY
    entity_8 = 51;              // Tag.BODY
    while(entity_6 < entity_8){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_6] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER