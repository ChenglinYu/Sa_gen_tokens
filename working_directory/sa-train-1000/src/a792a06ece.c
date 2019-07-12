#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_9 = 21;              // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_5[23];          // Tag.BODY
    entity_1 = 87;              // Tag.BODY
    char entity_4[84];          // Tag.BODY
    entity_6 = 16;              // Tag.BODY
    entity_5[entity_6] = 'E';   // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[80];          // Tag.BODY
    entity_2 = 61;              // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_1] = 'e';   // Tag.BUFWRITE_COND_UNSAFE
    entity_0[entity_9] = 'm';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER