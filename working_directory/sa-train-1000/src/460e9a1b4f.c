#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    entity_7 = 45;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 88;              // Tag.BODY
    char entity_0[16];          // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_7] = '4';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER