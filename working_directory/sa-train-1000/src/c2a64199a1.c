#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 37;              // Tag.BODY
    entity_9 = 54;              // Tag.BODY
    char entity_1[90];          // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_8] = '6';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER