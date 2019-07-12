#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    char entity_1[53];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_5 = 93;              // Tag.BODY
    entity_2 = 39;              // Tag.BODY
    while(entity_5 < entity_2){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER