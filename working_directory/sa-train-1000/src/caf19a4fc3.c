#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_0[33];          // Tag.BODY
    entity_8 = 94;              // Tag.BODY
    entity_4 = 5;               // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_4] = 'I';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER