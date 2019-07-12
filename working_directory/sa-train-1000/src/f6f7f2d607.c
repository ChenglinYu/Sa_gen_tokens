#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 93;              // Tag.BODY
    char entity_1[78];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 35;              // Tag.BODY
    entity_0 = 51;              // Tag.BODY
    char entity_3[99];          // Tag.BODY
    entity_3[entity_4] = '1';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_5 < entity_0){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_5] = 'd';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER