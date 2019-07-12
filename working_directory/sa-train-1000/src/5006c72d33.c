#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_0[65];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_1 = 24;              // Tag.BODY
    entity_8 = 93;              // Tag.BODY
    while(entity_8 < entity_1){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_8] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER