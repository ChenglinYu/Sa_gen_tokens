#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[97];          // Tag.BODY
    entity_3 = 25;              // Tag.BODY
    entity_1 = 62;              // Tag.BODY
    while(entity_1 < entity_3){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_7[44];          // Tag.BODY
    char entity_8[97];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 15;              // Tag.BODY
    entity_8[entity_4] = 'M';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2[entity_1] = 'V';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 68;              // Tag.BODY
    entity_7[entity_0] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER