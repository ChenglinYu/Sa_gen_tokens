#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8 = 91;              // Tag.BODY
    entity_9 = 45;              // Tag.BODY
    char entity_2[47];          // Tag.BODY
    while(entity_8 < entity_9){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[78];          // Tag.BODY
    entity_2[entity_8] = '3';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_7 = 54;              // Tag.BODY
    entity_4[entity_7] = 'f';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER