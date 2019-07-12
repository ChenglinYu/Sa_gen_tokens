#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_2[38];          // Tag.BODY
    entity_7 = 60;              // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_1[41];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 39;              // Tag.BODY
    entity_3 = 32;              // Tag.BODY
    while(entity_6 < entity_3){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    entity_1[entity_7] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_2[entity_6] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER