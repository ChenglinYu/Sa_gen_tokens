#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_2[30];          // Tag.BODY
    entity_0 = 96;              // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 14;              // Tag.BODY
    char entity_7[90];          // Tag.BODY
    entity_7[entity_0] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_4[70];          // Tag.BODY
    entity_3 = 47;              // Tag.BODY
    entity_8 = 83;              // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    entity_2[entity_8] = 'j';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_4[entity_3] = 'G';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER