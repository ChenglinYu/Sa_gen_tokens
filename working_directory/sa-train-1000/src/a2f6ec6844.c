#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 19;              // Tag.BODY
    char entity_0[49];          // Tag.BODY
    entity_3 = 30;              // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_3] = 'b';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER