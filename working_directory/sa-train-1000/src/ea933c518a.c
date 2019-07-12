#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_7 = 3;               // Tag.BODY
    char entity_0[33];          // Tag.BODY
    entity_8 = 28;              // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = 's';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER