#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_4[44];          // Tag.BODY
    char entity_8[94];          // Tag.BODY
    entity_2 = 89;              // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 48;              // Tag.BODY
    char entity_1[15];          // Tag.BODY
    entity_5 = 40;              // Tag.BODY
    entity_0 = 7;               // Tag.BODY
    entity_1[entity_0] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_2 < entity_5){ // Tag.BODY
    entity_8[entity_7] = 'g';   // Tag.BUFWRITE_TAUT_SAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_2] = 'U';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER